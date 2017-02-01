/*Driver program to test printPowerSet*/
void printPowerSet(int* set, int n){
	int pow_set_size = pow(2,n);
	int counter = 0;
	for(counter = 0; counter < pow_set_size; counter ++){
		for(int j = 0; j<n;j++){
			if(counter & (1<<j))
				cout<<set[j];
		}
		cout<<"\n";
	}
}
int main()
{
	int set[] = {1,2,3};
	printPowerSet(set, 3);

	getchar();
	return 0;
}