#include<iostream>
using namespace std;

struct node 
{
    int val;
    node *next;
    // node(){cout<<"jdjshg";}
};


class LinkedList{
private :

node *head,*end;
int length;


public:

LinkedList();
void add(int val);
void print();
void deleteNode(int n);
int getlength();
void update(int idx,int val);
bool search(int n);
void searchAndInsert(int key,int value);

};



int main()
{
    LinkedList l;
    
    for(int i=0;i<11;i++){l.add(i);}

    // l.print();
    l.searchAndInsert(4,33);
    // l.print();
    l.searchAndInsert(55,6);
    
    // l.print();
    // cout<<l.search(100)<<endl;
    
    return 0;
}

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
    if(idx==0){head=head->next;return;}
    node *t=head,*temp=NULL;

    int i=0;
    while(i!=idx){
        temp=t;
        t=t->next;
        i++;
    }
    if (t->next==NULL){temp->next=NULL;}
    else{temp->next=t->next;}
    delete t;



}


LinkedList::LinkedList(){head=NULL;end=NULL;length=0;}


void LinkedList::add(int val)
{
    this->length++;
    node *new_node=new  node;
    new_node->val=val;
    new_node->next=NULL;

    if(head==NULL){head=new_node;end=head;return;}

    end->next=new_node;
    end=new_node;

}

void LinkedList::print(){
    cout<<"{";
    node *t=head;
    while(t!=NULL){
        cout<<t->val<<"   ";
        t=t->next;
    }

    cout<<"}"<<endl;
}

void LinkedList::searchAndInsert(int key,int value){
    node *new_node=new node;
    new_node->val=value;
    new_node->next=NULL;
    
    node *t=head;
    print();
    while(t!=NULL){
        if(t->val==key){
            cout<<t->val<<"\t"<<t->next->val<<endl;
            new_node->next=t->next;
            t->next=new_node;

            cout<<t->val<<"\t"<<t->next->val<<endl;
            return;
        }
        
        t=t->next;
        
    }

    cout<<"Warning value "<<key<<" not found in list "<<endl;
}