int kthSmallest(int arr[], int l, int r, int k){
	if(k>0 && k<=(r-l+1)){
		int pos = partition(arr,l,r);
		if(k-1==pos-l){
			return pos-1;
		}else if(k-1<pos-l){
			return kthSmallest(arr,l,pos-1,k);
		}else{
			return kthSmallest(arr,pos+1,r,k);
		}
	}
	return INT_MAX;
}

int partition(int arr[], int l, int r){
	int pivot = arr[r];
	int i=0;
	for(int j = 1; j < n ; j++){
		if(arr[j]<=x){
			swap(&arr[j],&arr[i]);
			i++;
		}
	}
	swap(&arr[i],&arr[r]);
	return i;
}

int main()
{
    int arr[] = {12, 3, 5, 7, 4, 19, 26};
    int n = sizeof(arr)/sizeof(arr[0]), k = 3;
    cout << "<a href="#">K'th smallest</a> element is " << kthSmallest(arr, 0, n-1, k);
    return 0;
}