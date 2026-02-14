#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

int main() {
    TreeNode* root = new TreeNode();
    root->data = 10;

    root->left = new TreeNode();
    root->left->data = 5;
    root->left->left = NULL;
    root->left->right = NULL;

    root->right = new TreeNode();
    root->right->data = 15;
    root->right->left = NULL;
    root->right->right = NULL;

    cout << "Root: " << root->data << endl;
    cout << "Left: " << root->left->data << endl;
    cout << "Right: " << root->right->data << endl;

    return 0;
}
