#include <iostream>
#include<string>
using namespace std;

void displaymenu()
{
    int num1;
    cout<<"===================================================== \n";
    cout<<" \t\tSELECT OPTION \t \n ";
    cout<<"===================================================== \n";
    cout<<" 1.Direct Load\n";
    cout<<" 2.Regular Load\n";
    cout<<" 3.Transaction\n";
    cout<<" 4.Exit\n";
    cout << "Enter Your Choice: ";
    cin >> num1;
}
int main()
{
    displaymenu();
}
