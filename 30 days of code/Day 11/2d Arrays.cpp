#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<vector<int>> arr(6, vector<int>(6));
    for(int arr_i = 0; arr_i < 6; arr_i++)
    {
       for(int arr_j = 0; arr_j < 6; arr_j++)
       {
          cin >> arr[arr_i][arr_j];
       }
    }
    int sum, max = -100;
    for (int x = 1; x < 5; ++x)
    {
        for (int y = 1; y < 5; ++y)
        {
            sum = arr[x-1][y-1] + arr[x-1][y] + arr[x-1][y+1]
                                + arr[x][y] +
                  arr[x+1][y-1] + arr[x+1][y] + arr[x+1][y+1];
            if (sum > max) max = sum;
        }
    }
    cout << max << endl;
    return 0;
}
