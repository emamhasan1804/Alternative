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
    stack<int> st;
    for(int i=0;i<n;i++) {
        if(((n >> i) & 1) ==1) st.push(1);
        else st.push(0);
    }
    bool flag = false;
    for(int i=0;i<n;i++) {
        if(st.top()==1 && flag ==false) {
            flag = true;
        }
        if(flag) cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}
