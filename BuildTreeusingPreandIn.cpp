struct node* buildTree(char in[], char pre[], int iStart, int iEnd){
	static int preIndex = 0;
	struct node* Tnode = newNode(pre[preIndex++]);
	int in_dex = search(in, iStart, iEnd, Tnode->data);
	if(iStart == iEnd)
		return Tnode;
	Tnode->left = buildTree(in,pre,iStart,in_dex-1);
	Tnode->right = buildTree(in,pre,in_dex+1,iEnd);
	return Tnode;
}