//Programming Contest Template
//Shafaet Ashraf 
#include <bits/stdc++.h>

#define stream istringstream
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repv(i,n) for(int i=n-1; i>=0; i--)
#define repl(i,n) for(int i=1; i<=(int)n; i++)
#define replv(i,n) for(int i=n; i>=1; i--)
#define foreach(i,n) for(__typeof((n).begin())i =(n).begin();i!=(n).end();i++)
#define sz(x) (int)x.size()
#define inf (1061109567)
#define pb(x) push_back(x)
#define ppb pop_back
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define rev reverse
#define pii pair<int,int>
#define pmp make_pair
#define uu first
#define vv second
using namespace std;
template<class T> T power(T N,T P){ return (P==0)?  1: N*power(N,P-1); }
template<class T> string itoa(T a){if(!a) return "0";string ret;for(T i=a; i>0; i=i/10) ret.pb((i%10)+48);reverse(all(ret));return ret;}
typedef  long long i64;
typedef unsigned long long ui64;

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define pks printf("Case %d: ",++ks);

#define mx 100002
int n;
int c[mx];
vector<int>g[mx];
int good[mx],tot[mx];
int dis[mx];
int color[mx],mark=0;
int leftmost[mx];
int maxd=0;
int pre(int par,int u)
{
    int save=u,flag=1;
    rep(i,sz(g[u]))
    {
        int v=g[u][i];
        if(v==par)continue;
        int ret=pre(u,v);
        if(flag==1){
            flag=0;
            save=ret;
        }
    }
    leftmost[u]=save;
    color[u]=++mark;

    return save;

}
int call1(int par,int u,int dep)
{
    maxd=max(maxd,dep);
    int xorsum=0;
    dis[u]=dep;
    if(dep%2==1)
    {
        xorsum=c[u];
    }
    rep(i,sz(g[u]))
    {
        int v=g[u][i];
        if(v==par)continue;
        int ret=call1(u,v,dep+1);
        xorsum=xorsum^ret;

    }
    return good[u]=xorsum;
}

int call2(int par,int u)
{
    int xorsum=0;
    xorsum=c[u];
    rep(i,sz(g[u]))
    {
        int v=g[u][i];
        if(v==par)continue;
        int ret=call2(u,v);
        xorsum=xorsum^ret;

    }
    return tot[u]=xorsum;
}
int main() {   

    srand(3333234);
    //READ("in");
    //WRITE("out");
    cin>>n;
    assert(n<=50000);
    repl(i,n){
        cin>>c[i];
        assert(c[i]>=0 and c[i]<=20);
    }

    repl(i,n-1)
    {
        int u,v;
        cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }
    pre(0,1);
    assert(mark==n);
    call1(0,1,0);
    call2(0,1);
    int q;
    cin>>q;
    repl(i,q)
    {
        int u,v,xorsum;
        cin>>u>>v;
        int du=color[u];
        int dv=color[v];
        int lm=color[leftmost[u]];
        if(dv>=lm and dv<=du)
        {
            xorsum=-1;
        }
        else if(dis[v]%2!=dis[u]%2) 
        {
            xorsum=good[1];    
        }
        else
        {
            xorsum=good[1]^good[u]^tot[u]^good[u];
        }
        if(xorsum==-1) puts("INVALID");
        else if(xorsum)puts("YES");
        else puts("NO");



    }
    cerr<<maxd<<endl;

      return 0;
}