#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

int idx = -1;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* buildTree(int nodes[], int size) {
    idx++;
    if (idx >= size || nodes[idx] == -1) {
        return NULL;
    }

    Node* newNode = createNode(nodes[idx]);
    newNode->left = buildTree(nodes, size);
    newNode->right = buildTree(nodes, size);

    return newNode;
}

void preorder(Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main() {
    int nodes[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    int size = sizeof(nodes) / sizeof(nodes[0]);

    Node* root = buildTree(nodes, size);
    preorder(root);
    return 0;
}
