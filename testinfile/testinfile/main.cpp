// Online C++ compiler to run C++ program online
#include <iostream>
<<<<<<< HEAD:testinfile/testinfile/main.cpp
using namespace std;
int main() {
	cout << "hello world!";
	return 0;
=======
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
<<<<<<< HEAD:testinfile/testinfile/main.cpp
int main()
{
    displaymenu();
>>>>>>> master:load processing system/main.cpp
}

=======

void RegLoad(){
    int num;
    int amount;
    char yn;
    do{
        cout << "Enter 10 digit number Example: " << endl;
        cout << "905xxxxxx" << endl;
        cin >> num;
    
        cout << "Enter amount: " << endl;
        cin >> amount;
    
        cout << "Your number " << num << " received " << amount << endl;
    
        cout << "Do you want to load again?y/n: " << endl;
        cin >> yn;
    }while(yn=='y');
    cout << "Thank you" << endl;
}
    
int main() {
    displaymenu();
    RegLoad();
   

    return 0;
}
>>>>>>> master:load processing system/main.cpp
