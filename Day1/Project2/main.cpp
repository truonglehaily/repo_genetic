#include <iostream>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string str1("Hello ");
	string str2 = "world!";
	string s;
	s = str1 + str2;
	cout << "The string: " << s << endl;
	cout << "Length of string = " << s.length() << endl;
	cout << "First character: " << s[0] << endl;
	int lassPos = s.length() - 1;
	cout << "Last character: " << s[lassPos] << endl;
	
	return 0;
}
