#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
    string s, ss, l, r;
    long count=0;
    for(long i=p;i<=q;i++)
    {
        long sq = i*i;
        long val=0, size, j=0;
        s=to_string(sq);
        l="";
        r="";
        size=s.size()/2;
        while(j<size)
            l=l+s[j++];
        while(j<s.size()) r=r+s[j++];
        if(l=="") l="0";
        if( (stol(l)+stol(r))==i )
        {
            cout<<i<<" ";
            count++;
        }
    }
    if(count==0) cout<<"INVALID RANGE";
}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}