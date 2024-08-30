//This one for all of my batchmates who are facing issue's with eigen's value
//This program can only be used for finding eigen's value of a 3x3 matrix
#include <iostream>
#include <math.h>
using namespace std;
int determinant (double y11, double y12, double y13, double y21, double y22, double y23, double y31, double y32, double y33){
    int D= y11*((y22*y33)-(y23*y32))- y12*((y23*y31)-(y21*y33))+y13*((y21*y32)-(y22*y31));
    return D;
}
int trace (int a,int b,int c){
    int d= a + b +c;
    return d;

}
int cofactorofa11(int g22,int g33, int g23,int g32){
    int cofactor= ((g22 * g33) - (g23*g32));
    return cofactor;
}
int main () {
    double a11,a12,a13,a21,a22,a23,a31,a32,a33,D;
    cout <<"Enter the value's of first row of your matrix"<< endl;
    cout <<"a11= "; cin >>a11; cout << "a12= "; cin >> a12; cout << "a13= "; cin >> a13; 
    cout <<"Enter the value's of second row of your matrix"<< endl;
    cout << "a21= "; cin >> a21;  cout << "a22= "; cin >> a22;  cout << "a23= "; cin >> a23;
    cout <<"Enter the value's of second row of your matrix"<< endl;
    cout << "a31= "; cin >> a31;  cout << "a32= "; cin >> a32;  cout << "a33= "; cin >> a33;

    int coeff3, coeff2, coeff1 ,coeff0;
    int res;
    int i;
    int res1,res2,res3,res4;
    int discriminant;
    int root2,root3;
    coeff3 =1;
    coeff2 = trace(a11,a22,a33);
    coeff1 = cofactorofa11(a22,a33,a23,a32);
    coeff0 = determinant(a11,a12,a13,a21,a22,a23,a31,a32,a33);
    //finding the first root with hit and trial method
    for (i=0; i<10;i++){
        res = (pow(i,3)*coeff3) +(pow(i,2)*coeff2)+(i*coeff1)+coeff0;
        if (res==0){
        break;
        }
        else {
            continue;
        }
    }
   for (i=-10; i<0; i++){
    res = (pow(i,3)*coeff3) +(pow(i,2)*coeff2)+(i*coeff1)+coeff0;
    if (res==0){
         break;
    }
    else {
        continue; 
    }
   }
   //applying synthetic division
   res1 = (i*0) + coeff3;
   res2 = (res1 * i) + coeff2;
   res3 = (res2*i)+ coeff1;
   res4 = (res3*i) + coeff0;
   //solving the reduced quadratic equation 
   discriminant = ((res2*res2) - (4*res1*res3));
   if (discriminant == 0){
    cout <<"The first root found out by hit and trial method is: "<< i <<endl;
   root2 = ((-1*res2) + sqrt(discriminant))/(2*res1);
   root3 = root2;
   cout <<"As the discriminant is 0 the final two remaining roots are same, their value is "<< root2<< endl;
   cout <<"Hence, the eigen value's of the provided matrix are: "<< i << ", "<< root2<< "and " << root3 << endl; 
     }
   else if(discriminant>0){
    cout <<"The first root found out by hit and trial method is: "<< i <<endl;
    root2 = ((-1*res2) + sqrt(discriminant))/(2*res1);
    root3 = ((-1*res2) - sqrt(discriminant))/(2*res1);
    cout <<"The second root found out by the quadratic equation is "<< root2 << endl;
    cout << "The third root found out by quadratic equation is "<< root3 << endl;
    cout <<"Hence, the eigen value's of the provided matrix are: "<< i << ", "<< root2<< "and " << root3 << endl; 
   }
   else {
    cout <<"The first root found out by hit and trial method is: "<< i <<endl;
    cout <<"The second and third roots are imaginary roots"<< endl;
    cout <<"The eigen's value of the matrix can not be determined by this function"<< endl;
   }
   return 0 ;


}