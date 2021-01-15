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
    vector<Movie> *get_movies_list();
    bool is_list_empty() const;
    bool is_movie_in_list(string movie_name) const;
    bool increase_watch_count(string movie_name);
    bool add_movie(string movie_name, string rating, int watch_count = 0);
};

#endif