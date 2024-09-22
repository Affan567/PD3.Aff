#include <iostream>
using namespace std;
main()
{
                    float veg_price_per_kg;
                    float fru_price_per_kg;
                    float total_veg_kg;
                    float total_fru_kg;
                    float veg_earning;
                    float fru_earning;
                    float total_earningcoins;
                    float total_earningrps; 
                    cout<<"Enter the vegetable price per kg: ";
                    cin>>  veg_price_per_kg;
                    cout<<"Enter the fruits price per kg: ";
                    cin>> fru_price_per_kg;
                    cout<<"Enter total kg of vegetables: ";
                    cin>> total_veg_kg;
                    cout<<"Enter total kg of Fruits: ";
                    cin>> total_fru_kg;
                    veg_earning = veg_price_per_kg * total_veg_kg;
                    fru_earning = fru_price_per_kg * total_fru_kg;
                    total_earningcoins = fru_earning + veg_earning;
                    total_earningrps = total_earningcoins / 1.94;
                    cout <<"Total Earning in Rupees (rps): "<<total_earningrps;
                    




}