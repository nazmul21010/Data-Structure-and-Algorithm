#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *left, *right;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void print(struct Node* root) {
    if (root == NULL) return;  

    print(root->left);
    printf("%d ", root->value);
    print(root->right);
}

struct Node* insertNode(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }  

    if (value < root->value) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }
    return root;
}

int main() {
    struct Node* root = NULL;
    printf("Insert data: ");
    root = insertNode(root, 85);
    root = insertNode(root, 25);
    root = insertNode(root, 95);
    root = insertNode(root, 33);
    print(root);
    return 0;
}
