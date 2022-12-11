// complie with: gcc primeNumbers-SpeedTest.c -lm
// Execute time with 10000000:
// MacBookAir M2 2022 - 1.273690 seconds
// AMD Ryzen 7 3800XT 3.89GHz Desktop - 4.755103 seconds
// iMac 3Ghz Core i5 2019 - 5.214085 seconds
// Intel Core i7-4700MQ 2.4HGz Laptop - 6.399253 seconds

#include <math.h>
#include <stdio.h>
#include <time.h>
int main(){
    int n,i,j,isPrime;
    clock_t begin = clock();
    n=10000000;
    printf("Prime Numbers are: \n");
    printf("%d ",2);    // All prime numbers are odd except two
    for(i=3; i<=n; i+=2)
    {
        isPrime = 1; // boolean. By default a number is prime
        for(j=3; j<= sqrt(i); j+=2)
        {
            if(i%j==0)
            {
                isPrime=0;  // isPrime=False
                break;
            }
        }
        if(isPrime)
            printf("%d " ,i);
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nElapsed: %f seconds\n", time_spent);
    return 0;
}