#include <iostream>
using namespace std;
main ()
{
                    int age;
                    int moves;
                    int avg_years;
                    cout<<"Enter the perosn's age: ";
                    cin>>age;
                    cout<<"Enter the number of times they've moved: ";
                    cin>> moves;
                    avg_years = age / moves+1; 
                    cout<<"Average number of years lived inthe same house: "<<avg_years;
                     

}