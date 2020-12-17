#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int A[n],i=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    printf("%d",sum);
    return 0;
}