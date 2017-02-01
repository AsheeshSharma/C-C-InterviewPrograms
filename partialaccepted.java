import java.lang.System;
import java.util.*;
/* IMPORTANT: Multiple classes and nested static classes are supported */

/*
 * uncomment this if you want to read input.
import java.io.BufferedReader;
import java.io.InputStreamReader;
*/

class TestClass {


    public static int PrimeCount( int start,int end)
    {
         int count=0;
        if(start<0)
        {
            if(end > 2)
            {
                count ++;
            }
            start=0;
        }
        if(end < 0)
        {
            end=0;
        }

      for(int i=start;i<=end;i++)
      {

         for(int j=2;j<i;j++)
         {

             if(i%j==0)
             { 
                 //count ++;
                 break;// innerloop;
             }
             else
             {
                 if(j+1==i)
                 {
                    // count ++;
                     System.out.println(i); //display the prime number
                 }
                 else
                 {
                     continue;

                 }
             }
         }
      }
        return count;//returns the count of prime numbers in the given range
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
                for(int k = a + 1; k <= b; k++){
                    if(t.isPrime(k)){
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
