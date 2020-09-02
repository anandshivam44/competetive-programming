#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
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
    int n;
    cin >> n;
    int arr[n];
    vector<int> v;
    // vector<pair<int,bool>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 1)
        {
            // v.emplace_back(arr[i],0);
            v.push_back(i);
        }
    }

    int answer=0;
    // cout<<v.size()<<endl;

    if(v.size()%2==0)
    if(v.size()==0)
    answer=0;
    else
    for (int i = 0; i < v.size()-1; i=i+2)
    {
        int between=v[i+1]-v[i]-1;
        answer+=between*2+2;

    }
    else 
    answer=-1;
    if (answer==-1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<answer;
    }
    
    
    


    //cout <<a<<"\n";
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}