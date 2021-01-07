#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello, welcome to Frank's Carpet Cleaning Service."<<endl;
    cout<<"\nHow many rooms would you like cleaned? ";

    int number_of_rooms {0};
    cin>>number_of_rooms;

    cout<<"\nEstimate for carpet cleaning service."<<endl;
    cout<<"Number of rooms: $"<<number_of_rooms<<endl;

    cout<<endl;
    return 0;
}