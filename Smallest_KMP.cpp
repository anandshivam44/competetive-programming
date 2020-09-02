#include <bits/stdc++.h>
#include<iostream> 
#include<algorithm> // for lexicographical_compare() 
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
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
    string s, p;
    cin>>s>>p;
    // cout<<s<<" "<<p<<endl;

    ll frequencyS[26];
    fill_my(frequencyS, 0);
    ll frequencyP[26];
    fill_my(frequencyP, 0);
    for (ll i = 0; i < s.length(); i++)
    {
        frequencyS[((ll)s[i])-97]++;
    }
    for (ll i = 0; i < p.length(); i++)
    {
        ll temp=((ll)p[i])-97;
        frequencyP[temp]++;
        frequencyS[temp]--;
    }
    ll start;
    for (ll i = 0; i < 26; i++)
    {
        // if (frequencyP[i]!=0)
        // {
        //     start=i;
        //     break;
        // }

    }

    string a="";
    string b="";
    for (ll i = 0; i < 26; i++)
    {

        ll tt=frequencyS[i];
        while (frequencyS[i]--)
        {
            a+=(char)(i+97);
        }
        if (i+97==(ll)p[0])
        {
            a+=p;
        }
        if (i+97==(ll)p[0])
        {
            b+=p;
        }
        while (tt--)
        {
            b+=(char)(i+97);
        }

    }
    char aa[s.length() + 1];
    char bb[s.length() + 1]; 
    strcpy(aa, a.c_str());
    strcpy(bb, b.c_str());
    //  cout<<a<<" "<<b<<" "<<aa<<" "<<bb;

    if( lexicographical_compare(aa, aa+s.length(), bb, bb+s.length())) 
    { 
        cout <<aa; 
          
    } 
    else
    { 
        cout << bb; 
          
    }

    cout<<endl;









    //cout <<a<<"\n";
}

int main()
{
    clock_t time_req;
    time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}































// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// ll gcd(ll a, ll b) {
//     return b ? gcd(b, a % b) : a;
// }
// const ll mod = 1000000007;
// const ll inf = 1e18;
// #define all(x) begin(x), end(x)
// #define loop(i, n) for (int i = 0; i < n; i++)
// #define print_array(arr)                                         \
//     loop(z, sizeof(arr) / sizeof(arr[0])) cout << arr[z] << " "; \
//     cout << "\n"
// #define print_vector(vvv)                      \
//     loop(z, vvv.size()) cout << vvv[z] << " "; \
//     cout << "\n"
// #define print_vector_pair(vvv)                                             \
//     loop(z, vvv.size()) cout << vvv[z].first << " " vvv[z].second << "\n"; \
//     cout << "\n"
// #define fill_my(arr, q) fill(all(arr), q)

// void solve()
// {
//     string s, p;
//     cin>>s>>p;
//     // cout<<s<<" "<<p<<endl;

//     ll frequencyS[26];
//     fill_my(frequencyS, 0);
//     ll frequencyP[26];
//     fill_my(frequencyP, 0);
//     for (ll i = 0; i < s.length(); i++)
//     {
//         frequencyS[((ll)s[i])-97]++;
//     }
//     // ll temp2=1000000;
//     for (ll i = 0; i < p.length(); i++)
//     {
//         ll temp=((ll)p[i])-97;
//         frequencyP[temp]++;
//     }

//     int times=1000000;
//     for (ll i = 0; i < 26; i++)
//     {
//         if (frequencyP[i]!=0)
//         {
//             // cout<<frequencyS[i]<<" "<<frequencyP[i]<<endl;
//             times=min(times,(int)floor(frequencyS[i]/frequencyP[i]));
//         }


//     }
//     // print_array(frequencyS);
//     // print_array(frequencyP);
//     for (ll i = 0; i < p.length(); i++)
//     {
//         ll temp=((ll)p[i])-97;
//         ll temp2=times;
//         // frequencyP[temp]++;
//         while(temp2--)
//         frequencyS[temp]--;
//     }
//     print_array(frequencyS);
//     print_array(frequencyP);
//     cout<<"times is "<<times<<endl;

//     for (ll i = 0; i < 26; i++)
//     {
//         while (frequencyS[i]--)
//         {
//             cout<<(char)(i+97);
//         }
//         if (i+97==(ll)p[0])
//         {
//             while (times--)
//                 cout<<p;
//         }

//     }
//     cout<<endl;









//     //cout <<a<<"\n";
// }

// int main()
// {
//     clock_t time_req;
//     time_req = clock();
//     cin.sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     // time_req = clock() - time_req;
//     // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
//     return 0;
// }