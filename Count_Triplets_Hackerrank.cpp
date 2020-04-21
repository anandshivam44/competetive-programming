#include <bits/stdc++.h>

using namespace std;

long co = 0;

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

void combinationUtil(vector<long> arr, long data[], int start, int end, int index, int r)
{

    if (index == r)
    {
        sort(data, data + r);
        cout<<data[0]<<" "<<data[1]<<" "<<data[2]<<" \n";
        if (data[1] * data[1] == data[0] * data[2])
        {
            cout<<"executed\n";
            co++;
        }

        return;
    }
    for (int i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i + 1, end, index + 1, r);
    }
}

void printCombination(vector<long> arr, int n, int r)
{

    long data[r];
    combinationUtil(arr, data, 0, n - 1, 0, r);
}

long countTriplets(vector<long> arr, long r)
{
    printCombination(arr, arr.size(), 3);
    return co;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nr_temp;
    getline(cin, nr_temp);

    vector<string> nr = split(rtrim(nr_temp));

    int n = stoi(nr[0]);

    long r = stol(nr[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<long> arr;

    for (int i = 0; i < n; i++)
    {
        long arr_item = stol(arr_temp[i]);

        if (arr_item == 1 || arr_item % r == 0)
        {
            arr.push_back(arr_item);
        }
    }

    long ans = countTriplets(arr, r);

    fout << ans << "\n";
    cout << ans << "\n";

    fout.close();

    return 0;
}
