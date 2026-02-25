// file.write(reinterpret_cast<char*>(&variable), sizeof(variable));
#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ofstream binaryfile("binarydata2.bin",ios::binary);
    if(!binaryfile){
        cout << "Failed to open file in binary mode.\n";
        return 1;
    }
    cout << "File opened successfully in binary mode.\n";
    char ch = 'A';
    binaryfile.write(reinterpret_cast<char*>(&ch),sizeof(ch));
    binaryfile.close();
    cout << "Data entered and file closed successfully.\n";
    return 0;
}