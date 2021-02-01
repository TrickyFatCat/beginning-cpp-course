#include <iostream>
#include <fstream>
#include <vector>

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
    int student_score{0};
    vector<int> all_scores {};
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
            for(size_t i = 0; i < student_answer.length(); ++i)
            {
                if(student_answer.at(i) == answer_key.at(i))
                {
                    student_score++;
                }
            }
            cout << student_name << " | " << student_answer << " | " << student_score<< endl;
            all_scores.push_back(student_score);
            student_score= 0;
            line++;
        }
    }

    int sum {0};
    for(const int &score: all_scores)
    {
        sum += score;
    }

    double average_score{};
    average_score= static_cast<double>(sum) / all_scores.size();

    cout << "Average score: " << average_score;

    in_file.close();

    cout<<endl;
    return 0;
}

