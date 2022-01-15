#include<iostream>


using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

int main()
{
	Node* root= new Node();
	root->data=5;
	
	root->left= root->right = NULL;

	
	root->left=new Node();
	root->left->data=9;
	root->left->left= root->left->right =NULL;
	cout<<root->data<<" "<<root->left->data;

	
	
	return 0;
}
