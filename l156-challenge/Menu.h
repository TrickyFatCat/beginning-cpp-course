#ifndef _MENU_H_
#define _MENU_H_

#include <string>
#include "MoviesManager.h"
#include "Movies.h"

using namespace std;

class Menu
{
private:
    char query {};
    void process_add_movie(MoviesManager &manager, Movies &movies);
    void process_delete_movie(MoviesManager &manager, Movies &movies);
    void process_watch_count_increase(MoviesManager &manager, Movies &movies);
    void process_show_movie_data(MoviesManager &manager, Movies &movies);
public:
    char get_query() const;
    void draw_menu() const;
    void process_query(MoviesManager &manager, Movies &movies);
};

#endif