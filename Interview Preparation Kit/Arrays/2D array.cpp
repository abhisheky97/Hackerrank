#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int n = arr.size(), s = arr[0].size();
    
    int max = numeric_limits<int>::min();
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < s - 2; j++) {
            int sum = 0;
            
            // read current spot and two to the right
            // and the three that are two rows below
            for (int x = j; x <= j + 2; x++) {
                sum += (arr[i][x] + arr[i+2][x]);
            }
            
            // read that element in the middle
            sum += arr[i+1][j+1];
            // more efficient than storing all sums in vector
            if (sum > max) max = sum;
        }
    }
    
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
