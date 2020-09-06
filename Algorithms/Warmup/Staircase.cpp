#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++) cout<<" ";
        while(j<=n)
        {
            cout<<"#";
            j++;
        }
        cout<<"\n";
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

