#include <iostream>
#include <vector>
#include <string>
#include "Movie.h"
#include "Movies.h"
#include "MoviesManager.h"

using namespace std; 

void MoviesManager::show_movie_data(const Movie &movie) const
{
    cout<<movie.get_name()<<" | "<<movie.get_rating()<<" | "<<movie.get_watch_count()<<endl;
}

void MoviesManager::show_error_empty_list() const
{
    cout<<"The list is empty.\n";
}

void MoviesManager::show_error_movie_not_found(string movie_name) const
{
    cout<<"Movie "<<movie_name<<" not found in the list.\n";
}

void MoviesManager::show_all_movies(Movies &movies)
{
    if (movies.is_list_empty())
    {
        show_error_empty_list();
        return;
    }

    for(const auto &movie: *movies.get_movies_list())
    {
        show_movie_data(movie);
    }
}

void MoviesManager::show_movie_data(Movies &movies, string movie_name)
{
    if (movies.is_list_empty())
    {
        show_error_empty_list();
        return;
    }
   
    for(const auto &movie: *movies.get_movies_list())
    {
        if (movie.get_name() == movie_name)
        {
            show_movie_data(movie);
        }
    }
}

void MoviesManager::add_movie(Movies &movies, string movie_name, string rating, int watch_count)
{
    bool result {false};
    
    result = movies.add_movie(movie_name, rating, watch_count);

    if (result)
    {
        cout<<"New movie added.\n";
        show_movie_data(movies, movie_name);
    }
    else
    {
        cout<<"This movie is already in the list.\n";
        show_movie_data(movies, movie_name);
    }
    
}

void MoviesManager::increase_watch_count(Movies &movies, string movie_name)
{
    bool result {false};

    if(movies.is_list_empty())
    {
        show_error_empty_list();
        return;
    }
    
    result = movies.increase_watch_count(movie_name);

    if(result)
    {
        cout<<movie_name<<" watch count was increased.\n";
    }
    else
    {
        show_error_movie_not_found(movie_name);
    }
}

void MoviesManager::delete_movie(Movies &movies, string movie_name)
{
    bool result {false};

    if(movies.is_list_empty())
    {
        show_error_empty_list();
        return;
    }

    result = movies.delete_movie(movie_name);

    if(result)
    {
        cout<<movie_name<<" was deleted from the list.\n";
    }
    else
    {
        show_error_movie_not_found(movie_name);
    }
    
}