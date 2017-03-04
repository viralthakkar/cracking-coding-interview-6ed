#include <iostream>
using namespace std;

int main() {
	
	int matrix[4][4] = {0};
	int *rows = new int[4];
	int *cols = new int[4];

	cout<<"Input is : "<<endl;

	for(int i=0;i<4;i++) {
		for(int j=0;j<4;j++) {
			cin>>matrix[i][j];
		}
	}

	for(int i=0;i<4;i++) {
		for(int j=0;j<4;j++) {
			if(matrix[i][j]==0) {
				rows[i] = 1;
				cols[j] = 1;
			}
		}
	}

	// for (int i=0;i<4;i++) {
	// 	cout<<"Rows : "<<rows[i]<<"Cols: "<<cols[i]<<endl;
	// }
	int temp = 0;
	for(int i=0;i<4;i++) {
		for(int j=0;j<4;j++) {
			if(rows[i] == 1 || cols[j]==1) {
				matrix[i][j] = 0;
			}
		}
	}

	cout<<"\nOutput is :\n";

	for(int i=0;i<4;i++) {
		for(int j=0;j<4;j++) {
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}

	return 0;

}