#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

bool isPrime(int n){
    if (n < 2) return false;
    for(int i = 2; i <= n/2; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
fstream myFile;
int nums;
int primeNums = 0;

myFile.open("NUMS.txt", ios::out);
    if(myFile.is_open()){
        myFile << 9402 << endl;
        myFile << 131 << endl;
        myFile << 1078 << endl;
        myFile << 7676 << endl;
        myFile << 6767 << endl;

        cout << "Successfully written in NUMS.txt\n";
        myFile.close();
    }
    else{
        cout << "File not found.";
    }

    myFile.open("NUMS.txt", ios::in);
        if(myFile.is_open()){
            while(myFile >> nums){
                if (isPrime(nums)){
                    primeNums++;
                }
            }
        }
    myFile.close();

    myFile.open("NUMS.txt", ios::app);
    if(myFile.is_open()){
        myFile << "Count of Prime numbers: " << primeNums;
        myFile.close();
    }

return 0;
}
