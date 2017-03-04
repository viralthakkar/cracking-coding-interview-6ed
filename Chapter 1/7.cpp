#include <iostream>
using namespace std;

int main() {
	
	int matrix1[4][4] = {0};
	int matrix2[4][4] = {0};

	cout<<"\n Input is : \n"<<endl;

	for(int i=0;i<4;i++) {
		for(int j=0;j<4;j++) {
			cin>>matrix1[i][j];
		}
	}

	int cols = 3;
	int rows = 0;	

	for(int i=0;i<4;i++) {
		for(int j=0;j<4;j++) {
			matrix2[rows][cols] = matrix1[i][j];
			rows++;
		}
		--cols;
		rows = 0;
	}	

	cout<<"\n Output is :\n";

	for(int i=0;i<4;i++) {
		for(int j=0;j<4;j++) {
			cout<<matrix2[i][j]<<" ";
		}
		cout<<"\n";
	}

	return 0;

}
