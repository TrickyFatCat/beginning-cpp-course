#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
private:
    std::string name;
    std::string rating;
    int watch_count;
public:
    int increase_watch_count();
    std::string get_name(const Movie &movie) const;
    std::string get_rating(const Movie &movie) const;
    int get_watch_count(const Movie &movie) const;

    Movie::Movie(std::string name, std::string rating, int watching_count = 0);
};

#endif