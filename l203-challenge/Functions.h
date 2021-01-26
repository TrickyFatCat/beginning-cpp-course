#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#include <vector>
#include <memory>
#include "Test.h"

using namespace std;

unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>> &vec);

#endif