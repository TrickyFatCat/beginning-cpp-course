#include <iostream>
#include <cmath>

using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius)
{
    return pi * pow(radius, 2);
}

void process_area_calculation()
{
    double radius {};

    cout<<"Please, enter the radius of the circle: ";
    cin>>radius;

    cout<<"The area of the circle with radius " << radius << " is " << calc_area_circle(radius)<<endl;
}

int main()
{
    cout<<"Welcome to the CilinderVolumeCalc v1.0."<<endl;
    process_area_calculation();
    cout<<endl;
    return 0;
}