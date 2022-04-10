#include<bits/stdc++.h>
using namespace std;
const int  MAXN = 2e5+1;
int n,u,v;
int a[MAXN],p[MAXN];
int res = 1e18;

int xuly(int k)
{
    int s1,s2;
    for(int i = u; i <= v; i++){
        s1=p[k]-p[u-1];
        s2=p[v+1]-p[k];
    }
    return abs(s1-s2);
}

int main()
{
	cin >> n >> u >> v;
	for(int i = 1; i <= n; i++)
        cin >> a[i];
    p[0] = 0;
    for(int i = 1; i <= n; i++)
        p[i] = p[i-1] + a[i];
    for(int k = 1; k <= n; k++)
        res = min(res,xuly(k));
    cout << res;
	return 0;
}
