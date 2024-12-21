#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        int size = s.length() - 2;
        // cout<<size<<endl;
        if(s.length() <= 10)
        cout<<s<<endl;
        else 
        cout << s[0] << size << s[size + 1] << endl;
    }
    return 0;
}
