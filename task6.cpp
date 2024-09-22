#include <iostream>
using namespace std;
main ()
{
                   int bagsize;
                   int bagcost;
                   int area;
                   int cost_fer_pound;
                   int cost_fer_square;
                   cout<< "Enter the size of fertilizer bag in pounds: ";
                   cin >>bagsize;
                   cout<<"Enter the cost of the bag; ";
                   cin>> bagcost;
                   cout<<"Enter the area in square feet that can be cover by the bag: ";
                   cin>> area;
                   cout<<"Cost of fertilizer per pound: ";
                   cost_fer_pound = bagcost/bagsize;
                   cout<<cost_fer_pound;
                   cost_fer_square = bagcost/area;
                   cout<<"Cost of fertilizing per square foot: ";
                   cout<<cost_fer_square;

}


