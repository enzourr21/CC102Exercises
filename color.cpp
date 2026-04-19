#include <iostream>
#include <fstream>

using namespace std;

int countLines(){
int i = 0;
string line;
ifstream object;
object.open("color.txt", ios::in);

    while(!object.eof()){
        getline(object, line);
        i++;
    }
    object.close();

return i;
}

void copyFile(){
fstream copyObject;
ifstream object;
object.open("color.txt", ios::in);
copyObject.open("color_copy.txt", ios::out);
string color;
int counter = 0;

    while(!object.eof()){
        getline(object, color);
        copyObject << color << endl;
    }

    object.close();
    object.open("color.txt", ios::in);
    copyObject.close();
    copyObject.open("color_copy.txt", ios::in);

    while(!object.eof()){
        string origLine;
        string copyLine;
        getline(object, origLine);
        getline(copyObject, copyLine);
        if (origLine == copyLine){
            counter++;
        }
    }

    int totalLines = countLines();

        if (counter == totalLines){
            cout << "Copied Successfully!" << endl;
        }
        else{
            cout << "Copy was unsuccessful." << endl;
        }

object.close();
copyObject.close();
return;
}

int main(){
fstream object;

object.open("color.txt", ios::out);
    if(object.is_open()){
        object << "Yellow\n";
        object << "Green\n";
        object << "Blue\n";
        object << "Red\n";
        object << "Purple\n";

        cout << "Writen successfully." << endl;
        object.close();
    }
    else{
        cout << "Writing unsuccessful." << endl;
    }

    copyFile();

return 0;
}
