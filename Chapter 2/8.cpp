#include <iostream>
using namespace std;

struct  node {
	int data;
	node *next;
};

class linklist {
	node *head;
	
	public:
		linklist() {
			head = NULL;
		}

		void create(void);
		int display(void);
		int  count(void);
};

void linklist::create(void) {
	node *start = NULL, *end = start;

	int num,pos;
	while(1) {
		cout<<"\n Enter -999 to terminate";
		cout<<"\n Enter num : ";
		cin>>num;

		if(num==-999) {
			break;
		} else {
			start = new node;
			start->data = num;
			if(head == NULL) {
				head = start;
			} else {
				end->next = start;
			}
			end = start;
			end->next = head;
		}
	}
}

int linklist::display(void) {
	int check;

	node *ptr1 = head;
	node *ptr2 = ptr1;
	node *temp;

	while(true) {
		temp = ptr1;
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;
		if(ptr1->data==ptr2->data) {
			return temp->data;
			break;
		} 
	}
}

int linklist::count(void) {
	cout<<"\n\n Count the Data : ";
	node *temp = head;
	int cnt = 0;
	while(temp!=NULL) {
		cnt++;
		temp = temp->next;
	}
	cout<<cnt;
	return cnt;
}

int main() {
	linklist l;
	l.create();
	int ans = l.display();
	cout<<"Answer is : "<<ans;
	return 0;
}

