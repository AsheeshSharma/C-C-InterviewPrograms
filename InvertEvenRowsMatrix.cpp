//Inverting only even rows of a matrix
void invertEvenRows(int *A, int r, int c){
	for(int i = 1; i < r; i = i + 2){
		for(int j1 = 0; j2 = c - 1; j1<j1; j1++, j2--){
			swap(*(A + i*c + j1), *(A + i*c + j2));
		}
	}
}