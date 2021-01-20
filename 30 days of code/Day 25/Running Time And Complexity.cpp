#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin >> n;
        int flag = 0;
        if(n==1){
            cout << "Not prime\n";
            flag = 1;
        }
        for(int i=2; i<=sqrt(n);i++)
        {
            if(n%i==0){
                cout << "Not prime\n";
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout << "Prime\n";
        }
    } 
    return 0;
}
