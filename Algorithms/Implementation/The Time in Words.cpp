#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
    string times[] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","quarter","sixteen", "seventeen", "eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine","half"};
    
    if(m==0) return times[h-1]+" o' clock";
    string ret_val = " past ";
    if(m>30) 
    {
        ret_val = " to ";
        m=60-m;
        h+=1;
    }
    if(m==1) ret_val = " minute" + ret_val;
    else if(m!=30 && m!=15) ret_val = " minutes" + ret_val;

    return times[m-1]+ret_val+times[h-1];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}

