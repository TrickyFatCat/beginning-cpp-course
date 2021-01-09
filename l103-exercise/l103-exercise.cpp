#include <iostream>
#include <cmath>

using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius)
{
    return pi * pow(radius, 2);
}

double calc_volume_cylinder(double radius, double height)
{
    return calc_area_circle(radius) * height;
}

void process_area_calculation()
{
    double radius {};

    cout<<"Please, enter the radius of the circle: ";
    cin>>radius;

    cout<<"The area of the circle with radius " << radius << " is " << calc_area_circle(radius)<<endl;
}


void process_volume_calc()
{
    double radius {};
    double height {};

    cout<<"\nEnter the radius of the cylinder: ";
    cin>>radius;
    
    cout<<"\nEnter the height of the cylinder: ";
    cin>>height;

    cout<<"\nThe volume of the cylinder with radius "<<radius<<" and height "<< height <<"is "<<calc_volume_cylinder(radius, height)<<endl;
}

int main()
{
    cout<<"Welcome to the CylinderVolumeCalc v1.0."<<endl;
    // process_area_calculation();
    process_volume_calc();
    cout<<endl;
    return 0;
}