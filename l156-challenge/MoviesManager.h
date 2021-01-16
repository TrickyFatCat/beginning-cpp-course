#ifndef _MOVIESMANAGER_H_
#define _MOVIESMANAGER_H_

#include <string>
#include <vector>
#include "Movie.h"
#include "Movies.h"

using namespace std;

class MoviesManager
{ 
private:
    void show_movie_data(const Movie &movie) const;
    void show_error_empty_list() const;
    void show_error_movie_not_found(string movie_name) const;
public:
    void show_all_movies(Movies &movies);
    void show_movie_data(Movies &movies, string movie_name);
    void add_movie(Movies &movies,string movie_name, string rating, int watch_count = 0);
    void increase_watch_count(Movies &movies, string movie_name);
    void delete_movie(Movies &movies, string movie_name);
};

#endif