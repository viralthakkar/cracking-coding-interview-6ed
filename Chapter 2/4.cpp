#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

class PartionList {
	node *head;

	public:
        PartionList() {
            head  = NULL;
        }
    
        void create(void);
        void insert_last(int num);
        int count(int partion_point);
        void reordering(int partion_point);
        void display(void);
};

void PartionList::create() {
    node *start = NULL, *end = start;
    int num;
    
    while (1) {
        cout<<"\n Enter -999 to terminate";
        cout<<"\n Enter number : ";
        cin>>num;
        
        if(num == -999) {
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

void PartionList::insert_last(int num) {
	node *temp = head;

	node *start = new node;
    start->data = num;
   	start->next = NULL;

	while(temp->next!=NULL) {
		temp = temp->next;
	}
	temp->next = start;	
}
	

int PartionList:: count(int partion_point) {
    node *temp = head;
    int cnt = 0;
    while(temp!=NULL) {
    	if(temp->data >= partion_point) {
    		cnt++;	
    	}
        temp=temp->next;
    }
    return cnt;
}

void PartionList::reordering(int partion_point) {
	node *temp = head,*nextp = head->next, *previous = head,*remove;
	int value;
	int cnt = PartionList::count(partion_point);
	while(temp->next!=NULL) {
		value = temp->data;
		if(value >= partion_point) {
			cnt = cnt - 1;
			PartionList::insert_last(value);
			remove = temp;
			previous->next = temp->next;
			temp = previous;
			delete(remove);
		}
		previous = temp;
		nextp = temp->next;
		if(cnt==0) {
			break;
		}
		temp = temp->next;
	}
}

void PartionList::display() {
    cout<<"\n\n Display Data : ";
    node *temp = head;
    while (temp!=NULL) {
        cout<<temp->data;
        if(temp->next!=NULL) {
            cout<<"==>";
        }
        temp = temp->next;
    }
    cout<<"\n";
}

int main() {
	PartionList pl;
	pl.create();
	pl.display();

	int partion_point;
	cout<<"\n Enter Partion Point : \n";
	cin>>partion_point;

	pl.reordering(partion_point);
	pl.display();
	return 0;	
}