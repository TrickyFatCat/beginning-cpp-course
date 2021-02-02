#include <iostream>
#include <fstream>
#include <iomanip>
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

    string answer_key {};
    string student_name {};
    string student_answer {};
    int student_score{0};

    int field1_length {15};
    int field2_length {10};

    cout << setw(field1_length) << left << "Student"
            <<setw(field2_length) << right << "Score"
            << endl;
    draw_limits(field1_length + field2_length);

    in_file >> answer_key;
    
    while(in_file >> student_name >> student_answer)
    {
        student_score = calculate_student_score(answer_key, student_answer);
        cout << setw(field1_length) << left << student_name
                << setw(field2_length) << right << student_score
                << endl;
        score_list.push_back(student_score);
        student_score= 0;
    }

    draw_limits(field1_length + field2_length);

    cout << setw(field1_length) << left << "Average score"
            << setw(field2_length) << right << calculate_average_score(score_list);

    in_file.close();

    cout<<endl;
    return 0;
}

