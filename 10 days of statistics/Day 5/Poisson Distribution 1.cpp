#include <bits/stdc++.h>
using namespace std;
int factorial(int n) {
    if (n == 1 || n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}


double poisson(double k , double p)
{
    return ((pow(p,k)*pow(2.71828,p * -1))/factorial(k));
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double k,p;
    cin >> p >> k;
    cout << fixed << setprecision(3) << poisson(k, p) << endl;
    return 0;
}
