#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct multikey {
	int val;
	char name[20];
};

struct node {
	struct multikey val;
	int height;
	struct node *left;
	struct node *right;
};

int comp(struct multikey a, struct multikey b) {
	
	if (a.val != b.val) {
		if (a.val < b.val) return -1;
		else return 1;
	} else {
		return strcmp(a.name, b.name);
	}
}


int max(int a, int b) {
	return (a < b) ? b : a;
}

int getHeight(struct node *localRoot) {
	if (localRoot == NULL) return 0;
	return localRoot->height;
}

int getBalanceFactor(struct node *localRoot) {
	if (localRoot == NULL) return 0;
	return getHeight(localRoot->left) - getHeight(localRoot->right);
}

struct node *newNode(struct multikey val) {
	struct node *nodebaru = (struct node *)malloc(sizeof(struct node));
	
	nodebaru->val = val;
	nodebaru->left = NULL;
	nodebaru->right = NULL;
	nodebaru->height = 1;
	return nodebaru;
}

struct node *rightRotate(struct node *y) {
	struct node *x = y->left;
	struct node *B = x->right;
	
	// rotate
	x->right = y;
	y->left = B;
	
	y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
	x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
	return x;
}

struct node *leftRotate(struct node *x) {
	struct node *y = x->right;
	struct node *B = y->left;
	
	// rotate
	y->left = x;
	x->right = B;
	
	
	x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
	y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
	return y;
}


struct node *rebalance(struct node *localRoot) {
	localRoot->height = max(getHeight(localRoot->left),
								getHeight(localRoot->right)) + 1;
	int currentBalance = getBalanceFactor(localRoot);
	
	if (currentBalance > 1 && getBalanceFactor(localRoot->left) >= 0) {
		return rightRotate(localRoot);
	}
	if (currentBalance > 1 && getBalanceFactor(localRoot->left) < 0) {
		localRoot->left = leftRotate(localRoot->left);
		return rightRotate(localRoot);
	}
	if (currentBalance < -1 && getBalanceFactor(localRoot->right) <= 0) {
		return leftRotate(localRoot);
	}
	if (currentBalance < -1 && getBalanceFactor(localRoot->right) > 0) {
		localRoot->right = rightRotate(localRoot->right);
		return leftRotate(localRoot);
	}
	return localRoot;
}

struct node *insertValue(struct node *localRoot, struct multikey value) {
	if (localRoot == NULL) return newNode(value);
	if (comp(localRoot->val, value) > 0) {
		localRoot->left = insertValue(localRoot->left, value);
	} else if (comp(localRoot->val, value) < 0) {
		localRoot->right = insertValue(localRoot->right, value);
	} else {
		// do nothing
		return localRoot;
	}
	return rebalance(localRoot);
}

struct node *successor(struct node *localRoot) {
	while(localRoot && localRoot->left != NULL) {
		localRoot = localRoot->left;
	}
	return localRoot;
}

struct node *deleteValue(struct node *localRoot, struct multikey value) {
	
	if (localRoot == NULL) return NULL;
	if ( comp(localRoot->val, value) < 0) {
		localRoot->right = deleteValue(localRoot->right, value);
	} else if (comp(localRoot->val, value) > 0) {
		localRoot->left = deleteValue(localRoot->left, value);
	} else {
		// akhirnya ketemuuuuu
		
		if (localRoot->left == NULL && localRoot->right == NULL) {
			free(localRoot);
			localRoot = NULL;
		} else if (localRoot->left == NULL && localRoot->right != NULL) {
			struct node *tobedeleted = localRoot->right;
			*localRoot = *(localRoot->right); // kopi semua anak kanan
			free(tobedeleted);
		} else if (localRoot->left != NULL && localRoot->right == NULL) {
			struct node *tobedeleted = localRoot->left;
			*localRoot = *(localRoot->left); // kopi semua anak kiri
			free(tobedeleted);
		} else {
			struct node *suksesor = successor(localRoot->right);
			localRoot->val = suksesor->val;
			localRoot->right = deleteValue(localRoot->right, localRoot->val);
		}
	}
	
	if (localRoot == NULL) return NULL;
	return rebalance(localRoot);
	
	
}

struct node *freeAll(struct node *localRoot) {
	if (localRoot == NULL) return NULL;
	localRoot->left = freeAll(localRoot->left);
	localRoot->right = freeAll(localRoot->right);
	free(localRoot);
	return NULL;
}

void inorder(struct node *localRoot) {
	if (localRoot == NULL) return;
	inorder(localRoot->left);
	printf(" %d ", localRoot->val.val);
	inorder(localRoot->right);
}

int main() {
	
	struct node *root = NULL;
	
	struct multikey val;
	val.val = 10;
	strcpy(val.name, "haha");
	root = insertValue(root, val);
	val.val = 13;
	strcpy(val.name, "haha");
	root = insertValue(root, val);
	val.val = 9;
	strcpy(val.name, "haha");
	root = insertValue(root, val);
	
	inorder(root);
	puts("");
	
	
	return 0;
}
