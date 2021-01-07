#include <iostream>

using namespace std;

int main()
{
    // All prices are in US dollars
    const double cost_per_small_room{25};
    const double cost_per_large_room(35);
    const double tax_rate{0.06};
    const int estimate_expiry{30}; // Days

    unsigned int number_of_small_rooms{};
    unsigned int number_of_large_rooms{};

    cout<<"Hello, welcome to Frank's Carpet Cleaning Service v2.0."<<endl;
    cout<<"\nHow many small rooms would you like cleaned? ";
    cin>>number_of_small_rooms;

    cout<<"\nHow many large rooms would you like cleaned? ";
    cin>>number_of_large_rooms;

    double final_price_small_rooms{};
    double final_price_large_rooms{};
    double full_price{};
    double tax_in_money{};

    final_price_small_rooms = number_of_small_rooms * cost_per_small_room;
    final_price_large_rooms = number_of_large_rooms * cost_per_large_room;
    full_price = number_of_small_rooms + number_of_large_rooms;
    tax_in_money = full_price * tax_rate;

    cout<<"\nEstimate for carpet cleaning service."<<endl;
    cout<<"Number of small rooms: "<<number_of_small_rooms<<endl;
    cout<<"Number of large rooms: "<<number_of_large_rooms<<endl;
    cout<<"Price per small room: $"<<cost_per_small_room<<endl;
    cout<<"Price per large room: $"<<cost_per_large_room<<endl;
    cout<<"Cost: $" << full_price<<endl;
    cout<<"Tax: $" << tax_in_money << endl;
    cout<<"=============================================="<<endl;
    cout<<"Total estimate: $"<< full_price + tax_in_money<<endl;
    cout<<"This estimation is valid for "<<estimate_expiry<<" days."<<endl;

    cout<<endl;
    return 0;
}