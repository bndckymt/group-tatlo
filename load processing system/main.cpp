#include <iostream>

using namespace std;

void prm1(int prm)
    {

     const int PROMO_COUNT = 3;
    string promos[] = {
        "Description",
        "Avail",
        "Exit"
    };
    int p1;
    for(int a = 0; a < PROMO_COUNT; a++)
    cout<<(a+1)<<(" ")<<promos[a]<<endl;
    cout<<("Choose Option: ")<<endl;
    cin>> p1;
        switch (p1)
        {
        case 1:
            cout<<"heehehehe"<< endl;
            return;

        case 2:
            cout<<"Subcribed Successfully"<<endl;
            break;
        case 3:
            break;
        }
    }
void DPRO()
{
    const int PROMO_COUNT = 3;
    string promos[] = {
        "GS10",
        "GS500",
        "GSUNLIPROMAX"
    };
    int prm;
    cout<<("Promo")<<endl;
    for(int a = 0; a < PROMO_COUNT; a++)
        cout<<(a+1)<<(" ")<<promos[a]<<endl;
    cout<<("Choose Promo: ")<<endl;
    cin>> prm;
    switch (prm)
        {
        case 1:
            prm1(prm);
        case 2:

            break;
        }
}

int main()
{
    DPRO();
    return 0;
}
