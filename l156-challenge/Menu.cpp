#include <iostream>
#include <string>
#include "Menu.h"
#include "MoviesManager.h"

string Menu::inquire_movie_name()
{
   string movie_name {};

   cout<<"Enter movie name: ";
   getline(cin, movie_name);

   return movie_name;
}


char Menu::get_query() const
{
    return query;
}

void Menu::draw_menu() const
{
    cout<<"Welcome to the MovieList v1.0.\n"
        <<"A - to add movie to the list\n"
        <<"D - to delete movie from the list\n"
        <<"I - to increase watch count of a movie\n"
        <<"M - to show informasion about a movie\n"
        <<"L - to print the list of movies\n"
        <<"H - to show help\n"
        <<"Q - to quit the program\n";
}

void Menu::process_query(Movies &movies)
{
    cout<<"Please, enter the command: ";
    cin>>query;
    cin.ignore();

    switch (query)
    {
    case 'A':
    case 'a':
        process_add_movie(movies);
        break;
    
    case 'D':
    case 'd':
        process_delete_movie(movies);
        break;

    case 'I':
    case 'i':
        process_watch_count_increase(movies);
        break;

    case 'M':
    case 'm':
        process_show_movie_data(movies);
        break;

    case 'L':
    case 'l':
        process_show_all_movies(movies);
        break;

    case 'H':
    case 'h':
        draw_menu();
        break;

    case 'Q':
    case 'q':
        cout<<"Thank you!\n";
        break;
    
    default:
        cout<<"Invalid command. Enter H or h to show help.\n";
        break;
    }
}

void Menu::process_add_movie(Movies &movies)
{
    string movie_name {};
    string rating {};
    int watch_count {0};

    movie_name = inquire_movie_name();
    cout<<"Enter movie rating: ";
    cin>>rating;
    cin.ignore();
    cout<<"Enter watch count: ";
    cin>>watch_count;
    cin.ignore();
    
    bool result = movies.add_movie(movie_name, rating, watch_count);

    if (result)
    {
        cout<<"\nDone! New movie added.\n";
        show_movie_data(movies, movie_name);
    }
    else
    {
        cout<<"This movie is already in the list.\n";
        show_movie_data(movies, movie_name);
    }
}

void Menu::process_delete_movie(Movies &movies)
{
    if(movies.is_list_empty())
    {
        show_error_list_is_empty();
        return;
    }
    
    string movie_name = inquire_movie_name();
    bool result = movies.delete_movie(movie_name);

    if(result)
    {
        cout<<movie_name<<" was deleted from the list.\n";
    }
    else
    {
        show_error_movie_not_found(movie_name);
    }
}

void Menu::process_watch_count_increase(Movies &movies)
{
    if(movies.is_list_empty())
    {
        show_error_list_is_empty();
        return;
    }

    string movie_name = inquire_movie_name();
    bool result = movies.increase_watch_count(movie_name);

    if(result)
    {
        cout<<movie_name<<" watch count was increased.\n";
    }
    else
    {
        show_error_movie_not_found(movie_name);
    }
}

void Menu::process_show_movie_data(Movies &movies)
{
    if(movies.is_list_empty())
    {
        show_error_list_is_empty();
        return;
    }

    string movie_name = inquire_movie_name();

    show_movie_data(movies, movie_name);
 }

void Menu::process_show_all_movies(Movies &movies)
{
    if(movies.is_list_empty())
    {
        show_error_list_is_empty();
        return;
    }

    for(const auto &movie: *movies.get_movies_list())
    {
        show_movie_data(movie);
    } 
}

void Menu::show_movie_data(const Movie &movie) const
{
    cout<<movie.get_name()<<" | "<<movie.get_rating()<<" | "<<movie.get_watch_count()<<endl;
}

void Menu::show_movie_data(Movies &movies, string movie_name)
{
    for(const auto &movie: *movies.get_movies_list())
    {
        if (movie.get_name() == movie_name)
        {
            show_movie_data(movie);
        }
    }
}

void Menu::show_error_list_is_empty()
{
    cout<<"The list is empty.\n";
}

void Menu::show_error_movie_not_found(string movie_name) const
{
    cout<<"Movie "<<movie_name<<" not found in the list.\n";

}