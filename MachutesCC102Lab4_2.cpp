#include <iostream>
#include <iomanip>

using namespace std;

int main() {
char option;
do{
    double sales[5][4] = {0};
    int sp, prod;
    double amount;
    char choice;

    do {
        cout << "Salesperson (1-4): ";
        cin >> sp;
        cout << "Product (1-5): ";
        cin >> prod;
        cout << "Amount: ";
        cin >> amount;

        if (sp >= 1 && sp <= 4 && prod >= 1 && prod <= 5) {
            sales[prod - 1][sp - 1] += amount;
        }

        cout << "Add another slip? (y/n): ";
        cin >> choice;
    } while (tolower(choice) == 'y');

    cout << "\n\t\tSalesperson" << endl;
    cout << "Product\t1\t2\t3\t4\tTotal" << endl;
    cout << "----------------------------------------------------" << endl;

    double grandTotal = 0;
    double colTotals[4] = {0};

    for (int i = 0; i < 5; i++) {
        double rowTotal = 0;
        cout << i + 1 << "\t";

        for (int j = 0; j < 4; j++) {
            cout << fixed << setprecision(2) << sales[i][j] << "\t";
            rowTotal += sales[i][j];
            colTotals[j] += sales[i][j];
        }
        cout << rowTotal << endl;
        grandTotal += rowTotal;
    }

    cout << "----------------------------------------------------" << endl;
    cout << "Total\t";
    for (int j = 0; j < 4; j++) {
        cout << colTotals[j] << "\t";
    }
    cout << grandTotal << endl;

cout << "\nDo you want to repeat? (y/n)";
cin >> option;
}while(tolower(option) == 'y');

return 0;
}
