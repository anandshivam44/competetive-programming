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
    int n, k;
    cin >> n >> k;
    int arr[n];
    int pages = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pages += ceil(((float)arr[i]) / k);
    }
    // cout << pages << endl;
    int arrLast[pages];
    int arrFirst[pages];
    int count = 0;
    // arrFirst[0]=1;
    // arrPages[0]=min(arr[0],k);
    for (int i = 0; i < n; i++)
    {
        int noOfPagesInChapter = ceil(((float)arr[i]) / k);
        // cout << noOfPagesInChapter << " no of page in chapter " << i + 1 << endl;
        for (auto j = 0; j < noOfPagesInChapter; j++)
        {
            if (j == noOfPagesInChapter - 1)
            {
                arrFirst[count] = (j * k + 1);
                arrLast[count] = min(k * (j + 1), arr[i]);
                count++;
            }
            else
            {
                arrFirst[count] = (j * k + 1);
                arrLast[count] = k * (j + 1);
                count++;
            }
        }
    }
    // print_array(arrFirst);
    // print_array(arrLast);

    int result = 0;
    for (int i = 0; i < pages; i++)
    {
        // cout << arrFirst[i] << " " << i + 1 << " " << arrLast[i] << endl;
        if (((i + 1) <= arrLast[i]) && ((i + 1) >= arrFirst[i]))
        {
            result++;
            // cout << "exexuted" << endl;
        }
    }
    cout << result << endl;

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