#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
class node{
public:
    int value;
    node *left = NULL;
    node *right = NULL;
};
void completeBinaryTree(int *arr, int size){
    int mid = (size - 1) / 2;
    node *head = new node;

}
int main() {
    int level, size, *arr;
    cin >> level;
    size = pow(2, level) - 1;
    arr = new int[size];
    for(int n = 0 ; n < size ; n++) cin >> arr[n];
    completeBinaryTree(arr, size);
    return 0;
}
// ctrl + alt + c -> build
// ctrl + alt + r -> execute