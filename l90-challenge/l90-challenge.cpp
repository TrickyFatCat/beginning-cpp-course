#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    const string error_empty_set = "The set is empty. Please add atleast 1 number to the set.";

    vector <int> numbers {};
    int new_number {};
    int smallest {};
    int largest {};
    double mean {};
    int sum {};
    char option {};

    cout<<setprecision(2);

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
                cout<<"Printing set content."<<endl;
                cout<<"[";

                for(auto val: numbers)
                {
                    cout<<" "<<val<<" ";
                }

                cout<<"]"<<endl;
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;

            case 'C':
            case 'c':
                cout<<"--------------------------"<<endl;
                cout<<"Start clearnig set..."<<endl;

                numbers.clear();

                cout<<"Done!"<<endl;
                cout<<"All elements were deleted."<<endl;
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;
            
            case 'M':
            case 'm':
                cout<<"--------------------------"<<endl;
                
                if (numbers.size() > 0)
                {
                    cout<<"Calculating mean of the set..."<<endl;

                    for (auto val: numbers)
                    {
                        sum += val;
                    }
                    mean = static_cast<double>(sum) / numbers.size();

                    cout<<"Done!"<<endl;
                    cout<<"The mean of the set is: "<<mean<<endl;
                }
                else
                {
                    cout<<"Can't calculate the mean."<<endl;
                    cout<<error_empty_set<<endl;
                }
                
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;

            case 'S':
            case 's':
                cout<<"--------------------------"<<endl;

                if (numbers.size() > 0)
                {
                    cout<<"Looking for the smallest number..."<<endl;
                    
                    smallest = numbers.at(0);
                    for(auto val: numbers)
                    {
                        if (val < smallest)
                            smallest = val;
                    }

                    cout<<"Done!"<<endl;
                    cout<<"The smallest number is: "<<smallest<<endl;
                }
                else
                {
                    cout<<"Can't find the smallest."<<endl;
                    cout<<error_empty_set<<endl;
                }
                
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;

            case 'L':
            case 'l':
                cout<<"--------------------------"<<endl;

                if (numbers.size() > 0)
                {
                    cout<<"Looking for the largest number..."<<endl;
                    
                    largest = numbers.at(0);
                    for(auto val: numbers)
                    {
                        if (val > largest)
                            largest = val;
                    }

                    cout<<"Done!"<<endl;
                    cout<<"The largest number is: "<<largest<<endl;
                }
                else
                {
                    cout<<"Can't find the smallest."<<endl;
                    cout<<error_empty_set<<endl;
                }

                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;

            case 'Q':
            case 'q':
                cout<<"--------------------------"<<endl;
                cout<<"Thank you!"<<endl;
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;

            default:
                cout<<"--------------------------"<<endl;
                cout<<"Unknown option, please try again."<<endl;
                cout<<"--------------------------"<<endl;
                cout<<endl;
                break;
        }
    } while (option != 'Q' && option != 'q');
    
    return 0;
}