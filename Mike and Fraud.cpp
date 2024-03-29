#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;

int n;
ll k,ans,temp;
ll t[400005];

void build() {
  for (int i = n - 1; i > 0; --i) t[i] = (t[2*i]*t[2*i+1])%k;
}

int query(int l, int r) {  // product on interval [l, r)
  int res = 1;
  if(r==l+1)
  return t[n+l];
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res  = (res*t[l++])%k;
    if (r&1) res = (res*t[--r])%k;
  }
  return res;
}

int main() {
  scanf("%d", &n);
  scanf("%lld",&k);
  
  for (int i = 0; i <= n-1; i++) 
  {	
  	scanf("%lld", &temp);
  	t[n+i] = temp%k;
  }
  
  build();
  
  
  //printf("%d\n", query(1,2));
  //query 0 indexed. 
  
  ans = 0;
  int p = 0;
  int q = 1;
  
  while (!(p == n && q == n) && q <= n) 
  {
        while (q < n && query(p, q) != 0) 
        {
            q++;
        }
        
        while (query(p, q) == 0) 
        {
            ans += n - q + 1;
            p++;
            if (p == q) break;
        }
        
        q++;
    }
            printf("%lld",ans);
  
  
  
  return 0;
}
