// file.read(reinterpret_cast<char*>(&variable), sizeof(variable));
// reading from binary file
#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ifstream binaryfile("binarydata1.bin",ios::binary);
    if(!binaryfile){
        cout << "Failed to open file in binary mode.\n";
        return 1;
    }
    cout << "File opened in binary mode successfully.\n";
    int y = 0;
    if(!binaryfile.read(reinterpret_cast<char*>(&y),sizeof(y))){
        cout << "Error reading the file !\n";
        return 1;
    }
    cout << "Read data : " << y << endl;
    binaryfile.close();
    cout << "Data read and file closed successfully from the file.\n";
    return 0;
}