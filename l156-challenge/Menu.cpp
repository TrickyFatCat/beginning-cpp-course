#include <iostream>
#include <string>
#include "Menu.h"
#include "MoviesManager.h"

char Menu::get_query() const
{
    return query;
}

void Menu::draw_menu() const
{
    cout<<"Welcome to the MovieList v1.0\n"
        <<"A - to add movie to the list\n"
        <<"D - to delete movie from the list\n"
        <<"I - to increase watch count of a movie\n"
        <<"M - to show informasion about a movie\n"
        <<"L - to print the list of movies\n"
        <<"Q - to quit the program\n";
}

void Menu::process_query(MoviesManager &manager, Movies &movies)
{
    cout<<"Please, enter the command: ";
    cin>>query;
    cin.ignore();

    switch (query)
    {
    case 'A':
    case 'a':
        process_add_movie(manager, movies);
        break;
    
    case 'D':
    case 'd':
        process_delete_movie(manager, movies);
        break;

    case 'I':
    case 'i':
        process_watch_count_increase(manager, movies);
        break;

    case 'M':
    case 'm':
        break;

    case 'L':
    case 'l':
        break;

    case 'Q':
    case 'q':
        break;
    
    default:
        break;
    }
}

void Menu::process_add_movie(MoviesManager &manager, Movies &movies)
{
    string movie_name {};
    string rating {};
    int watch_count {0};

    cout<<"\nEnter movie name: ";
    getline(cin, movie_name);
    cout<<"\nEnter movie rating: ";
    cin>>rating;
    cout<<"\nEnter watch count: ";
    cin>>watch_count;

    manager.add_movie(movies, movie_name, rating, watch_count);
}

void Menu::process_delete_movie(MoviesManager &manager, Movies &movies)
{
    string movie_name {};

    cout<<"Enter movie name: ";
    getline(cin, movie_name);

    manager.delete_movie(movies, movie_name);
}

void Menu::process_watch_count_increase(MoviesManager &manager, Movies &movies)
{
    string movie_name {};

    cout<<"Enter movie name: ";
    getline(cin, movie_name);

    manager.increase_watch_count(movies, movie_name);
}