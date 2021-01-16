#include <iostream>
#include <string>
#include <vector>
#include "Movie.h"
#include "Movies.h"
#include "MoviesManager.h"
#include "Menu.h"

using namespace std;

int main()
{
    Movies my_movies;
    Menu menu;
    menu.draw_menu();

    do
    {
        menu.process_query(my_movies);
    } while (menu.get_query() != 'Q' && menu.get_query() != 'q');
    cout<<endl;
    return 0;
}