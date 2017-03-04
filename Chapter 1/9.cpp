#include <iostream>
#include <string>
using namespace std;


int main() {
	char *s1 = new char[10];
	char *s2 = new char[10];

	// char s1[12] = "waterbottle";
	// char s2[12] = "erbottlewat";

	cout<<"\n enter the first string\n";
	cin>>s1;

	cout<<"\n enter the second string\n";
	cin>>s2;	

	int size = strlen(s1) + strlen(s1);
	char *s3 = new char[size];

	strcat(s3,s1);
	strcat(s3,s1);

	if(strlen(s1)!=strlen(s2)) {
		cout<<"It's not rotation of each other";
	} else {
		//s3 = s1 + s2;
		if(strstr(s3,s2)!=NULL) {
			cout<<"It's is rotation of each other: "<<endl;
		} else {
			cout<<"It's is not rotation of each other"<<endl;
		}
	}
	return 0;
}

