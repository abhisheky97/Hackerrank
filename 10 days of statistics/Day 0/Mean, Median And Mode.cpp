#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    int array[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> array[i];
        sum+=array[i];
    } 
    sort(array,array+n);
    double mean = sum/(n*1.0);
    cout << mean << "\n";
    double median;
    if(n%2==0)
    {
        median=(array[n/2]+array[(n/2)-1])/2.0;
    }
    else {
        int mid = ceil(n/2.0);
        median=(array[mid])/2.0;
    }
    cout << median << "\n";
    int max = array[n-1];
    int count[max+1]={0};
    for (int i = 0; i < n; i++) 
        count[array[i]]++; 
    int mode = 0; 
    int k = count[0]; 
    for (int i = 1; i < max+1; i++) { 
        if (count[i] > k) { 
            k = count[i]; 
            mode = i; 
        } 
    } 
  
    cout << mode;  
    return 0;
}
