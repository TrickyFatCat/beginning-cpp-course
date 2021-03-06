#ifndef _MENU_H_
#define _MENU_H_

#include <string>
#include "Movies.h"

using namespace std;

class Menu
{
private:
    char query {};
    string inquire_movie_name();
    void process_add_movie(Movies &movies);
    void process_delete_movie(Movies &movies);
    void process_watch_count_increase(Movies &movies);
    void process_show_movie_data(Movies &movies);
    void process_show_all_movies(Movies &movies);
    void show_movie_data(const Movie &movie);
    void show_movie_data(Movies &movies, string movie_name);
    void show_error_list_is_empty();
    void show_error_movie_not_found(string movie_name);
    string draw_border(int char_number, char char_border);
public:
    char get_query() const;
    void draw_menu();
    void process_query(Movies &movies);
};

#endif