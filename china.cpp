#include <bits/stdc++.h>
#include <string.h>

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

double buy = 0;
double sell = 0;

// void removeDupWord(string str)
// {
//     string word = "";
//     for (auto x : str)
//     {
//         if (x == ' ')
//         {
//             cout << word;
//             word = "";
//         }
//         else
//         {
//             word = word + x;
//         }
//     }
//     cout << word;
// }
string arr[10];
int no_of_buy=0;
int no_of_sell=0;

void removeDupWord(string str)
{
    // Used to split string around spaces.
    istringstream ss(str);

    // Traverse through all words
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
        // Read a word
        string word;
        ss >> word;
        arr[k] = word;
        k++;

        // Print the read word
        // cout << word<<" ";

        // While there is more to read
    }
}

void gaurav()
{
    string s;
    vector<string> v;
    int kk = 0;
        int k = 0;


    while (getline(cin, s))
    {
        removeDupWord(s);
        // cout << s;
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        if (arr[2] == "G"){
            kk++;
        }
        if (arr[2] == "G" && arr[5] == "buy")
        {
            buy = buy + (stod(arr[6]) * stod(arr[7]));
            k++;
        }
        if (arr[2] == "G" && arr[5] == "sell")
        {
            sell = sell + (stod(arr[6]) * stod(arr[7]));
            k++;
        }
    }
    cout << endl
         << "\n\n\n\n"
         << "buy = " << buy << " sell = " << sell<<"  "<<k<<" "<<kk<<" "<<"net = "<<(sell-buy);

    // cout << endl;

    // string row[10];
    // int count = 0;

    // for (int i = 0; i < 9; i++)
    // {
    //     cin >> s;
    //     row[count] = s;
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << row[i];
    // }
    // cout << endl;
}

void solve()
{
    string s;

    while (cin >> s)
    {
        string package_name = "";
        int startIndex = 0;
        int endIndex = s.size() - 1;
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            // cout<<c<<"    "<<i<<endl;
            if (c == '=' && s[i - 1] == 'd')
            {
                startIndex = i + 1;
                // cout<<" start "<<startIndex;
            }
            if (c == '&')
            {
                endIndex = i - 1;
                // cout<<"  end "<<endIndex<<endl;
            }
        }
        for (int i = startIndex; i <= endIndex; i++)
        {
            package_name += s[i];
        }

        cout << package_name << endl;
    }
}
void delete_multiple()
{
    string s;
    vector<string> list;

    while (cin >> s)
    {
        list.push_back(s);
    }
    for (int i = 0; i < list.size() - 1; i++)
    {
        for (int j = i + 1; j < list.size() - 2; j++)
        {
            if (list[i] == list[j])
            {
                list.erase(list.begin() + j);
            }
        }
    }
    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << endl;
    }
}
void sort()
{
    string s;
    vector<string> v;

    while (cin >> s)
    {
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    // solve();
    // delete_multiple();
    // sort();
    gaurav();

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}