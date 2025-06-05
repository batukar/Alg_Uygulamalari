#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
typedef struct Node Node;

// fonksiyon prototipleri
Node* yeniDugum(int veri);
void inorder(Node* kok);
void preorder(Node* kok);
void postorder(Node* kok);

int main(){
    Node* root = yeniDugum(10);
    root->left = yeniDugum(20);
    root->left->left = yeniDugum(40);
    root->left->left->left = yeniDugum(50);
    root->left->left->right = yeniDugum(25);
    root->left->left->right->left = yeniDugum(60);
    root->left->right = yeniDugum(30);
    root->left->right->left = yeniDugum(90);
    root->left->right->right = yeniDugum(72);
    root->left->right->right->left = yeniDugum(65);
    root->right = yeniDugum(77);
    root->right->left = yeniDugum(14);
    root->right->left->right = yeniDugum(55);
    root->right->right = yeniDugum(82);

    printf("inorder: ");
    inorder(root);
    printf("\n****-****-****-****\n");
    printf("preorder: ");
    preorder(root);
    printf("\n****-****-****-****\n");
    printf("postorder: ");
    postorder(root);
}

Node* yeniDugum(int veri){
    Node *yeni = (Node*)malloc(sizeof(Node));
    yeni->data = veri;
    yeni->left = NULL;
    yeni->right = NULL;
    return yeni;
}

void inorder(Node* kok){
    // Left - Root - Right
    if(kok == NULL) return;

    inorder(kok->left);
    printf("%d ", kok->data);
    inorder(kok->right);
}

void preorder(Node* kok){
    // Root - Left - Right
    if(kok == NULL) return;

    printf("%d ", kok->data);
    preorder(kok->left);
    preorder(kok->right);
}

void postorder(Node* kok){
    // Left - Right - Root
    if(kok == NULL) return;

    postorder(kok->left);
    postorder(kok->right);
    printf("%d ", kok->data);
}