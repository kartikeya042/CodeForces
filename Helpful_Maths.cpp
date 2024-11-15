#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<char> ans;
    for(int i=0; i<s.length(); i++)
    {
        ans.push_back(s[i]);
    }
    for (int i = 0; i < ans.size(); i += 2)
    {
        for (int j = 0; j < ans.size(); j += 2)
        {
            if (ans[i] < ans[j])
            {
                swap(ans[i],ans[j]);
            }
        }
    }
    for(auto i: ans)
    {
        cout<<i;
    }
    cout<<endl;
    return 0;
}