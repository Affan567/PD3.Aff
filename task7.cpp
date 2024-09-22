#include <iostream>
using namespace std;
main ()
{
                    string name;
                    cout<<"Enter movie name: ";
                    cin >>name;
                    int adticket;
                    cout<<"Enter adult ticket Price: ";
                    cin>> adticket;
                    int chticket;
                    cout<<"Enter child ticket: ";
                    cin>> chticket;
                    int adsold;
                    cout<<"Enter the number of Adult tickets sold: ";
                    cin>>adsold;
                    int chsold;
                    cout<<"Enter the numbers of child tickets sold: ";
                    cin>>chsold;
                    float per;
                    cout<<"Enter the percentage of the amount to be donated to charity:";
                    cin>>per;
                    int amount;
                    cout<<"Total amount generated from ticket sales: ";
                    amount = (adticket * adsold) + (chticket * chsold );
                    cout<<amount;
                    float charity;
                    cout<<"Donation to charity(10%): ";
                    charity = amount*(10/100);
                    cout<<charity;
                    float r_amount;
                    r_amount = amount - charity;
                    cout<<"Remaining amount after donation: ";
                    cout<<r_amount;              


}