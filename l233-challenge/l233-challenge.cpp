#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    std::ifstream in_file {};
    std::ofstream out_file {};

    in_file.open("./files/romeoandjuliet.txt");
    
    if(!in_file)
    {
        std::cerr << "Error! Couldn't open the file." << std::endl;
        return 1;
    }

    out_file.open("./files/romeoandjuliet_v2.txt");

    if(!out_file)
    {
        std::cerr << "Error! Couldn't create the file." << std::endl;
    }
    
    std::string line {};
    size_t line_number {1};
    const int line_number_width {8};
    
    while(std::getline(in_file, line))
    {
        if(line.size() != 1)
        {
            out_file << std::setw(line_number_width) << std::left << line_number
                    << line << std::endl;
            line_number++;
        }
        else
        {
            out_file << line << std::endl;
        }
    }

    return 0;
}