#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define all(x) begin(x), end(x)
#define loop(i, n) for (ll i = 0; i < n; i++)
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

#define ull unsigned long long int

ll ansD = 0;

ll decimalToBinary(ll N)
{

    ll B_Number = 0;
    ll cnt = 0;
    while (N != 0)
    {
        ll rem = N % 2;
        ll c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        cnt++;
    }

    return B_Number;
}
ll countOnes(ll n)
{
    ll count = 0;
    while (n != 0)
    {
        ll r = n % 10;
        n = n / 10;
        if (r == 1)
            ++count;
    }
    return count;
}
ll countDigits(ll n)
{
    ll count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

void combinationUtil(ll arr[], ll arr2[], ll data[], ll data2[],
                     ll start, ll end,
                     ll index, ll r)
{
    if (index == r)
    {
        ll ss = 0;
        ll kk=0;
        for (ll j = 0; j < r; j++)
        {
            ss += data[j];
            kk+=data2[j];
        }
        if (ss ==kk)
        {
            // cout << "match  ";
            // for (int j = 0; j < r; j++)
            // {
            //     cout << data[j] << " ";
            // }
            // cout << endl;

            ansD++;
        }
        return;
    }

    for (ll i = start; i <= end &&
                       end - i + 1 >= r - index;
         i++)
    {
        data[index] = arr[i];
        data2[index]=arr2[i];
        combinationUtil(arr, arr2, data, data2, i + 1,
                        end, index + 1, r);
    }
}
void printCombination(ll arr[], ll arr2[], ll n, ll digits)
{
    ll balance;
    for (ll i = 1; i <= n; i++)
    {
        ll data[i];
        ll data2[i];
        balance = i * digits / 2;
        combinationUtil(arr, arr2, data, data2, 0, n - 1, 0, i);
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll maximum = 0;

    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
        maximum = max(maximum, arr[i]);
    }
    // cout<<"maxi  "<<maximum<<endl;
    ll max_digit = decimalToBinary(maximum);
    ll digits = countDigits(max_digit);

    ll no_of_ones[n];
    ll no_of_zeroes[n];
    ll sum_of_all_ones = 0;
    // cout << "max_digit  " << digits << endl;
    for (auto i = 0; i < n; i++)
    {
        ll binary_no = decimalToBinary(arr[i]);
        // cout<<"binary of  "<<arr[i]<<" is "<<binary_no<<endl;

        no_of_ones[i] = countOnes(binary_no);
        no_of_zeroes[i] = digits - no_of_ones[i];
        // cout << no_of_ones[i] << "   " << no_of_zeroes[i] << endl;
    }
    printCombination(no_of_ones, no_of_zeroes, n, digits);
    ll ansB = decimalToBinary(ansD);
    if (ansD == 0)
    {
        for (auto i = 0; i < (digits); i++)
        {
            cout << 0;
        }
        cout << "\n";
    }
    else
    {

        ll digit_in_B = countDigits(ansB);
        for (auto i = 0; i < (digits - digit_in_B); i++)
        {
            cout << 0;
        }
        cout << ansB << "\n";
    }
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);
    //  ll t;
    // cin >> t;
    // while (t--)
    // {
    ansD = 0;
    solve();
    // }
    return 0;
    //https://www.geeksforgeeks.org/print-all-possible-combinations-of-r-elements-in-a-given-array-of-size-n/
}