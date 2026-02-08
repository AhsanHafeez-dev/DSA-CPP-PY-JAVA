#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//no need of logging as it is not for production i have checked multiple time with different cases
class TreeNode
{
    
    public:
    int val;
    TreeNode *right,*left,*parent;
    TreeNode(int val,TreeNode* = NULL);
    //no destructor

    //traversal
    //as per my need i want to start from which node traversal is called providing flexiblity
    void inOrderTraversal(TreeNode *r);
    void preOrderTraversal();
    void postOrderTraversal();
    void bfs();
    void add( int val);
    TreeNode* deleteNode(int val);
    void setParent(TreeNode *node);
    int find_min();
    TreeNode* find_root();
};
int main()
{
    TreeNode *root=new TreeNode(10);
    
    root->add(23);
    root->add(4);
    root->add(24);
    root->add(5);
    root->add(26);
    root->add(6);
    root->add(35);
    root->add(3);
    root->bfs();
    // cout<<"root : "<<root->val<<"  right : "<<root->right->val<<"  left : "<<root->left->val <<endl;
    root=root->deleteNode(10);
    root->bfs();
//  root->postOrderTraversal();
    

    return 0;
}



//each node will be combnation of data and right and left childre
//constructor to set data and initialize value initializing children with null
TreeNode::TreeNode(int val,TreeNode *p)
{
    this->val=val;
    right=left=NULL;

    parent=p;
}



void TreeNode::add(int val)
{
 

    if(val>this->val)
    {
        if(this->right){this->right->add(val);}
        //creating node at my right and set me as parent
        else {this->right=new TreeNode(val,this);}
        return;

    }


    
    else if(val<this->val)
    {
        if(this->left){this->left->add(val);}
        //creating node at my left and set me as parent
        else{this->left=new TreeNode(val,this);}
        return;

    }
    throw runtime_error("KeyError : value already in tree");

}



// traversing means going through all nodes of tree 
//in Inorder traversal we process root first then left subtree then right subtree
        
void TreeNode::inOrderTraversal(TreeNode* r)
{

if(r==NULL){throw runtime_error("KeyError : no value not in tree");}
if(r->left){inOrderTraversal(r->left);}
cout<<r->val<<"\t";
if(r->right){inOrderTraversal(r->right);}

}



// traversing means going through all nodes of tree 
//in pre order traversal we process root first then left subtree then right subtree        
//processing doesnot neccessarily mean print you can do any processing you want here
// you can create function which contain your logic and call it here on individual node function depends upon your task

void TreeNode::preOrderTraversal()
{

if(this->left){this->left->preOrderTraversal();}
cout<<this->val<<"\t";
if(this->right){this->right->preOrderTraversal();}

}


// traversing means going through all nodes of tree 
//in post order traversal we process left subtree first then right subtree than root

void TreeNode::postOrderTraversal()
{

if(this->left){this->left->postOrderTraversal();}
if(this->right){this->right->postOrderTraversal();}
cout<<this->val<<"\t";

}


void TreeNode::bfs()
{

    vector<TreeNode*> v;
    v.push_back(this);
    cout<<"{";
    while(!v.empty()) 
    {
        auto i=v.begin();
        TreeNode *temp=v[0];
        v.erase(i);
        if(temp->left){v.push_back(temp->left);}
        if(temp->right){v.push_back(temp->right);}
        cout<<temp->val<<"   ";
    }
    cout<<"}"<<endl;

}


void TreeNode::setParent(TreeNode *ch)
{
    if(this->parent==NULL){return;}
    TreeNode *t=this;
    // cout<<"parent : "<<this->parent->val<<"\t"<<this->val;
    if(this->parent->right==this)
    {
            // cout<<"child : "<<this->parent->right->val<<"\t";
        this->parent->right=ch;
    
    }
    else{
        // cout<<"child : "<<this->parent->left->val<<"\t";
        this->parent->left=ch;
    }

    //as i havenot taken any dynamic memory so only deleting node
    t->parent=NULL;
    cout<<t->val<<endl;
    delete t;
}


TreeNode* TreeNode::deleteNode(int val)
{
    
    if(this->val==val)
    {
        //deleting only node in tree
        if(this->parent==NULL&&this->left==NULL&&this->right==NULL){return NULL;}
        //leaf
        if(this->left==NULL&&this->right==NULL)
        {
            this->setParent(NULL);
            
            return find_root();
        }

        //two child
        else if(this->left!=NULL && this->right!=NULL)
        {
             cout<< "two child "<<endl;
             //find minimum from right subtree
            int x=this->right->find_min();
            //setting its value to minimum
            this->val=x;
            //recursive call to delete minimum 
            this->right->deleteNode(x);
            //return root
            return find_root();
        }

        //one child
        else{            
            cout<< "case : 2 "<<endl;
            //set parent child  to my child
            if(this->left){this->setParent(this->left);}
            else{this->setParent(this->right);}
            return find_root();
           
        }
    }


//if value is greater than me right recursive call
    if(val>this->val)
    {
        if(this->right){this->right->deleteNode(val);return find_root();}

    }

//if value is smaller than me left recursive call
    else if(val<this->val)
    {
        if(this->left){this->left->deleteNode(val);return find_root();}
    }

    //in case value that doesnot exist
    throw runtime_error("KeyError : value not in tree");
    
}




int TreeNode::find_min()
{   //go left untill no left is left
    if(this->left){return this->left->find_min();}
    return this->val;
}

TreeNode* TreeNode::find_root()
{
    //finding root in case of deletion
    if(this->parent){return this->parent->find_root();}
    return this;
}