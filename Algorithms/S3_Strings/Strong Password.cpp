#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int num=0,a1=0,a2=0,a3=0,a4=0;
    for(char i:password) {
        if(i>='a' && i<='z') a1++;
        else if(i>='A' && i<='Z') a2++;
        else if(i>='0' && i<='9') a3++;
        else a4++;
    }
    if(a1==0) num++;
    if(a2==0) num++;
    if(a3==0) num++;
    if(a4==0) num++;
    if(6-n>num) num=6-n;
    return num;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}