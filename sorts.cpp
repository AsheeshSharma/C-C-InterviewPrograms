//Program to practise merge sort algortihm from scratch.
//Two major functions are required
//merge and mergesort

void mergesort(int arr[], int l, int r){
	if(l < r){
		int m = l + (r - l)/2;
		mergesort(arr, l, m );
		mergesort(arr, m + 1, r);
		merge(arr, l m ,r);
	}
}
void merge(int arr[], int l, int m, int r){
	int n1 = l - m + 1;
	int n2 = r - m;
	int ar1[n1], ar2[n2];
	for(int i = 0; i < n1; i++){
		ar1[i] = arr[l + i];
	}
	for(int j = 0; j < n2; j++){
		ar2[j] = arr[m + j + 1];
	}
	i = 0;
	j = 0;
	int k = 0;
	while( i < n1 && j < n2){
		 if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


//Quick sort to practise again.
//Concept is well remembered - Good thing.
//Use partitiion and wuick sort login.
int partition(int arr, int l, int r){
	int pivot = arr[r];
	int i = l - 1;
	for(int j = l; j < r; j++){
		if(arr[j] < arr[pivot]){
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[r]);
	return i + 1;
}
void quicksort(int arr[], int l, int r){
	if( l < r){
		int pi = partition(arr, l , r);
		quicksort(arr, l , pi -1);
		quicksort(arr, pi + 1, r);
	}
}
//Program to pratise the bucket sort algorithm
//Gives linear time sorting 
//Usually is applied for a given range of number within a defiend range
void bucketSort(vector<float> tc, int n){
	std::vector<float> v[n];
	for(int i = 0; i < n; i++){
		int bi = tc[i] * n;
		v[bi].push_back(tc[i]);
	}

	for(int i = 0; i <n; i ++){
		std::sort(v[i].begin(), v[i].end());
	}
	int inedx = 0;
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < v[i].size(); j ++){
			arr[index++] = v[i][j];
		}
	}
}