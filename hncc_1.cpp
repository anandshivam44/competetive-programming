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

double distance(double x1, double y1, double x2, double y2)
{
    // Calculating distance
    return sqrt(pow(x2 - x1, 2) * 1.0 +
                pow(y2 - y1, 2) * 1.0);
}

void solve()
{
    int r, d2, d3, d4, i1, i2, i3, i4, v1, v2, v3, v4, r1, r2, r3, r4, N;
    cin >> r >> d2 >> d3 >> d4 >> i1 >> i2 >> i3 >> i4 >> v1 >> v2 >> v3 >> v4 >> r1 >> r2 >> r3 >> r4 >> N;
    // cout<<N<<endl;
    double a1, a2, a3, a4;

    double x1, x2, x3, x4, y1, y2, y3, y4;
    if (r1 == 1)
    {
        a1 = i1 - (N * v1) % 360;
    }
    else
    {
        a1 = i1 + (N * v1) % 360;
    }

    if (r2 == 1)
    {
        a2 = i2 - (N * v2) % 360;
    }
    else
    {
        a2 = i2 + (N * v2) % 360;
    }

    if (r3 == 1)
    {
        a3 = i3 - (N * v3) % 360;
    }
    else
    {
        a3 = i3 + (N * v3) % 360;
    }

    if (r4 == 1)
    {
        a4 = i4 - (N * v4) % 360;
    }
    else
    {
        a4 = i4 + (N * v4) % 360;
    }

    // a1=i1+(N*v1)%360;
    // a2=i2+(N*v2)%360;
    // a3=i3+(N*v3)%360;
    // a4=i4+(N*v4)%360;

    a1 = (3.14159265358979323 * a1) / 180.0;
    a2 = (3.14159265358979323 * a2) / 180.0;
    a3 = (3.14159265358979323 * a3) / 180.0;
    a4 = (3.14159265358979323 * a4) / 180.0;

    x1 = r * cos(a1);
    // cout<<x1<<" "<<r<<" "<<cos(a1)<<endl;
    x2 = r * cos(a2) + d2;
    x3 = r * cos(a3) + d3;
    x4 = r * cos(a4) + d4;

    y1 = r * sin(a1);
    y2 = r * sin(a2);
    y3 = r * sin(a3);
    y4 = r * sin(a4);
    // cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << y1 << " " << y2 << " " << y3 << " " << y4 << " " << a1 << " " << a2 << " " << a3 << " " << a4 << endl;

    double answer = distance(x1, y1, x2, y2) + distance(x2, y2, x3, y3) + distance(x3, y3, x4, y4);
    cout<<distance(x1, y1, x2, y2)<< " + "<< distance(x2, y2, x3, y3) << " + "<< distance(x3, y3, x4, y4)<< " = ";
    answer = round(answer);
    cout << (int)answer<<endl;

    // cout << endl
    //      << 24.3 % 6 << "\n";
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}