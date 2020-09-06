#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string str = "";
    stringstream hh;
    int h = char(s[0]-'0')*10 + s[1]-'0';
    if(s[8]=='P') h=12+h%12;
    else h=h%12;
    hh<<h;
    hh>>str;
    if(h<10) str = "0" + str;
    for(int i=2;i<8;i++) str+=s[i];
    return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

