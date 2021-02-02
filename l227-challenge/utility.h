#ifndef _UTILITY_H_
#define _UTILITY_H_

#include <vector>
#include <string>

using namespace std;

int calculate_student_score(string &answer_key, string &student_answer);
double calculate_average_score(vector<int> &score_list);

#endif