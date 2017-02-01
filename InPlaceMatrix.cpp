//Shows a simple program that coverts matrix to transpose inplace.
//As we found that the new location is determined by the n = ol%(size) where size os determined by the r*c - 1
void MatrixInplaceTranspose(int *A, int r, int c){
	int size  = r*c - 1;
	int t;
	int next;
	int cyclebegin;
	int i;
	bitset<HASH_SIZE> b;
	b.reset();
	b[0] = b[size] = 1;
	i = 1;
	while(i<size){
		cyclebegin = i;
		t = A[i];
		do{
			next = (i*r)%size;
			swap(A[next],t);
			i = next;
			b[i] = 1;

		}while(i!=cyclebegin)

		for(i;i<size && b[i];i++){

		}
		cout<<endl;
	}
}