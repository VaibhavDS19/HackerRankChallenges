#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long x=0, lens = s.size();
    vector<int> nums = {0};
    for(char i:s)
    {
        if(i=='a') x++;
        nums.push_back(x);
    }
    return x*(n/lens) + nums[n%lens];
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

