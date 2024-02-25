#include <iostream>
using namespace std;

struct node{
	int data; //the data inside a node
	node *left, *right; //pointers to children
	node (int x): data(x), left(NULL), right(NULL){} //constructor
	~node(){} //destructor
	};


class BSTree{
	
	public:
		node* insert(node *tree, node *newNode){
			if(tree == NULL){
				return newNode; //base case
				}
			if(newNode->data > tree->data){
				tree->right = insert(tree->right, newNode); //goes right
				}
			else{
				tree->left = insert(tree->left, newNode); //goes left
				}
			return tree; //return the new tree
			
			}
		
		node* search(node *tree, int value){
			
			if(tree == NULL){
				return NULL;
				}
			if(tree->data == value){
				return tree; //root is value, base case. 
				}
			if(value > tree->data){
				return search(tree->right, value);
				}
			else{
				return search(tree->left, value);
				}
			
		}
		
		int getMinValSubTree(node *tree){
			if(tree->left == NULL){
				return tree->data;
				}
			else{
				return getMinValSubTree(tree->left);
				}
			}
		/**
		 * Deletion works in a way that if a Node has its two children
		 * to delete it we first have to go to the right subtree and find the min value
		 * to replace in the position we deleted
		 */
		node *deleteNode(node *tree, int value){
			if(tree == NULL){
				return NULL;
				}
			if(tree->data == value){
				if(tree->right != NULL && tree->left != NULL){
					 int tempValue = getMinValSubTree(tree->right);
					 tree->data = tempValue;
					 tree->right=deleteNode(tree->right, tempValue); //to delete the node we just moved or reaccomodate the values again in case that node had 2 children
					 }
				else{
					if(tree->left==NULL){
						node *temp = tree->right;
						delete tree;
						return temp;
						}
					if(tree->right==NULL){ // to assign the value on the recursive calls "tree->right=deleteNode(tree->right, value);"
						//or "tree->left=deleteNode(tree->left, value);" with the return statement
						node *temp = tree->left;
						delete tree;
						return temp;
						}
					
					}
				}
			if(value > tree->data){ //finding node
				tree->right=deleteNode(tree->right, value);
				}
			else{ //finding node
				tree->left=deleteNode(tree->left, value);
				}
			return tree;			
			
			}
			
			
	
	};

int main(){
	/*
	Basic use of the code above to create a tree
	BSTree bst;
	node *tree = new node(9);
	node *first = new node(99);
	node *second = new node(88);
	node *third = new node(8);
	node *fourth = new node(7);
	bst.insert(tree, first);
	bst.insert(tree, second);
	bst.insert(tree, third);
	bst.insert(tree, fourth);
	
	bst.deleteNode(tree, 99);
	cout<<tree->right->data<<"\n";
	*/
	
	
	}
