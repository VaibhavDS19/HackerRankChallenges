#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b) {
    int a[26]={0}, u=0, i=0;
    string s[] = { "YES","NO" };
    char cur;
    while(i<b.size())
    {
        cur=b[i];
        u=0;
        while(i<b.size() && b[i]==cur)
        {
            i++;
            u++;
        }
        if(u==1) break;
    }
    if(i==b.size() && u>1) return s[0];
    u=0;
    for(auto x:b)
    {
        if(x!='_') a[x-'A']++;
        else u++;
    }
    for(int i:a) if(i==1) return s[1];
    return s[u==0];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
