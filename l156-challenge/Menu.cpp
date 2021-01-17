#include <iostream>
#include <string>
#include "Menu.h"

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

void Menu::draw_menu()
{
    cout<<draw_border(32, '=')
        <<"A - to add movie to the list\n"
        <<"D - to delete movie from the list\n"
        <<"I - to increase watch count of a movie\n"
        <<"M - to show informasion about a movie\n"
        <<"L - to print the list of movies\n"
        <<"H - to show help\n"
        <<"Q - to quit the program\n"
        <<draw_border(32, '=');
}

void Menu::process_query(Movies &movies)
{
    cout<<draw_border(32, '=');
    cout<<"Please, enter the command: ";
    cin>>query;
    cin.ignore();
    cout<<draw_border(32, '=');

    switch (query)
    {
    case 'A':
    case 'a':
        cout<<"You've chosen to add a new movie.\n";
        cout<<draw_border(32, '-');
        process_add_movie(movies);
        break;
    
    case 'D':
    case 'd':
        cout<<"You've chosen to delete a movie.\n";
        cout<<draw_border(32, '-');
        process_delete_movie(movies);
        break;

    case 'I':
    case 'i':
        cout<<"You've chosen to increase watch count.\n";
        cout<<draw_border(32, '-');
        process_watch_count_increase(movies);
        break;

    case 'M':
    case 'm':
        cout<<"You've chosen to show data of a given movie.\n";
        cout<<draw_border(32, '-');
        process_show_movie_data(movies);
        break;

    case 'L':
    case 'l':
        cout<<"You have "<<movies.get_list_size()<<" movies in the list.\n";
        process_show_all_movies(movies);
        break;

    case 'H':
    case 'h':
        cout<<"Here is the list of possible commands.\n";
        draw_menu();
        break;

    case 'Q':
    case 'q':
        cout<<"Quitting the program...\n";
        cout<<draw_border(32, '-');
        cout<<"Done! Thank you!\n";
        break;
    
    default:
        cout<<"Invalid command. Enter H or h to show help.\n";
        break;
    }
}

void Menu::process_add_movie(Movies &movies)
{
    string rating {};
    int watch_count {0};
    string movie_name = inquire_movie_name();

    if (movies.is_movie_in_list(movie_name))
    {
        cout<<"This movie is already in the list.\n";
        show_movie_data(movies, movie_name); 
        return;
    }

    cout<<"Enter movie rating: ";
    cin>>rating;
    cin.ignore();
    cout<<"Enter watch count: ";
    cin>>watch_count;
    cin.ignore();

    cout<<draw_border(32, '-');
    cout<<"Adding new movie "<<movie_name<<" to the list...\n";
    
    bool result = movies.add_movie(movie_name, rating, watch_count);

    if (result)
    {
        cout<<"Done! "<<movie_name<< " has been added to the list.\n";
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
        cout<<draw_border(32, '-');
        cout<<"Deleting movie from the list...\n";
        cout<<"Done! "<<movie_name<<" was deleted from the list.\n";
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
        cout<<draw_border(32, '-');
        cout<<"Increasing watch count...\n";
        cout<<"Done! "<<movie_name<<" watch count was increased.\n";
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

    if (!movies.is_movie_in_list(movie_name))
    {
        show_error_movie_not_found(movie_name);
        return;
    }

    show_movie_data(movies, movie_name);
 }

void Menu::process_show_all_movies(Movies &movies)
{
    if(movies.is_list_empty())
    {
        return;
    }

    for(const auto &movie: *movies.get_movies_list())
    {
        show_movie_data(movie);
    } 
}

void Menu::show_movie_data(const Movie &movie)
{
    cout<<draw_border(32, '-');
    cout<<movie.get_name()<<" | "<<movie.get_rating()<<" | "<<movie.get_watch_count()<<endl;
    cout<<draw_border(32, '-');
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
   // cout<<draw_border(32, '-');
    cout<<"The list is empty.\n";
}

void Menu::show_error_movie_not_found(string movie_name)
{
    cout<<draw_border(32, '-');
    cout<<"Movie "<<movie_name<<" not found in the list.\n";
}

string Menu::draw_border(int char_number, char char_border)
{
    string border(char_number, char_border);

    return border + "\n";
}