import java.lang.System;
import java.util.*;
/* IMPORTANT: Multiple classes and nested static classes are supported */

/*
 * uncomment this if you want to read input.
import java.io.BufferedReader;
import java.io.InputStreamReader;
*/

class TestClass {


   static boolean prime[] = new boolean[1000001];
	void sieveOfEratosthenes(int n)
	{
		for(int i=0;i<n;i++)
			prime[i] = true;
		
		for(int p = 2; p*p <=n; p++)
		{
			// If prime[p] is not changed, then it is a prime
			if(prime[p] == true)
			{
				// Update all multiples of p
				for(int i = p*2; i <= n; i += p)
					prime[i] = false;
			}
		}
	}
    boolean isPrime(long n) {
	    if(n < 2) return false;
	    if(n == 2 || n == 3) return true;
	    if(n%2 == 0 || n%3 == 0) return false;
	    long sqrtN = (long)Math.sqrt(n)+1;
	    for(long i = 6L; i <= sqrtN; i += 6) {
	        if(n%(i-1) == 0 || n%(i+1) == 0) return false;
	    }
	    return true;
	}


    public static void main(String args[] ) throws Exception {
        /*
         * Read input from stdin and provide input before running

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        int N = Integer.parseInt(line);
        for (int i = 0; i < N; i++) {
            System.out.println("hello world");
        }
        */
        
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for(int i = 0; i< N; i++){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            TestClass t = new TestClass();
            int count = 0;
            int res1 = 0;
            int res2 = 0;
            int result = 0;
            t.sieveOfEratosthenes(b);
            if(t.isPrime(a)){
                count = 1;
            }
            if(count>=c){
                result = a;
            }else{
                for(int k = a + 1; k <= b; k++){
                    if(prime[k] == true){
                       count = count + 1;
                       if(count >= c){
                            result = k;
                            break;
                       }
                    }
                }
                
            }
            if(result==0){
            System.out.println(-1);    
            }else
                System.out.println(result);
            
        }
        
        
    }
}
