//Function to make every node as sum of its greater elementss
void modifyBSTUtil(struct node *root, int *sum){
	if(root == NULL){
		return;
	}
	modifyBSTUtil(root->right, sum);
	root->data = root->data + sum;
	modifyBSTUtil(root->left,sum);
}
//Remove all the BST keys out of a given range.
node* removeAllBSTInRange(node *root, int min, int max){
	if(root == null){
		return;
	}
	struct *rootLeft = removeAllBSTInRange(root->left);
	struct *rootRight = removeAllBSTInRange(root->right);
	if(root->key < min){
		struct right = root->right;
		delete root;
		return right;
	}
	if(root->key > max){
		struct left = root->left;
		delete root;
		return left;
	}
	return root;

}
//A useful program to check if each of Binary Search tree has only one leaf node or not
int hasOnlyOneChild(int pre[], int size){
	int max, min;
	if(pre[size-1]>pre[size-2]){
		min = pre[size-2];
		max = pre[size-1];
	}else{
		min = pre[size-1];
		max = pre[size-2];
	}
	for(int i = size - 3; i>=0;i--){
		if(arr[i]<min){
			min = arr[i];
		}else if(arr[i]>max){
			max = arr[i];
		}else{
			return false;
		}
	}
}

//Function to check if a triplet exists of given sum
-Method is to convert it into a DLL
-Searching for every key if two exits with the given sum.
void convertBstToDll()
bool isPresent(node* head, node* tail, int sum){
	while(head!=tail){
		int curr = head->key + tail->key;
		if(sum == curr)
				return true;
		else if(curr<sum){
			head = head->right;
		}else{
			tail = tail->left;
		}
	}
}
bool isTripletPresent(node *root){
	if(root == NULL){
		return false;
	}
	node *head = NULL;
	node *tail = NULL;
	convertBstToDll(root,&head,&tail);
	while(head->right!=NULL && head->key<0){
		if(isPresent(head->right, tail, -1*head->key)){
			return true;
		}else{
			head = head->right;
		}
	}
	return false;
}
//Ceil and Floor of a BST
int Ceil(struct node* root, int key){
	if(root==NULL){
		return -1;
	}
	if(root->data == key){
		return root->data;
	}
	if(root->adta<key){
		return Ceil(root->right, key);
	}
	int ceil = Ceil(root->left,key);
	return ceil>=key?ceil:root->data;
}