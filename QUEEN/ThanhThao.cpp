#include <bits/stdc++.h>
using namespace std;

char a[10][10];
int x,y,cnt(0);
bool ok(false);
vector< pair <int,int> > B;

bool check(int u, int v) {
    for (unsigned int i=0;i<B.size();i++)
        if (B[i].first+B[i].second==u+v || B[i].first-B[i].second==u-v || B[i].first==u || B[i].second==v) return false;
    return true;
}

void xuatkq(){
     for (int i=1;i<=8;i++)
     for (int j=1;j<=8;j++)
        a[i][j]='.';
     for (auto b:B) a[b.first][b.second]='w';
     for (int i=1;i<=8;i++) {
     for (int j=1;j<=8;j++) cout<<a[i][j];
     cout<<'\n';
     }
}

void dat_hau(int i, int j){
     if (ok) return;
     if (cnt==8){
        ok=true;
        xuatkq();
        return;
     }
     for (int u=1;u<=8;u++)
        for (int v=1;v<=8;v++)
            if (check(u,v))
            {
                B.push_back(make_pair(u,v)); cnt++;
                dat_hau(u,v);
                B.pop_back(); cnt--;
            }
}

int main()
{
     cin>>x>>y;
     B.push_back(make_pair(x,y));
     cnt++;
     dat_hau(x,y);
     return 0;
}
