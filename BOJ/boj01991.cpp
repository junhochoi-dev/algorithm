#include <iostream>
using namespace std;
class node{
private:
	char value;
	node *left = NULL;
	node *right = NULL;
public:
	void setValue(char value){
		this->value = value;
	}
	void setLeft(node *left){
		this->left = left;
	}
	void setRight(node *right){
		this->right = right;
	}
	char getValue(){
		return this->value;
	}
	node* getLeft(){
		return this->left;
	}
	node* getRight(){
		return this->right;
	}
};
void makeTree(node *Head, char pv, char lv, char rv){
	node* ptr = Head;
	if(ptr->getValue() == pv){
		if(lv != '.'){
			ptr->setLeft(new node);
			(ptr->getLeft())->setValue(lv);
		}
		if(rv != '.'){
			ptr->setRight(new node);
			(ptr->getRight())->setValue(rv);
		}
	}
	else{
		if(Head->getLeft() != NULL)
			makeTree(Head->getLeft(), pv, lv, rv);
		if(Head->getRight() != NULL)
			makeTree(Head->getRight(), pv, lv, rv);
	}
}
void preorder(node *Head){
	cout << Head->getValue();
	if(Head->getLeft() != NULL)
		preorder(Head->getLeft());
	if(Head->getRight() != NULL)
		preorder(Head->getRight());
}
void inorder(node *Head){
	if(Head->getLeft() != NULL)
		inorder(Head->getLeft());
	cout << Head->getValue();
	if(Head->getRight() != NULL)
		inorder(Head->getRight());
}
void postorder(node *Head){
	if(Head->getLeft() != NULL)
		postorder(Head->getLeft());
	if(Head->getRight() != NULL)
		postorder(Head->getRight());
	cout << Head->getValue();
}
int main(){
	char pv, lv, rv;
	int size;
	cin >> size;
	cin >> pv >> lv >> rv;
	node Head;
	Head.setValue(pv);
	if(lv != '.'){
		Head.setLeft(new node);
		(Head.getLeft())->setValue(lv);
	}
	if(rv != '.'){
		Head.setRight(new node);
		(Head.getRight())->setValue(rv);
	}
	for(int n = 0 ; n < size - 1 ; n++){
		cin >> pv >> lv >> rv;
		makeTree(&Head, pv, lv, rv);
	}
	preorder(&Head);
	cout << endl;
	inorder(&Head);
	cout << endl;
	postorder(&Head);
	cout << endl;
	return 0;
}
/*
7
A B C
B D .
C E F
E . .
F . G
D . .
G . .
*/