// #include <iostream>
// using namespace std;
// #include <iostream>
// #include <vector>
// #include <functional>
// int main()
// {
//     cin.sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         vector<int> v;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == 1)
//             {
//                 //cout << "index " << j << "\n";
//                 v.push_back(j);
//             }
//         }
//         bool b = true;
//         //cout<<"Size "<<v.size()<<"\n";
//         for (int i = 0; i < v.size() - 1; i++)
//         {
//             if ((v[i + 1] - v[i]) < 6)
//             {
//                 b = false;
//             }
//         }
//         if (b)
//         {
//             cout << "YES"
//                  << "\n";
//         }
//         else
//         {
//             cout << "NO"
//                  << "\n";
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){

    int T;
    int N;
    vector<int> v;

    cin>>T;
    for(int i = 0; i<T; i++){
            cin>>N;

        int A[N];

        for(int j=0; j<N; j++)
            cin>>A[j];

        for(int k=0; k<N; k++){
            if(A[k] == 1)
                v.push_back(k);
        }

        bool flag = true;
        for(int i = 0; i<v.size() - 1; i++){
            if((v[i+1] - v[i]) < 6){
                flag = false;
            }
        }
        if(flag == false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl; 

    }
  
}