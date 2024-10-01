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

void inorder(node*root){
    if(root == NULL){
        return;
    }

inorder(root->left);  //visiting left
cout << root->data << " ";  //printing node
inorder(root->right); //visiting right
}



void preorder(node *root){
    if(root==NULL){
        return;
    }

cout<<root->data<<" "; //printing data
preorder(root->left); //visiting left
preorder(root->right); //visiting right 
}

void postorder(node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node *root = buildtree();
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}