#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
const ll mod = 1000000007;
const ll inf = 1e18;
#define all(x) begin(x), end(x)
#define loop(i, n) for (int i = 0; i < n; i++)
#define print_array(arr)                                         \
    loop(z, sizeof(arr) / sizeof(arr[0])) cout << arr[z] << " "; \
    cout << "\n"
#define print_vector(vvv)                      \
    loop(z, vvv.size()) cout << vvv[z] << " "; \
    cout << "\n"
#define print_vector_pair(vvv)                                             \
    loop(z, vvv.size()) cout << vvv[z].first << " " vvv[z].second << "\n"; \
    cout << "\n"
#define fill_my(arr, q) fill(all(arr), q)

void solve()
{
    ll n, k;
    cin >> n >> k;
    // ll arr[n];
    // double q[n];
    vector <pair <ll, double>> v;
    // vector <int> v;
    // cout<<k<<" k "<<endl;
    ll temp1;double temp2;

    

    for (int i = 0; i < n; i++)
    {
        cin>>temp1;
        temp2=(double)k/(temp1);
        v.emplace_back(temp1,temp2);
        // if (v[i].second==floor(v[i].second) && v[i].second!=0)
        // {
        //     v.push_back(q[i]);
        // }

    }

    ll MIN=1000000000;
    ll index=-1;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second==floor(v[i].second) && v[i].second!=0)
        {
            if (v[i].second<MIN)
            {
                index=i;
                MIN=(ll)v[i].second;
            }
        }
    }
    if (index==-1)
    {
        cout<<-1<<"\n";
    }
    else{
        cout<<v[index].first<<"\n";
    }
    


    // print_array(arr);
    // print_vector(v);
    // int m=q[0];
    // if (v.size()==0)
    // {
    //     cout<<-1<<"\n";
    // }
    // else {

    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         m=min(m, (int)q[i]);
    //     }
    //     cout<<m<<"\n";
    // }
    // cout<<"hi"<<endl;
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}