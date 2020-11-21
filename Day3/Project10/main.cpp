#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write_to_file_txt(){
    ofstream outFile("hello.txt", ios::app);
    if(!outFile){
        cout << "can not open" << endl;
        return ;
    }
    outFile << "how are you" << endl;
    outFile.close();
}

void read_from_file_txt(){
    ifstream inFile("hello.txt");
    const int maxSize = 255;
    char buff[maxSize];
    while (inFile.getline(buff, maxSize)){
        cout << buff << endl;
    }
    inFile.close();
}

void write_number_to_file_then_read_it(){
    ofstream outFile("data.txt", ios::app);
    int i = 19;
    outFile << i;
    outFile.close();

    ifstream inFile("data.txt");
    int x;
    inFile >> x;
    cout << x;
    inFile.close();
}

void read_string_from_file(){
    ifstream inFile("hello.txt");
    string s;
    while(inFile >> s){
        cout << s <<endl;
    }
    inFile.close();
}

int main(){
    // write_to_file_txt();
    // read_from_file_txt();
    // write_number_to_file_then_read_it();
    read_string_from_file();
    cout << "done";

    return 0;
}