public MyCustomComparatorClass implement Comparator<Job>{
	@override
	public int compare(Job ob1, Job ob2){
		if(ob1.end <= ob2.end){
			return -1;
		}else{
			return 1;
		}
	}
}

public int maximum(Job[] jobs){

	MyCustomComparatorClass mycustom = new MyCustomComparatorClass();
	Arrays.sort(jobs,mycustom);
	int T[] = new int[jobs.length];
	T[0] = jobs[0].profit;
	for(int i = 1; i < jobs.length; i++){
		for(int j = i-1; j >=0; j++){
			if(jobs[j].end <= jobs[i].start){
                T[i] = Math.max(T[i], jobs[i].profit + T[j]);
                break;
            }
		}
	}

	int max_val = INT_MIN;
	for(int a : T){
		if(a>max_val){
			max_val = a;

		}
	}
	return max_val;
}