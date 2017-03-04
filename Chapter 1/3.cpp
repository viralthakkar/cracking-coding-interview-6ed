#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;

int main () {
	string input = "";
	string output = "";
	int temp = 0;
  	cout << "Please enter a valid sentence (with spaces):\n>";
 	getline(cin, input);

 	int count = input.length();

 	while(count!=temp) {
 		if(int(input[temp]) == 32 && temp != count-1) {
 			output = output + '%';
 			output = output + '2';
 			output = output + '0'; 			
 		} else {
 			 output = output + input[temp];
 		}
 		temp++;
 	}
 	cout<<"Output String is : "<<output<<endl;
	return 0;
}
