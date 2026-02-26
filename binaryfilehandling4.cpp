// file.read(reinterpret_cast<char*>(&variable), sizeof(variable));
#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ifstream binaryfile("binarydata2.bin",ios::binary);
    if(!binaryfile){
        cout << "Failed to open file in binary mode.\n";
        return 1;
    }
    cout << "Opened file in binary mode.\n";
    char ch;
    if(!binaryfile.read(reinterpret_cast<char*>(&ch),sizeof(ch))){
        cout << "Error reading file.\n";
        return 1;
    }
    cout << "Read data : " << ch << endl;
    binaryfile.close();
    cout << "Data read and file closed successfully.\n";
    return 0;
}