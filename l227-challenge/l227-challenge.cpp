#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in_file {};

    in_file.open("./files/responses.txt"); // One dot for debug inside VsCode, two dots for binary. (Linux)

    if(!in_file)
    {
        cerr << "Can't open the file." << endl;
        return 1;
    }

    string data;
    string answer_key {};
    string student_name {};
    string student_answer {};
    int line {1};
    
    
    while(in_file >> data)
    {
        if(line == 1)
        {
            answer_key = data;
            cout << "Answer key: " << answer_key << endl;
            line++;
            continue;
        }

        if(line % 2 == 0)
        {
            student_name = data;
            line++;
            continue;
        }
        else
        {
            student_answer = data;
            cout << student_name << " | " << student_answer << endl;
            line++;
        }
    }

    in_file.close();

    cout<<endl;
    return 0;
}

