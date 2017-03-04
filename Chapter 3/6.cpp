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
    int type; //1-dog,2=cat;
    node *next;
};

class AnimalShelter {
    node * head;
    
public:
    AnimalShelter() {
        head  = NULL;
    }
    
    void create(void);
    int count(void);
    void delete_node(int pos);
    void display(void);
};

void AnimalShelter::create() {
    node *start = NULL, *end = start;
    int num,type;
    
    while (1) {
        cout<<"\n Enter -999 to terminate";
        cout<<"\n Enter Animal ID : ";
        cin>>num;

        cout<<"\n Enter Animal Type : ";
        cin>>type;

        if(num == -999) {
            break;
        } else {
            start = new node;
            start->data = num;
            start->type = type;
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

int AnimalShelter:: count() {
    node *temp = head;
    int cnt = 0;
    while(temp!=NULL) {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}


void AnimalShelter::delete_node(int pos) {
    node *temp = head, *newlist;
    int cnt = 0;
    if(head == NULL) {
        cout<<"\n List is Empty";
    } else {
        if(pos == 1) {
            while(temp!=NULL) {
                if(temp->type==1) {
                    // newlist = temp;
                    // newlist->next = temp;
                    // break;        
                    cout<<"as";
                }
                temp = temp->next;
            }

        } else if(pos==2) {
            cout<<"under";
        } else {
            cout<<"insiode";
            newlist = temp;
            head = temp->next;
        }
        delete(newlist);        
    }
}   

void AnimalShelter::display() {
    cout<<"\n\n Display Data : ";
    node *temp = head;
    while (temp!=NULL) {
        cout<<temp->data<<""<<temp->type;
        if(temp->next!=NULL) {
            cout<<"==>";
        }
        temp = temp->next;
    }
    cout<<"\n";
}

int main() {
    AnimalShelter as;
    as.create();
    as.display();
    int selection;
    cout<<"Enter your selection : ";
    cin>>selection;
    switch(selection) {
        case 1:
            as.delete_node(1);
            break;
        case 2:
            as.delete_node(2);
            break;
        default:
            as.delete_node(3);
            break;
    }
    as.display();
    return 0;
}
