#include <iostream>
using namespace std;

int NFindUtil(int arr[], int n){
	int f = 0;
	int l = n-1;
	while(f<=l){
		int m = f + (l-f)/2;
		if(arr[m]<arr[m-1] && arr[m]<arr[m+1]){
			return m;
		}
		if(arr[m-1]<arr[m]){
			l = m - 1;
		}
		else{
			f = m + 1;
		}
	}
	return 0;
}

int main() {
	//code
	int t;
	cin>>t;
	for(int i = 0; i <t;i++){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i <n; i++){
			cin>>arr[i];
		}
		cout<<NFindUtil(arr,n)<<"\n";
	}
	return 0;
}