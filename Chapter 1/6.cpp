#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void push(int num);
void makestring();

int* stack = new int[10];
string output = "";
int flag = -1;

int main() {

	char* input = new char[10];
	cout<<"Enter your Input : ";
	cin>>input;
	cout<<endl;	

	int temp = 0;

	stack[0] = int(input[0]);
	while(strlen(input)!=temp) {
		if(stack[0]==int(input[temp])) {
			push(int(input[temp]));	
		} else {
			makestring();
			stack[0] = int(input[temp]);
			flag = 0;
		}
		temp++;
	}
	makestring();
	cout<<output<<endl;
	return 0;

}

void push(int num) {
	flag = flag + 1;
	stack[flag] = num;	
}

void makestring() {
 	char c = char(stack[0]);
 	int cnt = flag + 1;

 	string s;
	stringstream out;
	out << cnt;
	s = out.str();
 	output = output + c;
 	output = output + s;
}


