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

class FindKLast {
    node * head;
    
public:
    FindKLast() {
        head  = NULL;
    }
    
    void create(void);
    int count(void);
    void display(int a);
};

void FindKLast::create() {
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

int FindKLast:: count() {
    node *temp = head;
    int cnt = 0;
    while(temp!=NULL) {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}


void FindKLast::display(int kth) {
    cout<<"\n\n Display Data : ";
    node *temp = head;
    int pos = ((FindKLast::count()) - kth) + 1;
    for(int i=1;i<pos;i++) {
        temp = temp->next;
    }
    cout<<temp->data;
    cout<<"\n";
}

int main() {
    FindKLast fl;
    fl.create();
    int kth;
    cout<<"\n\n Enter Kth from Last :";
    cin>>kth;
    fl.display(kth);
    return 0;
}
