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
    Movie(std::string name, std::string rating, int watching_count = 0);
    
    int increase_watch_count();
    std::string get_name() const;
    std::string get_rating() const;
    int get_watch_count() const;
};

#endif