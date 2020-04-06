#include <bits/stdc++.h>
using namespace std;
struct I {
    int s, e, i;
};
bool sortbystarting(I a, I b) {
    return a.s < b.s;
}
int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t, c = 0, i, n;
    cin >> t;
    string o;
    while (c++ < t) {
        cin >> n;
        bool flag = false;
        vector<I> in(n);
        int s, e, cameron, jamie;
        for (i = 0; i < n; ++i) {
            cin >> s >> e;
            in[i].s = s;
            in[i].e = e;
            in[i].i = i;
        }
        sort(in.begin(), in.end(), sortbystarting);
        vector<string> seq(n);
        seq[in[0].i] = "C";
        cameron = in[0].e;
        seq[in[1].i] = "J";
        jamie = in[1].e;
        string S;
        for (i = 2; i < n; ++i) {
            if (cameron <= in[i].s) {
                cameron = in[i].e;
                seq[in[i].i] = "C";
            }
            else if (jamie <= in[i].s) {
                jamie = in[i].e;
                seq[in[i].i] = "J";
            }
            else {
                S = "Case #" + to_string(c) + ": " + "IMPOSSIBLE\n";
                flag = true;
            }
        }
        if (!flag) {
            for (i = 0; i < n; ++i)
                S += seq[i];
            o += "Case #" + to_string(c) + ": " + S + "\n";
        }
        else
            o += S;
    }
    cout << o;
}