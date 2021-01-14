#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int watch_count)
    : name {name}, rating {rating}, watch_count {watch_count}
{};

int Movie::increase_watch_count()
{
    return ++watch_count;
}

std::string Movie::get_name() const
{
    return name;
}

std::string Movie::get_rating() const
{
    return rating;
}

int Movie::get_watch_count() const
{
    return watch_count;
}