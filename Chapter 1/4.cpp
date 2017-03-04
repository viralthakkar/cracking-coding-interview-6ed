#include <iostream>
#include <string>
using namespace std;

int main() {

	string input = "";
	cout<<"Enter a String : ";
	getline(cin, input);


	int* str_val = new int[128];
	*str_val = 0;
	int temp = 0, ascii = 0,cnt = 0;
	//cout<<input.length();

	while(input.length()!=temp) { 
		if(((input[temp]>='0')&&(input[temp]<='9'))||((input[temp]>='A')&&(input[temp]<='Z'))||((input[temp]>='a')&&(input[temp]<='z'))) {
			ascii = int(input[temp]);
			str_val[ascii] = str_val[ascii] + 1;
		}
		temp+=1;
	}

	for(int i=0;i<127;i++) {
		if(str_val[i] == 1) {
			cnt++;
		}
	}

	if(cnt > 1) {
		cout<<"It is not permutation of palindrome"; 
	} else {
		cout<<"It is permutation of palindrome";
	}

	return 0;

}