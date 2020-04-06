#include <iostream>
#include <bits/stdc++.h> 
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int N;
        cin>>N;
        vector <int > arr(N);
        vector<int> sorted_array;
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
        cout<<"Input Array\n";
        for (int i = 0; i < N; i++)
        {
            cout<<arr[i]+"+";
        }
        cout<<"\n";
        sorted_array=arr;
        sort(sorted_array.begin(),sorted_array.end());
        cout<<"Sorted Array\n";
        for (int i = 0; i < N; i++)
        {
            cout<<sorted_array[i]+"_";
        }
        cout<<"\n";        
        for (int i = 0; i < N-1; i++)
        {
            if(!(arr[i+1]>arr[i])){
                //arr.push_back(arr[i]);
                //arr.erase(arr.begin());
            }
        }
        cout<<"After operation Array"<<endl;
        for (int i = 0; i < N; i++)
        {
            cout<<arr[i]+"^";
        }
        cout<<"\n";
        bool b=true;
        for (int i = 0; i < N; i++)
        {
            if(arr[i]!=sorted_array[i]){
                b=false;
                break;
            }
        }
        if (b)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
// 1
// 10
// 6 7 8 9 10 1 2 3 4 5
// Input Array
// rted Array
// ted Array
// ed Array
// d Array
//  Array

// Sorted Array
// orted Array

// Sorted Array

// Sorted Array
// orted Array
// rted Array
// ted Array
// ed Array
// d Array
//  Array

// After operation Array
// ted Array
// ed Array
// d Array
//  Array

// Sorted Array
// orted Array
//  Array

// NO