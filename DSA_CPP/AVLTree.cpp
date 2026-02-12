#define REST #include<iostream>
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

class AVLtree
{
    private:

        AVLtree *root,*right,*left,*parent;
        int height,val;

    public:

        AVLtree();
        AVLtree(int val,AVLtree* =NULL);
        ~AVLtree();
        void insert(int val);
        AVLtree* rightRotation();
        AVLtree* leftRotation();
        int getBalanceFactor();
        int getHeight(AVLtree *root);


};

int main()
{
    // AVLtree a;
    int x=1000000;
    cout<<"khatam"<<endl;
    return x;   
}


AVLtree::AVLtree()
{
    height=1;

    parent=left=right=root=NULL;

}

AVLtree::AVLtree(int val,AVLtree *parent)
{
    height=1;
    root=NULL;
    left=right=root=NULL;
    this->parent=parent;
}

AVLtree::~AVLtree(){cout<<"deleting : "<<this->val<<endl;}


void AVLtree::insert(int val)
{
    if(root==NULL){root=new AVLtree(val);}
    if(val>this->val)
    {
        this->right->insert(val);
    }
    else if(val<this->val)
    {
        this->left->insert(val);
    }
}

    AVLtree* AVLtree:: rightRotation(){}
    AVLtree* AVLtree:: leftRotation(){}

    
    int AVLtree::getBalanceFactor()
    {
        return abs( getHeight( this->left) -   getHeight(this->right)  );
    }

    int AVLtree::getHeight(AVLtree* r)
    {
        return r==NULL?0:r->height;
    }
