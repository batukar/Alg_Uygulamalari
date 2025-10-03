// Tree Traversal
#include <stdio.h>
#include <stdlib.h>

// Agac dugum yapisi
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
typedef struct Node Node;

// fonksiyon prototipleri
Node* yeniDugum(int veri);
void preorder(Node* kok);
void inorder(Node* kok);
void postorder(Node* kok);

int main() {
    /*
             1
            / \
           2   3
          / \
         4   5
    */

    Node* root = yeniDugum(1);
    root->left = yeniDugum(2);
    root->right = yeniDugum(3);
    root->left->left = yeniDugum(4);
    root->left->right = yeniDugum(5);

    printf("Preorder: ");
    preorder(root);
    printf("\n****-****-****-****\n");
    printf("\nInorder: ");
    inorder(root);
    printf("\n****-****-****-****\n");
    printf("\nPostorder: ");
    postorder(root);

    printf("\n");

    return 0;
}

// Yeni dugum olusturma
Node* yeniDugum(int veri) {
    Node* yeni = (Node*)malloc(sizeof(Node));
    yeni->data = veri;
    yeni->left = NULL;
    yeni->right = NULL;
    return yeni;
}

// Preorder: Root → Left → Right
void preorder(Node* kok) {
    if (kok == NULL) return;
    printf("%d ", kok->data);
    preorder(kok->left);
    preorder(kok->right);
}

// Inorder: Left → Root → Right
void inorder(Node* kok) {
    if (kok == NULL) return;
    inorder(kok->left);
    printf("%d ", kok->data);
    inorder(kok->right);
}

// Postorder: Left → Right → Root
void postorder(Node* kok) {
    if (kok == NULL) return;
    postorder(kok->left);
    postorder(kok->right);
    printf("%d ", kok->data);
}