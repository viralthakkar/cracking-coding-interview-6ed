#include <iostream>
#include <string>
using namespace std;

struct  node {
	int data;
	node *next;
};

string num1="", num2="";

class SumLists {
	node *head;
	
	public:
		SumLists() {
			head = NULL;
		}

		void create(void);
		int count(void);
		int checkpalindrome(void);
		string createnum(void);
		void display(void);
		void remove(void);
};

void SumLists::create(void) {
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

			if (head == NULL) {
        		head = start;
        		head->next = NULL;          
    		} else {
		        end = head;
        		head = start;
        		head->next = end;
    		}
		}
	}
}

int SumLists::count(void) {
	node *temp = head;
	int cnt = 0;
	while(temp!=NULL) {
		cnt++;
		temp = temp->next;
	}
	return cnt;
}

void SumLists::remove(void) {
	node *temp = head,*newlist;
	while(temp!=NULL) {
		newlist = temp;
		temp = temp->next;
		delete(newlist);
	}
	delete(temp);
}

string SumLists::createnum(void) {
	node *temp = head;
	string str = "";
    while(temp!=NULL) {
    	str = str + to_string(temp->data);
        temp = temp->next;
    }
    head = NULL;
    delete(temp);
    return str;
}


void SumLists::display(void) {
    cout<<"\n\n Display Data : ";
    node *temp = head;
    while(temp!=NULL) {
        cout<<temp->data;
        if(temp->next != NULL) {
            cout<<"==>";
        }
        temp = temp->next;
    }
    cout<<"\n";
    delete(temp);
}

int main() {
	SumLists sm;
	sm.create();
	num1 = sm.createnum();
	sm.display();
	sm.remove();
	sm.create();
	num2 = sm.createnum();

	int sum = atoi(num1.c_str()) + atoi(num2.c_str());
	cout<<"Sum is : "<<sum;

	return 0;
}

