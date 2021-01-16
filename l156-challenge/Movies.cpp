#include <vector>
#include <string>
#include "Movie.h"
#include "Movies.h"

using namespace std;

vector<Movie> * Movies::get_movies_list()
{
    return &movies_list;
}

bool Movies::is_list_empty() const
{
    if(movies_list.size() > 0)
    {
        return false;
    }

    return true;
}

bool Movies::is_movie_in_list(string movie_name) const
{
    for(const Movie &movie: movies_list)
    {
        if(movie.get_name() == movie_name)
        {
            return true;
        }
    }

    return false;
}

bool Movies::increase_watch_count(string movie_name)
{
    if(!is_movie_in_list(movie_name))
    {
        return false;
    }

    for (Movie &movie: movies_list)
    {
        if(movie.get_name()==movie_name)
        {
            movie.increase_watch_count();
            return true;
            break;
        }
    }
}

bool Movies::add_movie(string movie_name, string rating, int watch_count)
{
    Movie *new_movie {nullptr};

    if(!is_movie_in_list(movie_name))
    {
        new_movie = new Movie(movie_name, rating, watch_count);
        movies_list.push_back(*new_movie);
        return true;
    }

    return false;
}

bool Movies::delete_movie(string movie_name)
{
    if(!is_movie_in_list(movie_name))
    {
        return false;
    }

    for(size_t i {0}; i < movies_list.size(); ++i)
    {
        if(movies_list.at(i).get_name() == movie_name)
        {
            movies_list.erase(movies_list.begin() + i);
            movies_list.shrink_to_fit();
            return true;
        }
    }
}