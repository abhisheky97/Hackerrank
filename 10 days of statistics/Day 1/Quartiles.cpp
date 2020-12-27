#include <bits/stdc++.h>
using namespace std;
double median(int l, int r, int A[])
{
    double med;
    int length = r-l+1;
    if(length%2==0){
        med = (A[l+(length/2)]+A[(l+(length/2)-1)])/2.0;
    }
    else {
        med = A[l+(length/2)];
    }
    return med;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
    }
    sort(array,array+n);
    double Q1, Q2, Q3;
    if(n%2==0)
    {
        Q1= median(0,(n/2)-1,array);
        Q2= median(0,n-1,array);
        Q3= median(n/2,n-1,array);
    }
    else {
        Q1= median(0,(n/2)-1,array);
        Q2= median(0,n-1,array);
        Q3= median((n/2)+1,n-1,array);
    }
    cout << Q1 << "\n" << Q2 << "\n" << Q3 ;
    return 0;
}
