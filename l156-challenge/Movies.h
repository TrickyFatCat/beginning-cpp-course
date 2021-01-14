#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <string>
#include <vector>
#include "Movie.h"

using namespace std;

class Movies
{
private:
    vector<Movie> movies_list;
public:
    vector<Movie> get_movies_list() const;
    Movie * find_movie_by_name(string movie_name);
    Movie * increase_watch_count(string movie_name);
    Movie * add_movie(string name, string rating, int watch_count = 0);
};

#endif