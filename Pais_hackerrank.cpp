#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
vector<bool> a(2147483650, false);

// Complete the pairs function below.
int pairs(int k, vector<int> arr)
{
    int count = 0;
    int l = arr.size();

    for (int i = 0; i < l; i++)
    {
        if (a[arr[i]] == true && a[arr[i] + k] == true && arr[i] < 2147483650 - k)
        {
            // cout << arr[i] << "  " << a[arr[i]] << " == " << (a[arr[i]] == true) << "         " << arr[i] + k << "  " << a[arr[i] + k] << " == " << (a[arr[i + k]] == true) << endl;
            count++;
        }
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    // for (int t = 0; t < 100; t++)
    // {
    //     cout<<a[t]<<" ";
    // }

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
        a[arr_item] = true;
    }
    // for (int t = 0; t < 100; t++)
    // {
    //     cout<<a[t]<<" ";
    // }
    sort(arr.begin(), arr.end());

    int result = pairs(k, arr);

    fout << result << "\n";
    cout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
