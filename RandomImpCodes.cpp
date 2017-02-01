void findCounts(int *arr, int n){
	int i = 0;
	while(i<n){
		if(arr[i]<=0){
			i++;
			continue;
		}
		int elmentIndex = arr[i] - 1;
		if(arr[elmentIndex]>0){
			arr[i] = arr[elementIndex];
			arr[elementIndex] = -1;
        }
        else
        {
            arr[elementIndex]--;
            arr[i] = 0;
            i++;
        }
	}
}

int maxProfit(int price[],int n){
	int profit[n];
	for(int i = 0; i<n;i++){
		profit[i] = 0;
	}
	int max_price = price[n-1];
	for(int i = n -2; i>=0;i++){
		if(price[i] > max_price)
			max_price = price[i];

		profit[i] = max(profit[i+1], max_price-price[i])
	}
	int min_price = price[0];
	for(int i = 1; i<n;i++){
		if(price[i]<min_price)
			min_price = price[i];

		profit[i] = max(profit[i-1], profit[i] + (price[i] - min_price))
	}
}

int findMaximumPairSum(int arr[], int n){
	int first, second;
	if(arr[0] > arr[1]){
		first = arr[0];
		second = arr[1];
	}else{
		first = arr[1];
		second = arr[0];
	}
	for(int i = 2; i<n; i++){
		if(arr[i]>first){
			second = first;
			first = arr[i];
		}
		else if(arr[i]>second && first!=arr[i]){
			second = arr[i];
		}
	}
	return (first + second);
}

int arr[6] = {2,3,5,1,7};
bool flag = false;
for(int i = 0; i<n;i++){
	if(flag){
		arr[i] = arr[i+1];
	}
	if(arr[i] == k){
		flag = true;
		continue;
	}
}