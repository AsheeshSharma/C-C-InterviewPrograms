import java.lang.System;
import java.util.*;
/* IMPORTANT: Multiple classes and nested static classes are supported */

/*
 * uncomment this if you want to read input.
import java.io.BufferedReader;
import java.io.InputStreamReader;
*/

class TestClass {


    int sieveOfEratosthenes(int a, int b)
    {
        List<Integer> primes = new ArrayList<>();

        // loop through the numbers one by one
        for (int i = a; i <=b; i++) {
            boolean isPrimeNumber = true;

            // check to see if the number is prime
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    isPrimeNumber = false;
                    break; // exit the inner for loop
                }
            }

            // print the number if prime
            if (isPrimeNumber) {
                primes.add(i);
            }
        }
        return primes.size();
    }

    boolean isPrime(int n) {
        //check if n is a multiple of 2
        if(n==2) return true;
        if (n%2==0) return false;
        //if not, then just check the odds
        for(int i=3;i*i<=n;i+=2) {
            if(n%i==0)
                return false;
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
            if(t.isPrime(a)){
                count = 1;
            }
            if(count>=c){
                result = a;
            }else{
                for(int k = a + 1; k < b; k++){
                    res1 = t.sieveOfEratosthenes(a,k);
                    if(count + res1 >= c){
                        result = k;
                        break;
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
