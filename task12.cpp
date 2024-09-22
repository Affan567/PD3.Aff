#include <iostream>
using namespace std;
main ()
{
                    int n_sqr,h,w,a,n_walls;
                    cout<<"Enter number of square meters you can paint: ";
                    cin >>n_sqr;
                    cout<<"Enter width of a single wall (in meters): ";
                    cin>>w;
                    cout<<"Enter height of a single wall (in meters): ";
                    cin>>h;
                    a = h*w;
                    n_walls = n_sqr / a; 
                    cout<<"Number of walls you can paint: "<<n_walls;
                    
                            




}