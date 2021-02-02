#include <fstream>
#include <iostream>
#include "utility.h"

bool find_substring(const std::string &target_word, const std::string &substring)
{
    size_t result = target_word.find(substring);

    if (result == std::string::npos)
    {
        return false;
    }
    else
    {
        return true;
    }
}