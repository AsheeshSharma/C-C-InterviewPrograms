#include <iostream>
using namespace std;
#define INT_MAX 2147483647;
int getmax(int arr[], int n){
	int max_diff = 0;
	for(int i = 0; i <n; i ++){
		if(arr[i]>0 && arr[i] - i > 0){
			if((arr[i] - i) >= max_diff)
				max_diff = arr[i] - i;
		}
	}
	return max_diff;
}
int getmin(int arr[], int n){
	int min_diff = INT_MAX;
	for(int i = 0; i <n; i ++){
		if((arr[i] - i) <= min_diff)
			min_diff = arr[i] - i;
	}
	return min_diff;
}
int main(){
	int arr[] = {-1, -2, -3, 4, 10};
   	int n = sizeof(arr)/sizeof(arr[0]);
   	cout << getmax(arr,n) - getmin(arr,n);
   	return 0;
}