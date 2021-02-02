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

    std::string target_word {};
    std::string current_word {};
    size_t word_count {0};

    std::cout << "Enter the substring to search for: ";
    std::cin >> target_word;
    std::cin.ignore();

    while(in_file >> current_word)
    {
        word_count++;
        
        if(find_substring(current_word, target_word))
        {
            std::cout << current_word << std::endl;
        }
    }

    std::cout << word_count << " words has been searched..." << std::endl;

    return 0;
}
