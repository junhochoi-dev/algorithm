#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
class node {
public:
	int value;
	node* left = NULL;
	node* right = NULL;
};
class binary_tree {
public:
	node* head = NULL;
	void insertion(int val) {
		node* tmp = new node;
		tmp->value = val;
		if (this->head == NULL) {
			this->head = tmp;
			return;
		}
		else {
			node* ptr = this->head;

			while (true) {
				if (ptr->value < val) {
					if (ptr->right == NULL) {
						ptr->right = tmp;
						return;
					}
					ptr = ptr->right;
				}
				else { // ptr->value > val
					if (ptr->left == NULL) {
						ptr->left = tmp;
						return;
					}
					ptr = ptr->left;
				}
			}
		}
	}
};
/*
void preorder(node* ptr) {
	cout << ptr->value << endl;
	if (ptr->left != NULL) preorder(ptr->left);
	if (ptr->right != NULL) preorder(ptr->right);
}
*/
void postorder(node* ptr) {
	if (ptr->left != NULL) postorder(ptr->left);
	if (ptr->right != NULL) postorder(ptr->right);
	cout << ptr->value << endl;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int val;
	binary_tree bt;
	
	while (cin >> val){
		bt.insertion(val);
	}

	// int arr[] = { 50, 30, 24, 5, 28, 45, 98, 52, 60 };
	// for (int n = 0; n < 9; n++) bt.insertion(arr[n]);
    
	postorder(bt.head);
	return 0;
}