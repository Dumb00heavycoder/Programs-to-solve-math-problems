#include <iostream>
#include <math.h>
using namespace std;

int main () {
    double a11,a12,a13,a21,a22,a23,a31,a32,a33,D;
    cout <<"Enter the value's of first row of your matrix"<< endl;
    cout <<"a11= "; cin >>a11; cout << "a12= "; cin >> a12; cout << "a13= "; cin >> a13; 
    cout <<"Enter the value's of second row of your matrix"<< endl;
    cout << "a21= "; cin >> a21;  cout << "a22= "; cin >> a22;  cout << "a23= "; cin >> a23;
    cout <<"Enter the value's of second row of your matrix"<< endl;
    cout << "a31= "; cin >> a31;  cout << "a32= "; cin >> a32;  cout << "a33= "; cin >> a33;
    D= a11*((a22*a33)-(a23*a32))- a12*((a23*a31)-(a21*a33))+a13*((a21*a32)-(a22*a31));
    cout <<"The determinant value of the provided 3x3 matrix is "<< D << endl;
    return 0;
}