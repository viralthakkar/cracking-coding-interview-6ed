//
//  2.cpp
//  
//
//  Created by Viral Thakkar on 2/2/17.
//
//

#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

class RemoveDuplicate {
    node * head;
    
public:
    RemoveDuplicate() {
        head  = NULL;
    }
    
    void create(void);
    int count(void);
    void remove();
    void display(void);
};

void RemoveDuplicate::create() {
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

int RemoveDuplicate:: count() {
    node *temp = head;
    int cnt = 0;
    while(temp!=NULL) {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}


void RemoveDuplicate::remove() {
    node *previous, *nextp, *remove;
    previous = head;
    while(previous != NULL && previous->next != NULL) {
        nextp = previous;
        while(nextp->next != NULL) {
            if(previous->data == nextp->next->data) {
                remove = nextp->next;
                nextp->next = nextp->next->next;
                delete(remove);
            }  else  {
                nextp = nextp->next;
            }
        }
        previous = previous->next;
    }
}

void RemoveDuplicate::display(void) {
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
    RemoveDuplicate rd;
    rd.create();
    rd.remove();
    rd.display();
    return 0;
}
