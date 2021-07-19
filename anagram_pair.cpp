#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'sherlockAndAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int sherlockAndAnagrams(string s)
{
    int l=s.length();
    unordered_map<string,int> umap;

    for(int i=0;i<l;i++){
        for(int j=1;j<=l-i;j++){
            string temp=s.substr(i,j);
            cout<<temp;
            sort(temp.begin(), temp.end());
            cout<<" "<<temp<<endl;
            umap[temp]+=1;
        }
    }
    int answer=0;
    for(auto i : umap){
        if(i.second>2){
            int combination=1;
            for(int j=1;j<=i.second-1;j++){
                combination*=j;
            }
            answer+=combination;
        }
        else if(i.second>1){
            answer++;
        }
    }
    cout<<endl;
    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        cout << result << "\n";
    }

    fout.close();

    return 0;
}

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
