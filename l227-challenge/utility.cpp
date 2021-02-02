#include <vector>
#include "utility.h"

using namespace std;

int calculate_student_score(string &answer_key, string &student_answer)
{
    int score {0};

    for(size_t i = 0; i < student_answer.length(); ++i)
    {
        if(student_answer.at(i) == answer_key.at(i))
        {
            score++;
        }
    }

    return score;
}

double calculate_average_score(vector<int> &score_list)
{
    int sum {0};
    
    for(const auto score: score_list)
    {
        sum += score;
    }

    return static_cast<double>(sum) / score_list.size();
}