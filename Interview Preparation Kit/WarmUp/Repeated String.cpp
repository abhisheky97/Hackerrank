#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long count = 0;
    long length = s.length();
    for(int i=0 ; i<length; i++){
        if(s[i]=='a') count ++;
    }
    count = count * (n/length);
    int remaining = n%length;
    for(int i=0; i<remaining; i++){
        if(s[i]=='a') count++;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
