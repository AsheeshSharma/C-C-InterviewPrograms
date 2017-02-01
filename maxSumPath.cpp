#include <iostream>
using namespace std;

int printIntersection(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n)
	{
		if (arr1[i] < arr2[j])
		i++;
		else if (arr2[j] < arr1[i])
		j++;
		else /* if arr1[i] == arr2[j] */
		{
			return i;
		}
	}
	return -1;
}
int findCorrectSum(int index, int arr[], int arr2[], int m, int n){
	int partialSum = 0;
	int partialSum2 = 0;
	int completeSum = 0;
	for(int i = 0; i<index;i++){
		partialSum = partialSum + arr[i];
		partialSum2 = partialSum2 + arr2[i];
	}
	completeSum = completeSum + partialSum>partialSum2?partialSum:partialSum2;
	partialSum2 = 0;
	partialSum = 0;
	for(int i = index + 1; i<m;i++){
		partialSum = partialSum + arr[i];
	}
	
	for(int i = index + 1; i<n;i++){
		partialSum2 = partialSum2 + arr2[i];
	}
	
	int res_sum = partialSum>partialSum2?partialSum:partialSum2;
	completeSum = completeSum + res_sum + arr[index];
	return completeSum;
}
int maxSumPath(int arr[],int arr2[], int m, int n){
	int index_ = printIntersection(arr,arr2,m,n);
	if(index_>0){
		return findCorrectSum(index_, arr,arr2,m,n);
	}
}
int main(){
	int ar1[]  = {2, 3, 7, 10, 12};
    int ar2[] =  {1, 5, 7, 8};
    int m = sizeof(ar1)/sizeof(ar1[0]);
    int n = sizeof(ar2)/sizeof(ar2[0]);
    cout << "Maximum sum path is "
         << maxSumPath(ar1, ar2, m, n);
    return 0;	
}