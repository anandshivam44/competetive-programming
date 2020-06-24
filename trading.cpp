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

string arr[10];
int no_of_buy = 0;
int no_of_sell = 0;
int quantity_of_buy = 0;
int quantity_of_sell = 0;
unordered_map<string, int> umap;

void split_into_words(string str)
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
	}
}

void gaurav()
{
	string s;
	vector<string> v;
	int kk = 0;
	int k = 0;

	string person="S";

	while (getline(cin, s))
	{
		split_into_words(s);

		for (int i = 0; i < 10; i++)
		{
			cout << arr[i] << " "; // print input to verify input is correct
		}
		cout << endl;
		
		if (arr[2] == person)
		{
			kk++; // count no of G entries
		}
		if (arr[2] == person && arr[5] == "buy")
		{
			buy = buy + (stod(arr[6]) * stod(arr[7])); //cout total buy value
			no_of_buy += (stod(arr[6]));			   //cout total buy shares
			umap[arr[1]] += (stod(arr[6]));			   //calculate no of buy for each share
			k++;
		}
		if (arr[2] == person && arr[5] == "sell")
		{
			sell = sell + (stod(arr[6]) * stod(arr[7])); //cout total sell value
			no_of_sell += (stod(arr[6]));				 //cout total sell shares
			umap[arr[1]] -= (stod(arr[6]));				 //calculate no of sell for each share
			k++;
		}
	}
	cout << endl
		 << "\n\n\n\n"
		 << "no of buy = " << no_of_buy
		 << " \nbuy = " << buy << "\n\n"
		 << " no of sell = " << no_of_sell
		 << " \nsell = " << sell << "           "
		 << k << " " << kk << " "
		 << "\n\nnet profit = " << (sell - buy) << "\n\n"
		 << endl;

	for (auto x : umap)
		cout << x.first << " " << x.second << endl;
		for (int i = 0; i < map.; i++)
		{
			/* code */
		}
		
}

int main()
{
	clock_t time_req;
	time_req = clock();
	cin.sync_with_stdio(false);
	cin.tie(0);

	gaurav();

	return 0;
}