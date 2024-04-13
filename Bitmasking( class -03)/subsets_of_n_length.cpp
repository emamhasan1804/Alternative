#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
/* 
When I wrote this code ,
only Allah and I knew what I did.
   
Now... only Allah knows
*/

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    for(int i=0;i<(1<<n);i++) {         //(1<<n = pow(2,n));
        for(int j=0;j<n;j++) {
            if(((i >> j) & 1) ==1) cout<<v[j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    return 0;
}

/*

input: 
3
4 6 5
  */
