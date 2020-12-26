#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int X[n], W[n];
    for(int i=0;i<n;i++)
    {
        cin >> X[i];
    }
    double W_sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> W[i];
        W_sum+=W[i];
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum += X[i]*W[i];
    }
    W_sum = W_sum*1.0;
    double weighted_mean = sum/W_sum;
    cout << fixed << setprecision(1) << weighted_mean;
    return 0;
}
