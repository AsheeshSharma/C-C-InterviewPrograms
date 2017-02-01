//A program to count all pairs such that x^y > y^x for pair (x,y) in two arrays A and B
int countPairsUtil(int x, int n, int Y[], int NoOfy[]){
	if(x==0) return 0;
	if(x==1) return NoOfy[0];
	int idx = upper_bound(y, Y + n, x);
	int tota = (Y + n) - idx;
	tota = tota + arr[0] + arr[1];
	if(x==2) tota = tota - (NoOfy[3] + NoOfy[4]);
	if(x==3) tota = tota - (NoOfy[3]);
	return tota;
}

int countPairs(int X[], int Y[], int m, int n)
{
	int NoOfY[5];
	for(int i = 0; i < n; i++){
		if(Y[i] < 5){
			NoOfY[Y[i]]++;
		}
	}
	sort(Y, Y + n);
	int total_count = 0;
	for(int i = 0; i <m; i++){
		total_count = total_count + countPairsUtil(X[i], n, Y, NoOfY);
	}
}