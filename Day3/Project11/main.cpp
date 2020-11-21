#include <iostream>
#include <fstream>

using namespace std;

void write_number_to_file_then_read_it(){
    ofstream outFile("data.dat", ios::binary);
    int i = 19;
    double d = 11.2;
    int* pos_i = &i;
    double* pos_d = &d;
    outFile.write((char*)pos_i, sizeof(i));
    outFile.write((char*)pos_d, sizeof(d));
    outFile.close();

    ifstream inFile("data.dat", ios::binary);
    int x;
    double y;
    inFile.read((char*)&x, sizeof(x));
    inFile.read((char*)&y, sizeof(y));
    cout << x << " " << y << endl;
    inFile.close();
}



int main(){
    write_number_to_file_then_read_it();

    return 0;
}