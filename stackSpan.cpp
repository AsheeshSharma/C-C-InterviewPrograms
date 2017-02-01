void calculateSpan(int price[],int n,int S[]){
	stack<int> s;
	s.push(0);
	S[0] = 1;
	for(int i =0;i<n;i++){
		while(!s.empty() && price[s.top()]<=price[i]){
			s.pop();
		}
		S[i] =s.empty()?i+1;i-st.top();
		s.push(i); 
	}
	
}


void towerOfHanoi(int n, char from, char to, char aux){
	if(n==1){
		print
	}
	towerOfHanoi(n-1,from, aux,to);
	towerOfHanoi(n-1,aux,to,from);
}


so tower of hanoi logic in iterative goes like this
if %3 == 1
	move between source and des
if %3 == 2
	move between source and aux
if %3 == 0
	move between aux and des
	