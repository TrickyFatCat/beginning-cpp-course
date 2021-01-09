#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

const string result_outline = "--------------------------\n";
const string error_empty_set = "The set is empty. Please add atleast 1 number to the set.\n";

// Menu
void draw_menu();
void process_query(const char &option);
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
// Quit and error
void process_quitting();
void process_wrong_option();

int main()
{
    vector <double> numbers {};
    char option {};

    cout<<setprecision(2);

    cout<<"Welcome to the Mean Calculator 1.0!"<<endl;

    do
    {
        draw_menu();
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
                process_quitting();
                break;

            default:
                process_wrong_option();
                break;
        }
    } while (option != 'Q' && option != 'q');
    
    return 0;
}

void draw_menu()
{
    cout<<"Please, choose the option:\n"
        <<"==========================\n"
        <<"A - add number to the set\n"
        <<"P - print all numbers in the set\n"
        <<"C - clear set\n"
        <<"M - calculate and print mean\n"
        <<"S - find and print the smallest number\n"
        <<"L - find and print the largest number\n"
        <<"Q - Quit the program\n"
        <<"==========================\n";

}

void process_adding(vector<double> &numbers)
{
    double new_number {};

    cout<<result_outline;
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

    cout<<result_outline;
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
    cout<<result_outline;
    cout<<"Printing set content.\n"
        <<"[";

    for(auto val: numbers)
    {
        cout<<" "<<val<<" ";
    }

    cout<<"]\n";
    cout<<result_outline;
    cout<<endl;
}

void clean_set(vector<double> &numbers)
{
    cout<<result_outline;
    cout<<"Start clearnig set...\n";

    numbers.clear();

    cout<<"Done!\n"<<"All elements were deleted.\n";
    cout<<result_outline;
    cout<<endl;
}

void process_mean_calculation(const vector<double> &numbers)
{
    cout<<result_outline;

    if (numbers.size() > 0)
    {
        calc_mean(numbers);
    }
    else
    {
        cout<<"Can't calculate the mean.\n"<<error_empty_set;
    }
    
    cout<<result_outline;
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
    cout<<result_outline;

    if (numbers.size() > 0)
    {
        find_smallest(numbers);
    }
    else
    {
        cout<<"Can't find the smallest.\n"
            <<error_empty_set;
    }
    
    cout<<result_outline;
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
    cout<<result_outline;

    if (numbers.size() > 0)
    {
        find_largest(numbers);
    }
    else
    {
        cout<<"Can't find the smallest.\n"
            <<error_empty_set;
    }

    cout<<result_outline;
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

void process_quitting()
{
    cout<<result_outline;
    cout<<"Thank you!\n";
    cout<<result_outline;
}

void process_wrong_option()
{
    cout<<result_outline;
    cout<<"Unknown option, please try again.\n";
    cout<<result_outline;
}

