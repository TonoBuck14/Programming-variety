#include <iostream>
using namespace std;

struct node{
	int data; //the data inside a node
	node *left, *right; //pointers to children
	node (int x): data(x), left(NULL), right(NULL){} //constructor
	};


class BSTree{
	
	public:
		node* insert(node *tree, node *newNode){
			if(tree == NULL){
				return newNode;
				}
			if(newNode->data > tree->data){
				tree->right = insert(tree->right, newNode);
				}
			else{
				tree->left = insert(tree->left, newNode);
				}
			return tree;
			
			}
		
		node* search(node *tree, int value){
			
			
			}
	
	};

int main(){
	
	
	}
