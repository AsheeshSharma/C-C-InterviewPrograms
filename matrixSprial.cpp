//Print matrix in sorial form
#define R 3
#define C 6
void spiralPrint(int m, int n, int a[R][C]){
	int i, k = 0, l = 0;
	while(l<m && k <n){
		for(i = k ; i < n; i++){
			cout<<arr[l][i];
		}
		l++;
		for(i=l; i<m;i++){
			cout<<arr[i][n-1];
		}
		n--;
		if(l<m){
			for(i = n-1; i>=k;i--){
				cout<<arr[m-1][i];
			}
			m--:
		}
		if(k<n){
			for(int i = m-1; i >=l;i--){
				cout<<arr[i][m-1];
			}
			k++;
		}
	}
}