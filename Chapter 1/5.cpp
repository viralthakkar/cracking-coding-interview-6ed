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
	*str_val = 0;
	int temp1 = 0, temp2 = 0, ascii = 0,check = 0;

	int len_input1 = strlen(input1);
	int len_input2 = strlen(input2);

	if((len_input1 == len_input2) || (len_input1-1 == len_input2)) {
		while(strlen(input1)!=temp1) { 
			ascii = int(input1[temp1]);
			str_val[ascii] = str_val[ascii] + 1;
			temp1+=1;
		}
		
		while(strlen(input2)!=temp2) {
			ascii = int(input2[temp2]);
			if(str_val[ascii]!=0) {
				str_val[ascii] = str_val[ascii] - 1;
				temp1-=1;
			}
			temp2+=1;
		}

	} else {
		check = 1;	
	}

	if((temp1 == 0 || temp1 == 1) && check == 0) {
		cout<<"It is "<<temp1<<" edits away."<<endl;
	} else {
		cout<<"It is 2 more edits away."<<endl;
	}
	return 0;
}