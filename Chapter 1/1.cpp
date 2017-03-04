#include <iostream>
#include <string>
using namespace std;

int main() {

	
	char* input = new char[10];

	//char input[10];
	cout<<"Enter your Input : ";
	cin>>input;
	cout<<endl;	

	int* str_val = new int[128];
	int temp = 0, ascii = 0,check = 0;

	while(strlen(input)!=temp) {
		if(str_val[int(input[temp])]==1) {
			check = 1;
			break;
		} else {
			ascii = int(input[temp]);
			str_val[ascii] = 1;
		}
		temp+=1;
	}
	
	if(check == 1) {
		cout<<"String doesn't have unique character\n";
	} else {
		cout<<"String have unique character\n";
	}
	return 0;
}

