#include <iostream>
#include <fstream>
#include <vector>
#include "utility.h"

using namespace std;

int main()
{
    ifstream in_file {};
    vector<int> score_list;

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
    int student_score{0};
    int line {1};
    
    
    while(in_file >> data)
    {
        if(line == 1)
        {
            answer_key = data;
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
            student_score = calculate_student_score(answer_key, student_answer);
            cout << student_name << " | " << student_score<< endl;
            score_list.push_back(student_score);
            student_score= 0;
            line++;
        }
    }

    cout << "Average score: " << calculate_average_score(score_list);

    in_file.close();

    cout<<endl;
    return 0;
}

