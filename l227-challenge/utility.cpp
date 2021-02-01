#include <vector>
#include "utility.h"

using namespace std;

double calculate_average_score(vector<int> &score_list)
{
    int sum {0};
    
    for(const auto score: score_list)
    {
        sum += score;
    }

    return static_cast<double>(sum) / score_list.size();
}