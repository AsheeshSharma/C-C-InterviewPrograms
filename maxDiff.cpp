int maxDiff(int arr[], int n){
	int maxDiff;
	int i, j;
	int *lmin = (int*)malloc(sizeof(int));
	int *rmax = (int*)malloc(sizeof(int));
	lmin[0] = arr[0];
	for(i =1;i<n;i++){
		lmin[i] = min(arr[i],arr[i-1]);
	}
	rmax[0]=arr[n-1];
	for(j=n-2;j>=0;j--){
		rmax[j] = max(arr[j],arr[j+1]);
	}
	i = 0; 
	j = 0;
	while(i<n && j<n){
		if(lmin[i]<=rmax[j]){
			maxDiff = max(maxDiff,j-i);
			j = j + 1;
		}
		else
			i = i + 1;
	}

}