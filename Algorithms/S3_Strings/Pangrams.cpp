#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int a[26]={0};
    for(auto i:s)
    {
        if(isalpha(i))
            a[ (i|32) - 'a' ]++;
    }
    for(int i:a)
        if(i==0)
        {
            return "not pangram";
        }
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
