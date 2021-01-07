#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout<<"First element of vector1: "<<vector1.at(0)<<endl;
    cout<<"Second element of vector1: "<<vector1.at(1)<<endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout<<"First element of vector2: "<<vector2.at(0)<<endl;
    cout<<"Second element of vector2: "<<vector2.at(1)<<endl;

    cout<<endl;
    return 0;
}