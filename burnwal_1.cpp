#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void test_case()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll hcf=gcd(a,b);
    if(c%hcf==0 || (-c%hcf==0)){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }

}

int main()
{
    FIO;

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        test_case();
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}