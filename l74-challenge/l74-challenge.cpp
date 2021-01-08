#include <iostream>

using namespace std;

int main()
{
    int cent_number {0};
    int exchange_rates [] {100, 25, 10, 5, 1};
    int change_results [] {0, 0, 0, 0, 0};
    cout<<"Welcome to the Change Calculator v1.0!"<<endl;
    cout<<"Please, enter number of cents you want to change: ";
    cin>>cent_number;
    cout<<"\nCalculating change..."<<endl;
    
    // Calculating logic must be here

    cout<<endl;
    cout<<"You can provide this change as follows."<<endl;
    cout<<"======================================="<<endl;
    cout<<"Dollars: "<<change_results[0]<<endl;
    cout<<"Quarters: "<<change_results[1]<<endl;
    cout<<"Dimes: "<<change_results[2]<<endl;
    cout<<"Nickels: "<<change_results[3]<<endl;
    cout<<"Pennies: "<<change_results[4]<<endl;
    cout<<"======================================="<<endl;

    cout<<endl;
    return 0;
}