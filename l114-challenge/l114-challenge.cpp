#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

const string result_outline(27, '-');
const string error_empty_set = "The set is empty. Please add atleast 1 number to the set.\n";

void print_outline();

// Add new number
void process_adding(vector<double> &numbers);
void add_number_to_set(vector<double> &numbers, double new_number);
// Print the set
void print_set_content(const vector<double> &numbers);
// Clean the set
void clean_set(vector<double> &numbers);
// Mean calculation
void process_mean_calculation(const vector<double> &numbers);
void calc_mean(const vector<double> &numbers);
// Smallest searching
void process_search_smallest(const vector<double> &numbers);
void find_smallest(const vector<double> &numbers);
// Largest searching
void process_search_largest(const vector<double> &numbers);
void find_largest(const vector<double> &numbers);

int main()
{
    vector <double> numbers {};
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
                process_adding(numbers);
                break;

            case 'P':
            case 'p':
                print_set_content(numbers);
                break;

            case 'C':
            case 'c':
                clean_set(numbers);
                break;
            
            case 'M':
            case 'm':
                process_mean_calculation(numbers);
                break;

            case 'S':
            case 's':
                process_search_smallest(numbers);
                break;

            case 'L':
            case 'l':
                process_search_largest(numbers);
                break;

            case 'Q':
            case 'q':
                print_outline();
                cout<<"Thank you!"<<endl;
                print_outline();
                cout<<endl;
                break;

            default:
                print_outline();
                cout<<"Unknown option, please try again."<<endl;
                print_outline();
                cout<<endl;
                break;
        }
    } while (option != 'Q' && option != 'q');
    
    return 0;
}

void print_outline()
{
    cout<<result_outline + "\n";
}

void process_adding(vector<double> &numbers)
{
    double new_number {};

    print_outline();
    cout<<"Please enter number: ";
    cin>>new_number;

    if (cin.fail() || cin.eof())
    {
        cout<<"\nCan't add characters to the set!\n"
            <<"Please enter a integer or decimal number to the set.\n";
        cin.clear();
    }
    else
    {           
        add_number_to_set(numbers, new_number);
    }

    print_outline();
    cout<<endl;
}

void add_number_to_set(vector<double> &numbers, double new_number)
{
    cout<<"\nAdding number to the set...\n";

    numbers.push_back(new_number);

    cout<<"Done!"<<endl;
    cout<<new_number<<" was successfully added to the set.\n";
}

void print_set_content(const vector<double> &numbers)
{
    print_outline();
    cout<<"Printing set content.\n"
        <<"[";

    for(auto val: numbers)
    {
        cout<<" "<<val<<" ";
    }

    cout<<"]\n";
    print_outline();
    cout<<endl;
}

void clean_set(vector<double> &numbers)
{
    print_outline();
    cout<<"Start clearnig set...\n";

    numbers.clear();

    cout<<"Done!\n"<<"All elements were deleted.\n";
    print_outline();
    cout<<endl;
}

void process_mean_calculation(const vector<double> &numbers)
{
    print_outline();

    if (numbers.size() > 0)
    {
        calc_mean(numbers);
    }
    else
    {
        cout<<"Can't calculate the mean.\n"<<error_empty_set;
    }
    
    print_outline();
    cout<<endl;
}

void calc_mean(const vector<double> &numbers)
{
    double sum {};
    double mean {};

    cout<<"Calculating mean of the set...\n";

    for (auto val: numbers)
    {
        sum += val;
    }

    mean = sum / numbers.size();

    cout<<"Done!\n"
        <<"The mean of the set is: "<<mean<<endl;
}

void process_search_smallest(const vector<double> &numbers)
{
    print_outline();

    if (numbers.size() > 0)
    {
        find_smallest(numbers);
    }
    else
    {
        cout<<"Can't find the smallest.\n"
            <<error_empty_set;
    }
    
    print_outline();
}

void find_smallest(const vector<double> &numbers)
{
    double smallest {};

    cout<<"Looking for the smallest number..."<<endl;
    
    smallest = numbers.at(0);
    for(auto val: numbers)
    {
        if (val < smallest)
            smallest = val;
    }

    cout<<"Done!\n"
        <<"The smallest number is: "<<smallest<<endl;
}

void process_search_largest(const vector<double> &numbers)
{
    print_outline();

    if (numbers.size() > 0)
    {
        find_largest(numbers);
    }
    else
    {
        cout<<"Can't find the smallest.\n"
            <<error_empty_set;
    }

    print_outline();
}

void find_largest(const vector<double> &numbers)
{
    double largest {};

    cout<<"Looking for the largest number...\n";
    
    largest = numbers.at(0);
    for(auto val: numbers)
    {
        if (val > largest)
            largest = val;
    }

    cout<<"Done!\n"
        <<"The largest number is: "<<largest<<endl;
}
