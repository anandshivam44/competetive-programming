#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin>>t;
    while(t-- >0){
        long long int n ; cin>>n;
        set <long long int> s;
        long long int x;
        for(int i=0; i<n ;i++){
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
	
    }
    return 0;
}