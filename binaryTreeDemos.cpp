
//Efficient Method to find if the Binary tree given is BST or not
bool isBstUtil(struct node* root, int min, int max){
	if(root==null){
		return 1;
	}
	if(root->data<min || root->data>max){
		return 0;
	}
	return isBstUtil(root->left, min, root->data-1) && isBstUtil(root->right,root->data + 1, max);
}
//Trickier and Efficient method of finding the same from Binary Tree.
bool is BstUtil(struct node* root){
	static struct node* prev = NULL;
	if(root){
		if(!(isBstUtil(root->left)))
			return false;;
		if(prev!=NULL && prev->data>root->data){
			return false;
		}
		prev = root;
		isBstUtil(root->right);
	}
	return true;
}
//Commmon Ancestor in Binary Tree
//n1 and n2 are the key values
struct node *lca(struct node* root, int n1, int n2){
	while(root!=NULL){
		if(n1>root->data && n2>root->data)
			root = root->right;
		else if(n1<root->data && n2<root->data)
			root = root->left;
		else
			break;
	}
	return root;
}

//Printing the given Binary Search Tree in ascending order
void printbinarysorted(int arr[], int start, int end){
	while(start<end){
		printbinarysorted(arr, start*2 + 1, end);
		cout<<arr[start];
		printbinarysorted(arr, start*2 + 2, end);
	}
}
void print(struct node* root, int k1, int k2){
	if(root==NULL)
		return;
	if(root->data>=k1)
		print(root->left, k1, k2);
	if(root->data>=k1 && root->data<=k2){
		cout<<root->Data;
	}
	if(root->data<=k2){
		print(root->right, k1, k2);
	}
}