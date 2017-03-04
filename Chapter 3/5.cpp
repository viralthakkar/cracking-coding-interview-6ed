#include <iostream>
#include <stack>
using namespace std;


int main() {
	stack<int> s1;
	stack<int> s2;

	s1.push(5);
	s1.push(6);
	s1.push(3);
	s1.push(7);

	int min = s1.top();
	s2.push(min);
	while(s1.empty()==false) {
		int temp = s1.pop();
		while(s2.empty()==false && s2.top() > temp) {
			s1.push(s2.pop());
		}
	}

	while(s2.empty()==false) {
		s1.push(s2.pop());
	}

	while(s1.empty()==false) {
		cout<<s1.top()<<endl;
		s1.pop();
	}
	return 0;
}