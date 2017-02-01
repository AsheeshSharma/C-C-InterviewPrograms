//Search in a rotated sorted array in logN time.

int search(int arr[], int l, int h, int key){
	if(l<h) return -1;
	int mid = ( l + h )/2;
	if(arr[mid]<arr[l]){
		if(key>arr[l] && key<arr[mid]){
			return search(arr, l , mid-1, key);
		}
		return search(arr, mid + 1, h, key);
	}
	if(key>arr[mid + 1] && key<=arr[h]){
		return search(arr,mid+1,h,key);
	}
	return search(arr, l , mid-1, key);
}