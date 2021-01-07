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

    vector <vector<int>> vector_2d;

    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout<<"First element of vector_2d: "<<vector_2d.at(0).at(0)<<endl;
    cout<<"Second element of vector_2d: "<<vector_2d.at(0).at(1)<<endl;
    cout<<"Third element of vector_2d: "<<vector_2d.at(1).at(0)<<endl;
    cout<<"Fourth element of vector_2d: "<<vector_2d.at(1).at(1)<<endl;

    cout<<endl;
    return 0;
}