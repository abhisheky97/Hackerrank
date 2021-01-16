#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    int numSwaps = 0;
    for(int i=0; i<n; i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                numSwaps++;
            }
        }
        if(numSwaps==0) break;
    }
    cout << "Array is sorted in " << numSwaps << " swaps.\n";
    cout << "First Element: " << a[0] << "\n";
    cout << "Last Element: " << a[n-1];
    return 0;
}
