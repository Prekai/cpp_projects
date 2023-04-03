#include <iostream>

using namespace std;

const double pi {3.14159};
double calc_volume_cylinder(double radius, double height);
double calc_area_cicle(double radius);
void area_circle();
void volume_cylinder ();

int main()
{
    area_circle();
    volume_cylinder();
    
	cout << endl;
	return 0;
}

double calc_area_cicle(double radius) {
   return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
//    return pi * radius * radius * height;
    return calc_area_cicle(radius)*height;
}

void area_circle()
{
        double radius{};
        cout <<"\nEnter the radius of the circle: ";
        cin >> radius;
        cout << "The area of a circle with radius " << radius << " is " << calc_area_cicle(radius) << endl;
}

void volume_cylinder (){
    double radius {};
    double height {};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;    
}