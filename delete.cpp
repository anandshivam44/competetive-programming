#include<bits/stdc++.h>

using namespace std;

struct material
{
    float profit;
    float weight;
    float pw;
};

bool compare(material a, material b){

    return a.pw < b.pw;
}

int main(){

    int n;
    cout<<"Enter the number of objects: ";
    cin>>n;

    material object[n];

    for(int i = 0; i<n; i++){
        cout<<"Enter the profit of "<<i+1<<" object";
        cin>>object[i].profit;

        cout<<"Enter the weight of "<<i+1<<" object";
        cin>>object[i].weight;

    }

    for(int i = 0; i<n; i++){
        object[i].pw = object[i].profit / object[i].weight;
    }


    sort(object, object+n, compare);

    for(int i = 0; i<n; i++){
        cout<<"\nThe profit of "<<i+1<<" object";
        cout<<object[i].profit<<"\n";

        cout<<"\nThe weight of "<<i+1<<" object";
        cout<<object[i].weight<<"\n";

    }

    for(int i = 0; i<n; i++){
        cout<<"\nThe profit by weight: ";
        cout<<object[i].pw<<"\n";
    }

}