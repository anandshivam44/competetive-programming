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


int findNextIndex(int a[],int x){
    int position=0;
    int max=a[0];
    for (int i = 0; i <(sizeof(a)/sizeof(a[0])) ; i++)
    {
        if (a[i]>max)
        {
            
        }
        
    }
    


    return position;
}


int sumOf(int array[])
{
    int sum=0;
    for (int i = 0; i < (sizeof(array)/sizeof(array[0])); i++)
    {
        sum+=array[i];
    }
    return sum;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (sumOf(arr) == 0)
    {
        int inedx= findNextIndex(arr,x);
        x=x*2;
    }

    //cout <<a<<"\n";
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