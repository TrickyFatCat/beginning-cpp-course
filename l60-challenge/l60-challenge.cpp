#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;
    int new_element{};

    cout<<"Please, enter the first element of vector1: ";
    cin>>new_element;
    vector1.push_back(new_element);
    cout<<"Please, enter the first element of vector1: ";
    cin>>new_element;
    vector1.push_back(new_element);
    
    cout<<"================================================"<<endl;
    cout<<"Vector1 contains "<<vector1.size()<<" elements"<<endl;
    cout<<"First element of vector1: "<<vector1.at(0)<<endl;
    cout<<"Second element of vector1: "<<vector1.at(1)<<endl;
    cout<<"================================================"<<endl;
    cout<<endl;

    cout<<"Please, enter the first element of vector2: ";
    cin>>new_element;
    vector2.push_back(new_element);
    cout<<"Please, enter the first element of vector2: ";
    cin>>new_element;
    vector2.push_back(new_element);

    cout<<"================================================"<<endl;
    cout<<"Vector2 contains "<<vector2.size()<<" elements"<<endl;
    cout<<"First element of vector2: "<<vector2.at(0)<<endl;
    cout<<"Second element of vector2: "<<vector2.at(1)<<endl;
    cout<<"================================================"<<endl;
    cout<<endl;

    cout<<"Creating vector_2d..."<<endl;
    vector <vector<int>> vector_2d;
    cout<<"Done!"<<endl;

    cout<<"Adding vector1 and vector2 to vector_2d..."<<endl;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<"Done!"<<endl;

    cout<<"================================================"<<endl;
    cout<<"First element of vector_2d: "<<vector_2d.at(0).at(0)<<endl;
    cout<<"Second element of vector_2d: "<<vector_2d.at(0).at(1)<<endl;
    cout<<"Third element of vector_2d: "<<vector_2d.at(1).at(0)<<endl;
    cout<<"Fourth element of vector_2d: "<<vector_2d.at(1).at(1)<<endl;
    cout<<"================================================"<<endl;

    cout<<"\nPlease, enter new value for the first element in vector1: ";
    cin>>new_element;
    vector1.at(0) = new_element;
    
    cout<<"================================================"<<endl;
    cout<<"First element of vector1: "<<vector1.at(0)<<endl;
    cout<<"================================================"<<endl;

    cout<<"\nChecking vector_2d..."<<endl;
    cout<<"Done!"<<endl;

    cout<<"================================================"<<endl;
    cout<<"First element of vector_2d: "<<vector_2d.at(0).at(0)<<endl;
    cout<<"Second element of vector_2d: "<<vector_2d.at(0).at(1)<<endl;
    cout<<"Third element of vector_2d: "<<vector_2d.at(1).at(0)<<endl;
    cout<<"Fourth element of vector_2d: "<<vector_2d.at(1).at(1)<<endl;
    cout<<"================================================"<<endl;

    cout<<endl;
    return 0;
}