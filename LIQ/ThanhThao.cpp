/*#include<bits/stdc++.h>
#define maxn 10001
using namespace std;
int n, res(0),l;
int a[maxn], x[maxn];

int Cal()
{
    int ans = 0;
    for(int j = 1; j<= n; j++)
        if(x[j]==1)
            ans++;
    return ans;
}

int Find(int m)
{
    for(int j = m-1; j > 0; j--)
        if(x[j]==1)
            return j;
    return 0;
}

void quaylui(int i)
{
    if(i==n){
        l = Cal();
        res=max(res,l);
        return;
    }
    x[i+1]=0;
    quaylui(i+1);

    int j = Find(i+1);
    if(j==0 || a[j] < a[i+1]){
        x[i+1]=1;
        quaylui(i+1);
    }
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    quaylui(0);
    cout << res;
	return 0;
}
*/


//-----------------------------------------------------------------------------------------------------------------

/*#include<bits/stdc++.h>
#define maxn 10001
using namespace std;
int n, res(0),l;
int a[maxn], x[maxn];

void quaylui(int i, int j, int l)
{
    if(i==n){
        res=max(res,l);
        return;
    }
    x[i+1]=0;
    quaylui(i+1,j,l);

    if(j==0 || a[j] < a[i+1]){
        x[i+1]=1;
        quaylui(i+1,i+1,l+1);
    }
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    quaylui(0,0,0);
    cout << res;
	return 0;
}*/

//------------------------------------------------------------------------------------------

/*
#include<bits/stdc++.h>
#define maxn 10001
using namespace std;

int n,res(0);
int a[maxn];
int f[maxn][maxn];
void Max(int x, int y){
    x = max(x,y)
}
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    memset(f,-1,sizeof f);
    f[0][0]=0;

    for(int i=0; i<n; i++)
        for(int j=0; j<=i; j++)
            if(f[i][j]!=-1){
                f[i+1][j]=max(f[i][j],f[i+1][j]);

                if(j==0||a[j]<a[i+1])
                    f[i+1][i+1]=max(f[i][j]+1,f[i+1][i+1]);
            }
    res=-1;
    for(int j=0;j<=n;++j) res = max(res,f[n][j]);
    cout<<res;
}*/
//--------------------------------------------------------------

#include<bits/stdc++.h>
#define maxn 10
using namespace std;
int n;
int a[maxn],f[maxn];
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)    cin >> a[i];
    memeset(f,-1,sizeof f)
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(f[i]!=1&&a[j]>a[i])
                max(f[j],f[i]+1);
    for(i=1;i<=n;i++)

}
















