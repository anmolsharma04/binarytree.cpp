#include<iostream>
using namespace std;

class node{

public:
int data;
node*left;
node*right;

node(int d){

    this->data=d;
    this->left=NULL;
    this->right=NULL;

}
};

node *buildtree(){
    node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    return root;
}

int main(){
    node *root = buildtree();
    return 0;
}