#include <stdio.h>
 int main() 
 {
     int i = 10;
     int k = 20;
     printf(" value of i=%d k=%d before swapping", i, k);
     i = i ^ k;
     k = i ^ k;
     i = i ^ k;
    printf("value of i=%d k=%d after swapping", i, k);
     return 0;
}
