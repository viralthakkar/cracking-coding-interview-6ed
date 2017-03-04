#include <iostream>
#include <string>
using namespace std;

int main() {

	char *input1 = new char[10];
	char *input2 = new char[10];

	cout<<"Enter First String : ";
	cin>>input1;

	cout<<"Enter Second String : ";
	cin>>input2;

	int* str_val = new int[128];
	int temp1 = 0, temp2 = 0, ascii = 0,check = 0;

	if(strlen(input1)==strlen(input2)) {
		while(strlen(input1)!=temp1) { 
			ascii = int(input1[temp1]);
			str_val[ascii] = str_val[ascii] + 1;
			temp1+=1;
		}

		while(strlen(input2)!=temp2) {
			ascii = int(input2[temp2]);
			if(str_val[ascii] == 0) {
				check = 1;
				break;
			} else {
				str_val[ascii] -=1;
			} 
			temp2+=1;
		}
	} else {
		check = 1;
	}

	if(check == 0) {
		cout<<"Permutation of other string";
	} else if(check == 1) {
		cout<<"Not a Permutation of other string";
	} 

	return 0;
}