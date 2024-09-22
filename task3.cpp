#include <iostream>
using namespace std;
main()
{
                    int vi;
                    cout<<" Enter the initial velocity (ms/1): ";
                    cin>> vi;
                    int a;
                    cout<<"Enter the Acceleration (ms/2): ";
                    cin >>a;
                    int t;
                    cout<< "Enter time taken(s): ";
                    cin >>t;
                    int vf;
                    cout <<"Final velocity (ms/1): ";
                    vf = (a*t)+vi;
                    cout<< vf;


}
