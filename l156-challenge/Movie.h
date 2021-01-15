#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

using namespace std;

class Movie
{
private:
    string name;
    string rating;
    int watch_count;
public:
    Movie(string name, string rating, int watching_count = 0);
    
    void increase_watch_count();
    string get_name() const;
    string get_rating() const;
    int get_watch_count() const;
};

#endif