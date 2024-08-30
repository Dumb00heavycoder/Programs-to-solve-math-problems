#include <iostream>
#include <math.h>
using namespace std;

int main () { 
    int coeff3, coeff2, coeff1 ,coeff0;
    int res;
    int i;
    int res1,res2,res3,res4;
    int discriminant;
    int root2,root3;
    cout <<"Enter all the co-efficients of the cubic equation in descending order "<< endl;
    cin >> coeff3>>coeff2>>coeff1>>coeff0;
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
   cout <<"The reduced coefficents of the quadratic are: ";
   cout << res1<< " "<< res2 <<" "<< res3 <<" "<<res4 << endl;
   //solving the reduced quadratic equation 
   discriminant = ((res2*res2) - (4*res1*res3));
   if (discriminant == 0){
    cout <<"The first root found out by hit and trial method is: "<< i <<endl;
   root2 = ((-1*res2) + sqrt(discriminant))/(2*res1);
   root3 = root2;
   cout <<"As the discriminant is 0 the final two remaining roots are same, their value is "<< root2<< endl;
   }
   else if(discriminant>0){
    cout <<"The first root found out by hit and trial method is: "<< i <<endl;
    root2 = ((-1*res2) + sqrt(discriminant))/(2*res1);
    root3 = ((-1*res2) - sqrt(discriminant))/(2*res1);
    cout <<"The second root found out by the quadratic equation is "<< root2 << endl;
    cout << "The third root found out by quadratic equation is "<< root3 << endl;
   }
   else {
    cout <<"The first root found out by hit and trial method is: "<< i <<endl;
    cout <<"The second and third roots are imaginary roots"<< endl;
   }
   return 0 ;

}