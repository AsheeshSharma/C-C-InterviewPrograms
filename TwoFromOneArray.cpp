//You are given an array A containing 2*N+2 positive numbers, out of which N numbers are repeated exactly twice and the other two numbers occur exactly once and are distinct. You need to find the other two numbers and print them in ascending order.

void get2NonRepeatingNos(int arr[], int n, int *x, int *y){
	int xor = arr[0];
	int set_bit_nu;
	for(int i = 1; i < n; i++){
		xor = xor ^ arr[i];
	}
	set_bit_nu = xor & ~(xor-1);
	for(int i = 0; i < n; i++){
		if(arr[i] & xor){
			*x = *x ^arr[i];
		}else{
			*y = *y ^ arr[i];
		}
	}
}