#include <iostream>
using namespace std;

int pointer = -1;
int stackaraay[10];

int push(int num);
int pop(void);

int main() {

	int num,min,min_value;
	cout<<"\n Enter -999 to terminate\n";
	while(1) {
		cout<<"Enter Number : ";
		cin>>num;
		if(num == -999) {
			break;
		} else {
			int check = push(num);
			if(check == 1) {
				break;
			}
			if(pointer == 0) {
				min = stackaraay[pointer];
			} else {
				if(min > stackaraay[pointer]) {
					min = stackaraay[pointer];
				}
			}
		}
	}

	while(pointer!=-1) {
		min_value = pop();
		if(min==min_value) {
			break;
		}
	}

	cout<<"Min value is : "<<min_value<<endl;
	return 0;

}

int push(int num) {
	if(pointer == 9) {
		cout<<"Stack is Full\n";
		return 1;
	} else {
		pointer = pointer + 1;
		stackaraay[pointer] = num;
	}
	return 0;
}

int pop(void) {
	int min_value;
	if(pointer==-1) {
		cout<<"Stack is empty";
		return 0;
	} else {
		min_value = stackaraay[pointer];
		pointer = pointer - 1;
	}
	return min_value;
}
