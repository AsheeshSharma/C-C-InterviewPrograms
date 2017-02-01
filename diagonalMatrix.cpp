//Print Row Diagonals
//Print the column diagonals
void diagonalOrder(int matrix[][COL]){
	for(k = 0; k < R; k++){
		cout<<matrix[k][0];
		int i = k - 1;
		int j = 1;
		while(isValid(i,j)){	//Checks the range of the parameters
			cout<<matrix[i][j];
			i--;
			j++;
		}
		cout<<"\n";
	}
	for(k = 1; k < C; k ++){
		cout<<matrix[R-1][k];
		int i = R-2;
		int j = k + 1;
		while(isValid(i,j)){
			cout<<matrix[i][j];
			i--;
			j++;
		}
		cout<<"\n";
	}
}