#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "utility.h"

int main()
{
    std::ifstream in_file {};

    in_file.open("./files/romeoandjuliet.txt"); // One dot for debug inside VScode, two dots for executeable

    if(!in_file)
    {
        std::cout << "Error! Couldn't open the file." << std::endl;
        return 1;
    }

    std::cout << "Hello!" << std::endl;

    return 0;
}
