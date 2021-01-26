#include <iostream>
#include <vector>
#include <memory>
#include "Test.h"
#include "Functions.h"

unique_ptr<vector<shared_ptr<Test>>> make()
{
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &vec, int num)
{
    int data {0};

    for(size_t i {0}; i < num; ++i)
    {
        cout<<"Enter data point ["<<i<<"]: ";
        cin>>data;

        vec.push_back(make_shared<Test>(data));
    }
}

void display(const vector<shared_ptr<Test>> &vec)
{
    for(const auto &ptr: vec)
    {
        cout<<ptr->get_data()<<endl;
    }
}