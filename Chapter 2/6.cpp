#include <iostream>
using namespace std;

struct  node {
	int data;
	node *next;
};

int pointer = -1;
int *stackarray = new int[4];

class Palindrome {
	node *head;
	
	public:
		Palindrome() {
			head = NULL;
		}

		void create(void);
		int count(void);
		int checkpalindrome(void);
		void push(int num);
};

void Palindrome::create(void) {
	node *start = NULL, *end = start;

	int num,pos;
	while(1) {
		cout<<"\n Enter -999 to terminate";
		cout<<"\n Enter num : ";
		cin>>num;

		// cout<<"\n Insert Position";
		// cin>>pos;

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
			end->next = NULL;
		}
	}
}

int Palindrome::count(void) {
	node *temp = head;
	int cnt = 0;
	while(temp!=NULL) {
		cnt++;
		temp = temp->next;
	}
	return cnt;
}


int Palindrome::checkpalindrome(void) {
    int pos;
    int cnt = Palindrome::count();
    int check = 1;
    
    pos = (Palindrome::count()) / 2;
    
    node *temp = head, *newlist;
    for(int i=1;i<=pos;i++) {
        newlist = temp;
        Palindrome::push(temp->data);
        temp=temp->next;
    }

    if(cnt % 2 == 1) {
    	newlist->next = temp->next;
		delete(temp);
    }

    while(temp!=NULL) {
    	if(temp->data == stackarray[pointer]) {
    		pointer = pointer - 1;
    		temp = temp->next;
    	} else {
    		check = 0;
    		break;
    	}
    }
    return check;
}



void Palindrome::push(int num) {
	pointer = pointer + 1;
	stackarray[pointer] = num;	
}

int main() {
	Palindrome p;
	p.create();
	int ans = p.checkpalindrome();
	if(ans == 1) {
		cout<<"\n It's Palindrome\n";
	} else {
		cout<<"\n It's not Palindrome\n";
	}
	return 0;
}

