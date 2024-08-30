//This is a program used to find distance between two points in a cartetisan plane
#include <iostream>
#include <math.h> 
using namespace std;

int main () {
    double x1,x2,y1,y2,d;
    cout << "Enter the coordinates of first point in the format of (x1,y1)"<< endl;
    cout << "x1= ";cin>> x1;
    cout << "y1= ";cin>>y2;
    cout <<"Enter the coordinates of second point in the format of (x2,y2)"<< endl;
    cout << "x2= "; cin>> x2 ;
    cout << "y2= ";cin >> y2;
     d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout <<"The distance between these two points is " << d << endl;
    return 0;

}
