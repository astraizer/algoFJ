#include <stdio.h>
#include <stdlib.h>
#define null NULL

struct node{
	int val;
	int height;
	struct node *left;
	struct node *right;
};

struct node *newNode(int val){
	struct node *newNode = (struct node*) malloc(sizeof(struct node)); 
	newNode->val=val;
	newNode->height=1;
	newNode->left=null;
	newNode->right=null;
	return newNode;
}

int max(int a,int b){
	return (a>b)?a:b;
}

int getHeight(struct node *localRoot){
	if(localRoot==NULL) return 0;
	return localRoot->height;
}

int getBalanceFactor(struct node *localRoot){
	if(localRoot==NULL) return 0;
	return getHeight(localRoot->left)-getHeight(localRoot->right);
}

struct node *rightRotate(struct node *a){
	struct node *b=a->left;
	struct node *c=b->right;
	
	b->right=a;
	a->left=c;
	
	a->height=max(getHeight(a->left),getHeight(a->right))+1;
	b->height=max(getHeight(b->right),getHeight(b->left))+1;
	return b;
}

struct node *leftRotate(struct node *a){
	struct node *b=a->right;
	struct node *c=b->left;
	
	b->left=a;
	a->right=c;
	
	a->height=max(getHeight(a->left),getHeight(a->right))+1;
	b->height=max(getHeight(b->right),getHeight(b->left))+1;
	return b;
}

struct node *rebalance(struct node *localRoot){
	localRoot->height = max(getHeight(localRoot->left),
							getHeight(localRoot->right))+1;
	
	int currBalance = getBalanceFactor(localRoot);
	
	//left > right 
	if(currBalance>1){
		if(getBalanceFactor(localRoot->left)<0)
			localRoot->left = leftRotate(localRoot->left);
		return rightRotate(localRoot);
	}
	//right > left
	if(currBalance<-1){
		if(getBalanceFactor(localRoot->right)>0)
			localRoot->right = rightRotate(localRoot->right);
		return leftRotate(localRoot);
	}
	return localRoot;
}

struct node *insertValue(struct node *localRoot, int val){
	if(localRoot==null) return newNode(val);
	if(localRoot->val>val) 
		localRoot->left = insertValue(localRoot->left,val);
	else if(localRoot->val<val)
		localRoot->right = insertValue(localRoot->right,val);
	else
		return localRoot;
	return rebalance(localRoot);
}

struct node *successor(struct node *localRoot){
	while(localRoot!=null && localRoot->left !=null)
		localRoot=localRoot->left;
	return localRoot;
}

struct node *deleteNode(struct node *localRoot,int val){
	if(localRoot==NULL) return NULL;
	if(localRoot->val>val)
		localRoot->left=deleteNode(localRoot->left,val);
	else if(localRoot->val<val)
		localRoot->right= deleteNode(localRoot->right,val);
	else{
		if(localRoot->left==null && localRoot->left == null){
			free(localRoot);
			localRoot=null;
		}
		else if(localRoot->left == null && localRoot->right != null){
			struct node *delNode = localRoot->right;
			*localRoot = *(localRoot->right);
			free(delNode);
		}
		else if(localRoot->left != null && localRoot->right == null){
			struct node *delNode = localRoot->left;
			*localRoot = *(localRoot->left);
			free(delNode);
		}
		else{
			struct node *success = successor(localRoot->right);
			localRoot->val = success->val;
			localRoot->right = deleteNode(localRoot->right,localRoot->val);
		}
	}
	if(localRoot==null) return null;
	return rebalance(localRoot);
}

void inorder(struct node *localRoot){
	if(localRoot==NULL) return;
	inorder(localRoot->left);
	printf("%d ",localRoot->val);
	inorder(localRoot->right);
}

int main(){
	struct node *root = NULL;
	
	root = insertValue(root, 9);
	root = insertValue(root, 10);
	root = insertValue(root, 13);
	root = insertValue(root, 14);
	root = insertValue(root, 11);
	root = insertValue(root, 7);
	root = insertValue(root, 19);
	root = insertValue(root, 21);
	root = insertValue(root, 1);
	root = insertValue(root, 18);
	root = insertValue(root, 5);
	root = insertValue(root, 24);
	root = insertValue(root, 3);
	root = insertValue(root, 100);
	root = insertValue(root, 22);
	
	root = deleteNode(root,24);
	
	inorder(root);
}
