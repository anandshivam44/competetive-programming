#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        int noOfHouses,Budget;
        cin>>noOfHouses>>Budget;
        int price[noOfHouses];
        for (int j = 0; j < noOfHouses; j++)
        {
            cin>>price[j];
        }
        // cout<<"\n Before Sorting";
        // for (int j = 0; j < noOfHouses; j++)
        // {
        //     cout<<price[j]<<" ";
        // }
        sort(price,price+noOfHouses);
        // cout<<"\n After Sorting";
        // for (int j = 0; j < noOfHouses; j++)
        // {
        //     cout<<price[j]<<" ";
        // }
        //cout<<"\n";
        int sum=0;
        int temp=0;
        int count=0;
        for (int j = 0; j < noOfHouses; j++)
        {
            temp=temp+price[j];
            if(temp<=Budget){
                sum=temp;
                count++;
            }
             //cout<<price[j]<<" ";
         }
         cout<<count<<"\n";

    }
    
    return 0;
}
