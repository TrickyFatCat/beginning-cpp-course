#include <iostream>
#include <vector>
#include <memory>
#include "Test.h"
#include "Functions.h"

using namespace std;

int main()
{
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();

    cout<<"How many data points do you want to enter: ";
    int num {0};
    cin>>num;

    fill(*vec_ptr, num);
    display(*vec_ptr);

    cout<<endl;
    return 0;
}