#include <iostream>
using namespace std;

int main(){
char choice;
do{
string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
double yrlyrev = 0;
int numMonths,stocks, sold, remaining;
double price, total_rev;

cout << "How many months would you like to calculate counting from January? ";
cin >> numMonths;
    if (numMonths > 0 && numMonths <= 12){
    for (int i = 0; i < numMonths; i++){
        cout << months[i] << ":" << endl;
        cout << "Price of the item ($): ";
        cin >> price;
        cout << "Stocks: ";
        cin >> stocks;
        cout << "Items sold: ";
        cin >> sold;

        total_rev = sold * price;
        remaining = stocks - sold;
        yrlyrev += total_rev;

        cout << "Monthly Sales: $" << total_rev << endl;
        cout << "Stocks remained: " << remaining << endl;
        cout << endl;
    }
    double avg_rev = yrlyrev / numMonths;
    cout << "Average monthly revenue: $" << avg_rev;
    }
    else {
        cout << "Error!" << endl;
    }

    cout <<"\nWould you like to input another set of values? (y/n) ";
    cin >> choice;

}while(tolower(choice) == 'y');

return 0;
}
