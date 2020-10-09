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

int cc;
bool checkMove(int x, int y, int finalx, int finaly)
{
    if (x <= finalx && x >= 0 && y <= finaly && y >= 0)
    {
        return 1;
    }
    return 0;
}
void recursive(int x, int y, int finalx, int finaly, vector<bool> matrix[])
{
    matrix[x][y] = 1;
    if (x == finalx && y == finaly)
    {
        cc++;
        return;
    }
    if (checkMove(x + 1, y + 1, finalx, finaly) )
    {
        if( matrix[x + 1][y + 1] == 0)
        recursive(x + 1, y + 1, finalx, finaly, matrix);
    }
    if (checkMove(x - 1, y - 1, finalx, finaly) )
    {
        if(matrix[x - 1][y - 1] == 0)
        recursive(x - 1, y - 1, finalx, finaly, matrix);
    }
    if (checkMove(x + 1, y - 1, finalx, finaly))
    {
        if(matrix[x + 1][y - 1] == 0)
        recursive(x + 1, y - 1, finalx, finaly, matrix);
    }
    if (checkMove(x - 1, y + 1, finalx, finaly) )
    {
        if(matrix[x - 1][y + 1] == 0)
        recursive(x - 1, y + 1, finalx, finaly, matrix);
    }
    return;
}

void test_case()
{
    int A = 3, B = 5;
    vector<bool> matrix[A];
    for (int i = 0; i < A; i++)
        for (int j = 0; j < B; j++)
            matrix[i].push_back(0);
    recursive(0, 0, A - 1, B - 1, matrix);
}

int main()
{
    cc=0;
    // clock_t time_req;
    // time_req = clock();
    FIO;

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case #" << i << ": ";
        test_case();
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}