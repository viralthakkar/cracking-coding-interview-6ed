#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

class DeleteMiddle {
    node * head;
    
    public:
        DeleteMiddle() {
            head  = NULL;
        }
    
        void create(void);
        int count();
        void deletelement(void);
        void display(void);
};

void DeleteMiddle::create() {
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

int DeleteMiddle:: count() {
    node *temp = head;
    int cnt = 0;
    while(temp!=NULL) {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void DeleteMiddle::deletelement(void) {
    int pos;
    pos = (DeleteMiddle::count()) / 2;
    
    node *temp = head, *newlist;
    for(int i=1;i<pos+1;i++) {
        newlist = temp;
        temp=temp->next;
    }
    newlist->next = temp->next;
    delete(temp);
}

void DeleteMiddle::display() {
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
    DeleteMiddle dm;
    dm.create();
    dm.deletelement();
    dm.display();
    return 0;
}
