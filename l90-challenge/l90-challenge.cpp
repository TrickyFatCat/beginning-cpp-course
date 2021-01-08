#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> numbers {};
    int smallest {};
    int largest {};
    int mean {};
    char option {};

    cout<<"Welcome to the Mean Calculator 1.0!"<<endl;

    do
    {
        cout<<"Please, choose the option:"<<endl;
        cout<<"=========================="<<endl;
        cout<<"A - add number to the set"<<endl;
        cout<<"P - print all numbers in the set"<<endl;
        cout<<"C - clean set"<<endl;
        cout<<"M - calculate and print mean"<<endl;
        cout<<"S - find and print the smallest number"<<endl;
        cout<<"L - find and print the largest number"<<endl;
        cout<<"Q - Quit the program"<<endl;
        cout<<"=========================="<<endl;

        cin>>option;
    } while (option != 'Q' && option != 'q');
    

    cout<<endl;
    return 0;
}