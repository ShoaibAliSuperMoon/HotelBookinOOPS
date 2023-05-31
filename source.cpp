#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fo(i,n) for(ll i=0;i<n;i++)
#define fo1 for(ll i=1;i<=n;i++)
#define all(a) (a).begin(), (a).end()
#define allr(a) (a).begin(), (a).end(), greater<int>()
#define F first
#define S second
#define pb push_back
#define loop(it,a) for(auto it:a)
typedef pair<long long int ,long long int> pii;
typedef vector<long long int> vi;
typedef vector<pair<long long int,long long int>> vpii;
typedef vector<vector<long long int>> vvi;
typedef unordered_set<long long int> usi;
typedef unordered_map<long long int,long long int> umii;
typedef set<long long int> si;
typedef map<long long int,long long int> mii;
const int MOD= 1e9 + 7;
#define input(x) for(auto &a:x)cin>>a
#define print(x) for(auto &a:x){cout<<a<<' ';}cout<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N = 2e5 + 10;
vector<int> fact(N);
vector<int> inv(N);
const int mod = (int)1e9 + 7;

int power(int x, int y, int p){
  int res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0){
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
void inti() {
    fact[0] = 1;
    for (int i = 1; i < N; i++){
        fact[i] = (fact[i - 1] % mod * i % mod) % mod;
    }
    for (int i = 0; i < N; i++){
        inv[i] = power(fact[i], mod - 2, mod);
    }
}
int nCr(int n, int r){
    return (fact[n] % mod * inv[n - r] % mod * inv[r] % mod) % mod;
}

template <typename T>
T ceildiv(T x,T y)
{
  if(x%y==0)
	{
		return x/y;
	}
  else
	{
		return x/y+1;
	}
}
void shoaib()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   ll ans=0;
   fo(i,n)
   {
       if(s[i]=='L')
       {
           ans+=i;
       }
       else{
           ans+=n-i-1;
       }
   }
   ll ch[n];
   fo(i,n)

{
    if(s[i]=='L')
    {
        ch[i]=n-i-1-i;
    }
    else{
        ch[i]=i-(n-i-1);
    }
}
sort(ch,ch+n);
reverse(ch,ch+n);
for(ll k=1;k<=n;k++)
{
    if(ch[k-1]>0)
    {ans+=ch[k-1];}
    cout<<ans<<" ";
}
cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        shoaib();
    }
    return 0;
}
