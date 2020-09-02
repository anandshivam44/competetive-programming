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
    int cost[3];
    cin >> cost[0] >> cost[1] >> cost[2];
    // cout<<costH<<c;ostC<<costA;
    int maxarea[3];
    cin >> maxarea[0] >> maxarea[1] >> maxarea[2];
    // cout<<
    int M[3], N[3];
    cin >> M[0] >> N[0] >> M[1] >> N[1] >> M[2] >> N[2];
    // cout<<MH<<NH<<MC<<NC<<MA<<NA;
    int max_area;
    cin >> max_area;

    int sorted[3];
    sorted[0] = cost[0];
    sorted[1] = cost[1];
    sorted[2] = cost[2];

    vector<int> priority;
    sort(sorted, sorted + 3);
    print_array(sorted);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (sorted[i] == cost[j])
            {
                priority.push_back(j);
            }
        }
    }
    print_vector(priority);
    // for (int i = 0; i < 3; i++)
    // {
        
    // }
    int total_cost=0;

    int number_of_animals_first_priority=cost[priority[0]]/N[priority[0]];
    int cost_of_animals_first_priority=number_of_animals_first_priority*M[priority[0]];
    total_cost+=cost_of_animals_first_priority;
    max_area=max_area-dfd
    


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
    //{
    solve();
    //}

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}