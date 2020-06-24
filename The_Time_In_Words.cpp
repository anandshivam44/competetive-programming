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

string one[] = {"", "one ", "two ", "three ", "four ",
                "five ", "six ", "seven ", "eight ",
                "nine ", "ten ", "eleven ", "twelve ",
                "thirteen ", "fourteen ", "fifteen ",
                "sixteen ", "seventeen ", "eighteen ",
                "nineteen "};

// strings at index 0 and 1 are not used, they is to
// make array indexing simple
string ten[] = {"", "", "twenty ", "thirty ", "forty ",
                "fifty ", "sixty ", "seventy ", "eighty ",
                "ninety "};

// n is 1- or 2-digit number
string numToWords(int n, string s)
{
    string str = "";
    // if n is more than 19, divide it
    if (n > 19)
        str += ten[n / 10] + one[n % 10];
    else
        str += one[n];

    // if n is non-zero
    if (n)
        str += s;

    return str;
}

// Function to print a given number in words
string convertToWords(long n)
{
    // stores word representation of given number n
    string out;

    // handles digits at ten millions and hundred
    // millions places (if any)
    out += numToWords((n / 10000000), "crore ");

    // handles digits at hundred thousands and one
    // millions places (if any)
    out += numToWords(((n / 100000) % 100), "lakh ");

    // handles digits at thousands and tens thousands
    // places (if any)
    out += numToWords(((n / 1000) % 100), "thousand ");

    // handles digit at hundreds places (if any)
    out += numToWords(((n / 100) % 10), "hundred ");

    if (n > 100 && n % 100)
        out += "and ";

    // handles digits at ones and tens places (if any)
    out += numToWords((n % 100), "");

    return out;
}

string s[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen"};

void solve()
{
    int hh, mm;
    cin >> hh >> mm;
    //cout << hh << " " << mm << endl;
    if (mm == 0)
    {
        cout << s[hh] << " o' clock" << endl;
    }
    else if (mm == 15)
    {
        cout << "quarter past " << s[hh] << endl;
    }
    else if (mm == 30)
    {
        cout << "half past " << s[hh] << endl;
    }
    else if (mm == 45)
    {
        cout << "quarter to " << s[(hh + 1) % 12] << endl;
    }
    else if (mm == 1)
    {
        cout << s[mm] << " minute past " << s[hh] << endl;
    }

    else if (mm > 0 && mm < 15)
    {
        cout << s[mm] << " minutes past " << s[hh] << endl;
    }
    else if (mm < 30 && mm > 15)
    {
        cout << convertToWords(mm) << "minutes past " << s[hh] << endl;
    }
    else if (mm == 59)
    {
        cout << s[60 - mm] << " minute to " << s[(hh + 1) % 12] << endl;
    }
    else if (mm < 60 && mm > 45)
    {
        cout << s[60 - mm] << " minutes to " << s[(hh + 1) % 12] << endl;
    }
    else if (mm > 30 && mm < 45)
    {
        cout << convertToWords(60 - mm) << "minutes to " << s[(hh + 1) % 12] << endl;
    }
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    solve();

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}
