#include <bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
    Node(int v) : value(v), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value) {
    // normal bst insert
    if (!root) return new Node(value);

    if (value < root->value)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

Node* search(Node* root, int target) {
    // bst search - goes left or right
    if (!root) return nullptr;

    if (root->value == target) return root;
    if (target < root->value)
        return search(root->left, target);
    else
        return search(root->right, target);
}

int main() {
    vector<int> nums = {9, 3, 57, 12, 97, 36, 45, 2, 27, 79};
    Node* root = nullptr;

    for (int n : nums)
        root = insert(root, n);

    cout << "BST created with values: ";
    for (int n : nums) cout << n << " ";
    cout << "\nEnter number to find: ";

    int x;
    cin >> x;

    Node* res = search(root, x);
    if (res)
        cout << "Found " << x << " in tree\n";
    else
        cout << "Not found :(\n";
}
