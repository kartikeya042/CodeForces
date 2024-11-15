#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int> m;
    for(auto it = s.begin(); it < s.end(); it++)
    {
        // if(m.find(*it) == m.end())
        // {
            m.insert({*it,1});
        // }
        // else
        // {
        //     m[*it]++;
        // }
    }
    // for(auto itr: m)
    // {
    //     cout<<itr.first<<" "<<itr.second<<"     ";
    // }
    if(m.size()%2 == 0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    cout<<"IGNORE HIM!"<<endl;
    return 0;
}