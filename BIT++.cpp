#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int x = 0;
    while(n--)
    {
        cin>>s;
        if(s == "X++" || s=="++X")
        x+=1;
        else if(s == "X--" || s == "--X")
        x-=1;
    }
    cout<<x<<endl;
    return 0;
}