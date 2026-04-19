#include <iostream>
#include<fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
fstream object;
ofstream sorted;
vector<string> words = {"One", "Two", "Three", "Four", "Five", "Six"};

object.open("original.txt", ios::out);
    if(object.is_open()){
        for(int i = 0; i < words.size(); i++){
        object << words[i] << endl;
        }
        cout << "File created." << endl;
        object.close();
    }
    else{
        cout << "Attempt to write file failed." << endl;
    }

object.open("original.txt", ios::in);
sorted.open("sorted.txt", ios::out);
    if(sorted.is_open() && object.is_open()){
        vector<string> copyWords;
        string line;

        while(getline(object, line)){
            copyWords.push_back(line);
        }

        sort(copyWords.begin(), copyWords.end());

        for (int i = 0; i < copyWords.size(); i++){
            sorted << copyWords[i] << endl;
        }

        cout << "Sorted successfully." << endl;
    }
    else{
        cout << "Attemp to open file failed." << endl;
    }

object.close();
sorted.close();

return 0;
}
