#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N%2==0)
    {
        if(6<=N && N<=20)
        {
            cout << "Weird";
        }
        else
        {
            cout << "Not Weird";
        }
    }
    else
    {
        cout << "Weird";
    }
    return 0;
}
