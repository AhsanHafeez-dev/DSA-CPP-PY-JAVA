#include<iostream>
using namespace std;
struct node
{
    int val;
    node *next;
};
class Queue{
    node *head,*end;

    public:
    Queue();
    void Enqueue(int val);
    int Dequeue();
};


int main()
{
    Queue q;
    q.Enqueue(2);
    q.Enqueue(3);
    try{
    cout<<q.Dequeue()<<endl;
    // cout<<"break"<<endl;
    cout<<q.Dequeue()<<endl;
    }
    catch(const char *msg){cout<<msg<<endl;}
    return 0;
    }



Queue::Queue()
{
head=end=NULL;
}

void Queue::Enqueue(int val)
{
    
    node *new_node=new node;
    new_node->val=val;
    new_node->next=NULL;
    if(head==NULL){head=new_node;end=head;return;}
  
    end->next=new_node;
    end=new_node;

    
    
}

int Queue::Dequeue()
{
if(head==NULL){throw "Cannot deque on empty queue";}
node *t=head;

int x=head->val;
cout<<"head : "<<x<<endl;
head=head->next;
delete t;
return x;

}