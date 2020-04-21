#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct Player {
    int score;
    string name;
};
#include <bits/stdc++.h>
class Checker{
public:
  	// complete this method
    static int comparator(Player a, Player b)  {
	int n1 = a.name.length();
        char char_array_1[n1 + 1];

        int n2 = b.name.length();
        char char_array_2[n2 + 1];
        strcpy(char_array_1, a.name.c_str());
        strcpy(char_array_2, b.name.c_str());

        if(a.score < b.score || (!(b.score < a.score) && !lexicographical_compare(char_array_1, char_array_1 + n1, char_array_2, char_array_2 + n2)))
        return -1;
        else
        return 0;

    }
};




bool compare(Player a, Player b) {
    if(Checker::comparator(a,b) == -1)
        return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player player;
        player.name = name, player.score = score;
        players.push_back(player);
    }
    sort(players.begin(), players.end(), compare);
    for(int i = 0; i < players.size(); i++) {
        cout << players[i].name << " " << players[i].score << endl;
    }
    return 0;
}