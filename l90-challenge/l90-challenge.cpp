#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> numbers {};
    int new_number {};
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
        cout<<"C - clear set"<<endl;
        cout<<"M - calculate and print mean"<<endl;
        cout<<"S - find and print the smallest number"<<endl;
        cout<<"L - find and print the largest number"<<endl;
        cout<<"Q - Quit the program"<<endl;
        cout<<"=========================="<<endl;

        cin>>option;

        switch (option)
        {
            case 'A':
            case 'a':
                cout<<"--------------------------"<<endl;
                cout<<"Please enter number: ";
                cin>>new_number;
                cout<<"Adding number to the set..."<<endl;
                numbers.push_back(new_number);
                cout<<"Done!"<<endl;
                cout<<new_number<<" was successfully added to the set."<<endl;
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;

            case 'P':
            case 'p':
                cout<<"--------------------------"<<endl;
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;

            case 'C':
            case 'c':
                cout<<"--------------------------"<<endl;
                cout<<"Start clearnig set..."<<endl;
                numbers.clear();
                cout<<"Done!"<<endl;
                cout<<"All elements were deleted."
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;
            
            case 'M':
            case 'm':
                cout<<"--------------------------"<<endl;
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;

            case 'S':
            case 's':
                cout<<"--------------------------"<<endl;
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;

            case 'L':
            case 'l':
                cout<<"--------------------------"<<endl;
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;

            default:
                cout<<"--------------------------"<<endl;
                cout<<"\nUnknown option, please try again."<<endl;
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;
        }
    } while (option != 'Q' && option != 'q');
    

    cout<<endl;
    return 0;
}