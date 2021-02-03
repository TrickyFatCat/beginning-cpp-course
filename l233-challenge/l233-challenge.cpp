#include <iostream>
#include <fstream>

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
    


    return 0;
}