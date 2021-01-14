#include "Movie.h"
#include "Movies.h"
#include <vector>
#include <string>

using namespace std;

vector<Movie> Movies::get_movies_list() const
{
    return movies_list;
}

Movie * Movies::find_movie_by_name(string movie_name)
{
    Movie *result {nullptr};
    
    for(Movie movie: movies_list)
    {
        if (movie.get_name() == movie_name)
        {
            result = &movie;
            break;
        }
    }

    return result;
}

Movie * Movies::increase_watch_count(string movie_name)
{
    Movie *result {nullptr};
    Movie *movie {nullptr};

    movie = find_movie_by_name(movie_name);

    if (movie != 0)
    {
        movie->increase_watch_count();
        result = movie;
    }

    return result;
}

Movie *Movies::add_movie(string name, string rating, int watch_count)
{
    Movie *movie {nullptr};

    movie = find_movie_by_name(name);

    if (movie != 0)
    {
        movie = 0;
    }
    else
    {
        movie = new Movie(name, rating, watch_count);
        movies_list.push_back(*movie);
    }

    return movie;
}

