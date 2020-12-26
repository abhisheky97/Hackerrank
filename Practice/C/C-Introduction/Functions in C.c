#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int largest=0;
    int A[4]={a,b,c,d};
    int i=0;
    for(i=0;i<4;i++)
    {
        if(largest<A[i])
        {
            largest=A[i];
        }
    }
    return largest;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
