#include<iostream>
#include<chrono>
#define SIZE 999
using namespace std;

struct node
{
    int val;
    node *next,*prev;
    // node(){cout<<"jdjshg";}
};


class LinkedList{
private :
static int x;
node *head,*end;
int length;


public:

LinkedList();
void add(int val);
void print();
void printReverse();
void deleteNode(int n);
int getlength();
void update(int idx,int val);
bool search(int n);
void searchAndInsert(int key,int value);
void josephus();
int operator+(LinkedList l1){return getlength()+l1.getlength();};

};
int LinkedList::x;


int main()
{
    LinkedList l1,l2;
    for(int i=0;i<11;i++){l1.add(i);l2.add(i+11);}
    l1.print();
    l2.print();

    cout<<l1+l2;
    
    return 0;
}

void LinkedList::josephus(){}

bool LinkedList::search(int n){
    if(head==NULL){cout<<"Warning! Index error you currently have "<<this->length<<" values  and you are trying to update value at index more than one"<<endl;return false;}
    
    node *t=head;
    while(t!=NULL){
        if(t->val==n){return true;}
        t=t->next;
    }
    return false;
}



void LinkedList::update(int idx,int value){
    if(head==NULL||idx>length-1){cout<<"Warning! Index error you currently have "<<this->length<<" values  and you are trying to update value at index "<<idx<<endl;return;}
    node *t=head;
    int id=0;
    while(id!=idx){
        t=t->next;
        id++;
    }
    t->val=value;
}


int LinkedList::getlength(){return length;}



void LinkedList::deleteNode(int idx){
    if(idx>length-1||length==0){cout<<"Index error";return;}
    length--;
    node *t;
    if(idx==0){t=head;
    head->next->prev=NULL;
    t=head;
    head=head->next;
    delete t;
    return;}

    t=head;

    int i=0;
    while(i!=idx){
        
        t=t->next;
        i++;
    }

    if (t->next==NULL)
    {
        t->prev->next=NULL;
    }

    else{
        t->prev->next=t->next;
        t->next->prev=t->prev;
        }
    delete t;



}




LinkedList::LinkedList(){head=NULL;end=NULL;length=0;}




void LinkedList::add(int val)
{
    this->length++;
    node *new_node=new  node;
    new_node->val=val;
    new_node->next=NULL;

    if(head==NULL){
        head=new_node;
        head->next=NULL;
        end=head;
        return;

    }

    new_node->prev=end;
    
    end->next=new_node;
    end=new_node;
    

}




void LinkedList::print(){
    cout<<"{";
    node *t=head->next;
        cout<<head->val<<"   ";
        int i=0;
    while(t!=NULL){
        i++;
        cout<<t->val<<"   ";
        t=t->next;
        if(i>11){break;}
    }

    cout<<"}"<<endl;
}



void LinkedList::printReverse(){
    cout<<"{";
    node *t=end;
        cout<<end->val<<"   ";
        int i=0;
    while(t!=NULL){
        i++;
        cout<<t->val<<"   ";
        t=t->prev;
        if(i>=length){break;}
    }

    cout<<"}"<<endl;
}

void LinkedList::searchAndInsert(int key,int value){
    node *new_node=new node;
    new_node->val=value;
    new_node->next=NULL;
    new_node->prev=NULL;
    
    
    // if(head->val==key){
    // new_node->prev=head;
    // new_node->next=head->next;
    // head->next->prev=new_node;
    // head->next=new_node;
    // return;
    // }

    node *t=head;
    
    while(t!=NULL){
        if(t->val==key)
        {
            
            new_node->next=t->next;
            new_node->prev=t;
            t->next->prev=new_node;
            t->next=new_node;

            
            return;
        }
        
        t=t->next;
        
    }

    cout<<"Warning value "<<key<<" not found in list "<<endl;
}           