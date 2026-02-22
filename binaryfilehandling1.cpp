// file.write((char*)&variable, sizeof(variable)); 
// writting to binary file
#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ofstream binaryfile("binarydata1.bin",ios::binary);
    if(!binaryfile) {
        cout << "Failed to open file.\n";
        return 1;
    }else{
        cout << "File opened in binary mode successfully.\n";
    }
    int x = 1000;
    // file.write(reinterpret_cast<char*>(&variable), sizeof(variable));
    binaryfile.write(reinterpret_cast<char*>(&x),sizeof(x));
    binaryfile.close();
    return 0;
}