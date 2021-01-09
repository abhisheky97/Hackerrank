#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1000];
    int frequency[10]={0};
    int i;
    scanf("%s",&s);
    for (char *c = s; *c ; c++)
    {
        if (*c >= '0' && *c <= '9')
        {
            frequency[*c - '0']++;
        }
    }
    for (int i = 0; i < 10; i++)
        printf("%d ", frequency[i]);
    return 0;
}
