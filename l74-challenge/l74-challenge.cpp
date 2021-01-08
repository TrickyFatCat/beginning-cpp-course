#include <iostream>

using namespace std;

int main()
{
    int cent_number {0};
    int exchange_rates [] {100, 25, 10, 5, 1};
    int exchange_results [] {0, 0, 0, 0, 0};
    
    cout<<"Welcome to the Change Calculator v1.0!"<<endl;
    cout<<"Please, enter number of cents you want to change: ";
    cin>>cent_number;

    cout<<"\nCalculating change..."<<endl;
    //Calculating dollars
    exchange_results[0]=(cent_number-cent_number%exchange_rates[0])/exchange_rates[0];
    cent_number = cent_number%exchange_rates[0];
    //Calculating quarters
    exchange_results[1]=(cent_number-cent_number%exchange_rates[1])/exchange_rates[1];
    cent_number = cent_number%exchange_rates[1];
    //Calculating dimes
    exchange_results[2]=(cent_number-cent_number%exchange_rates[2])/exchange_rates[2];
    cent_number = cent_number%exchange_rates[2];
    //Calculating nickels
    exchange_results[3]=(cent_number-cent_number%exchange_rates[3])/exchange_rates[3];
    cent_number = cent_number%exchange_rates[3];
    //Calculating pennies
    exchange_results[4]=(cent_number-cent_number%exchange_rates[4])/exchange_rates[4];
    cent_number = cent_number%exchange_rates[4];
    cout<<"Done!"<<endl;

    cout<<endl;
    cout<<"You can provide this change as follows."<<endl;
    cout<<"======================================="<<endl;
    cout<<"Dollars: "<<exchange_results[0]<<endl;
    cout<<"Quarters: "<<exchange_results[1]<<endl;
    cout<<"Dimes: "<<exchange_results[2]<<endl;
    cout<<"Nickels: "<<exchange_results[3]<<endl;
    cout<<"Pennies: "<<exchange_results[4]<<endl;
    cout<<"======================================="<<endl;

    cout<<endl;
    return 0;
}