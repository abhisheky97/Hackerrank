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
    int digit[n];
    for(int i=0;i<n;i++)
    {
        cin >> digit[i];
    }
    int frequency[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> frequency[i];
        sum += frequency[i];
    }
    int array[sum];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int index=0;
        while(index<frequency[i])
        {
            array[flag+index]= digit[i];
            index++;
        }
        flag+=index;
    }
    sort(array,array+sum);
    double Q1, Q3;
    if(n%2==0)
    {
        Q1= median(0,(sum/2)-1,array);
        Q3= median(sum/2,sum-1,array);
    }
    else {
        Q1= median(0,(sum/2)-1,array);
        Q3= median((sum/2)+1,sum-1,array);
    }
    double IQR = Q3-Q1;
    cout << fixed << setprecision(1) << IQR;
    return 0;
}
