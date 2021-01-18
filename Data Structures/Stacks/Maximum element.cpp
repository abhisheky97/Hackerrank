#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    stack <int> s;
    stack <int> max;
    while(t--){
        int q;
        cin >> q;
        switch(q){
            case 1:
            {
                int x;
                cin >> x;
                s.push(x);
                if(s.size()==1){ max.push(x);}
                else if(x>max.top()){ max.push(x);}
                else {max.push(max.top());}
                break;
            }
            case 2:
            {
                s.pop();
                max.pop();
                break;
            }
            case 3:
            {
                cout << max.top() << "\n";
                break;
            }
        }
    }
    return 0;
}
