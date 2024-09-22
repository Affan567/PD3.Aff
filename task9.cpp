#include <iostream>
using namespace std;
main()
{
                   int n,digit1,digit2,digit3,digit4,sum;
                   cout<<"Enter four digit integer: ";
                   cin >>n;
                   digit1= n%10;
                   digit2= (n/10)%10;
                   digit3= (n/100)%10;
                   digit4 = (n/1000)%10;
                   sum = digit1 + digit2 + digit3 + digit4 ;
                   cout<<"Sum of four integers is: "<<sum;                   










}