#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        for(int i=0; i<5; i++)
        {
            (*min_element(v.begin(),v.end()))++;
        }

        cout<<v[0]*v[1]*v[2]<<endl;
    }
    return 0;
}