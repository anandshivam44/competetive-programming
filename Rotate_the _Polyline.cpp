#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
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
#define delete_by_value(vec, val) vec.erase(std::remove(vec.begin(), vec.end(), val), vec.end());

void solve()
{
    int n;
    cin >> n;
    double disVecX[n], disVecY[n];
    double arrX[n],arrY[n];
    double d;
    double sumX=0,sumY=0;

    for (int i = 0; i < n; i++)
    {
        cin >> disVecX[i] >> disVecY[i];
        // d = sqrt(disVecX[i] * disVecX[i] + disVecY[i] * disVecY[i]);
        // disVecX[i] /= d;
        // disVecY[i] /= d;
        // sumX+=disVecX[i];
        // sumY+=disVecY[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        arrX[i]=disVecX[i+1]-disVecX[i];
        arrY[i]=disVecY[i+1]-disVecY[i];
    }
    arrX[n-1]=disVecX[n-1]-disVecX[0];
    arrY[n-1]=disVecY[n-1]-disVecY[0];
    

    //cout <<a<<"\n";
}

int main()
{
    // clock_t time_req;
    // time_req = clock();
    FIO;

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