#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;
template <typename T>
using oset = tree<T, null_type, less_equal<T>,rb_tree_tag, tree_order_statistics_node_update>;
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ok cout<<"ok"<<endl<<flush;
#define endl '\n'
#define INF 1e15
const ll M = 998244353;
const ll N = 2e5+1;
const ll LOG = 11;
void debug(vector<ll> v){for(auto it:v){cout<<it<<"\t";}cout<<endl;}
ll n,m;
int32_t main()
{
    fast
    ll i,j=1,k,p,q,tc=1,cs=0;
    //cin>>tc;
    while(tc--)
    {
        cin>>n;
        vector<ll>mp(31),v(n),cng(n);
        for(ll &it:v)
        {
            cin>>it;
            if(it<0){continue;}
            mp[it]++;
        }

        ll ans=0;
        for(i=0;i<31;i++)
        {
            if(!mp[i]){continue;}

            ll sum=0,mx=0;
            for(j=0;j<n;j++)
            {
                if(v[j]>i){cng[j]=-INF;}
                else{cng[j]=v[j];}
                sum+=cng[j];
                if(sum<0){sum=0;}
                mx=max(sum,mx);
            }
            ans=max(ans,mx-i);
        }
        cout<<ans<<endl;
    }
}

//https://codeforces.com/problemset/problem/1359/D 
