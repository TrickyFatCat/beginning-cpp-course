#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in_file;
    string data;

    in_file.open("../files/responses.txt");

    if(!in_file)
    {
        cerr << "Can't open the file." << endl;
        return 1;
    }
    
    while(in_file >> data)
    {
        cout<<data<<endl;
    }
    cout<<endl;
    return 0;
}

