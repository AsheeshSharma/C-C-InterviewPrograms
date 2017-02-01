#include <iostream>
using namespace std;

long long pi(long long m) {
  long long result = 2;
  for (
    int fn2 = 1, fn1 = 2%m, fn = 3%m;
    fn1 != 1 || fn != 1;
    fn2 = fn1, fn1 = fn, fn = (fn1 + fn2)%m
  ) {
    result++;
  }
  return result;
}

long long calc_fib(long long n,long long m) {
    
    long long nm = pi(m);
    // cout<<nm<<"\n";
    n = n%nm;
    // cout<<"val of n"<<n<<"\n";
    long long fib[n+1];
    fib[0]=0;
    fib[1]=1;
    // n = n%nm;
    for(int i = 2; i<=n;i++){
        fib[i] = ((fib[i-1])%m + (fib[i-2])%m)%m;
    }
    // cout<<fib[n];
    return fib[n];
    
}

int main() {
    long long n = 0;
    long long m = 0;
    std::cin >> n;
    std::cin>>m;
    // calc_fib(n,m);
    std::cout<<calc_fib(n,m)<<'\n';
    return 0;
}
