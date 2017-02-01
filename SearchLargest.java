public class SearchLargestBST{
	private MaxMin largest(Node root){
		MaxMin leftLargest = largest(root.left);
		MaxMin rightLargest = largest(root.right);
		MaxMin m = new MaxMin();
		if(leftLargest.isBST==false || rightLargest.isBST == false || leftLargest.max > root.data || root.data > rightLargest.min){
			m.isBST = false;
			m.size = Math.max(leftLargest.size, rightLargest.size);
			return m;
		}
		m.isBST = true;
		m.size = leftLargest.size + rightLargest.size + 1;
		m.min = root.left==null?leftLargest.min:root.data;
		m.max = root.left==null?rightLargest.max:root.data;
		return m;
	}
	public static void main(String args[]){
		ConstructTreeFromInOrderPreOrder ctf = new ConstructTreeFromInOrderPreOrder();
        //this is just to create a binary tree.
        int inorder[]  = {-7,-6,-5,-4,-3,-2,1,2,3,16,6,10,11,12,14};
        int preorder[] = {3,-2,-3,-4,-5,-6,-7,1,2,16,10,6,12,11,14};
        Node root = ctf.createTree(inorder, preorder);
	}
	class MaxMin{
		int min;
		int max;
		boolean isBST;
		int size;
		MaxMin(){
			min = INT_MIN;
			max = INT_MAX;
			isBST = true;
			size = 0;
		}
	}	
}



