#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b;
    while(t--)
    {
        cin>>a>>b;
        int sum = a + (b*2);

        if((a==0 && b%2 != 0) || (b==0 && a%2 != 0))
        cout<<"NO"<<endl;
        
        else if(sum%2 == 0)
        cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
    return 0;
}