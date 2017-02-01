#include <iostream>
using namespace std;
int myXOR(int x, int y)
{
   return (x | y) & (~x | ~y);
}

int countSetBits(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}
int main() {
	//code
	int t;
	cin>>t;
	for(int i =0;i<t;i++){
	    int a, b;
	    cin>>a>>b;
	    int c = myXOR(a,b);
	    cout<<countSetBits(c);
	}
	return 0;
}