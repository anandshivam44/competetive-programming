#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
#include <sstream> // for string streams
#include <string>
#define REP(i, n) for (int i = 0; i < (n); i++)

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool status[n + 1] = {false}; // 0 th index left not considered
        int start_pointer = 2;
        string str = "";
        int c = 0;
        vector<int> container;
        container.push_back(1);
        bool work_on_pointer = true;
        while (work_on_pointer)
        {
            container.clear();
            container.push_back(1);
            for (int i = start_pointer; i <= n; i++)
            {
                bool k = true;
                for (int j = 0; j < container.size(); j++)
                {
                    if (!(gcd(i, container[j]) == 1))
                    {
                        k = false;
                    }
                }
                if (k == true && status[i] == false)
                {
                    container.push_back(i);
                    status[i] = true;
                }
                //
                for (int j = 2; j <= n; j++) //search for next start pointer
                {
                    if (status[j] == false)
                    {
                        start_pointer = j;
                        break;
                    }
                }
            }
            str += to_string(container.size()) + " ";
            for (int j = 0; j < container.size(); j++)
            {
                str += (to_string(container[j])) + " ";
            }
            str += "\n";
            c++;

            bool temp = true;
            for (int j = start_pointer; j <= n; j++) //search for next start pointer
            {
                if (status[j] == false)
                {
                    start_pointer = j;
                    work_on_pointer = true;
                    break;
                }
                else
                {
                    work_on_pointer = false;
                }
            }
        }

        //cout << "Final Answer\n";
        cout << c << "\n"
             << str;
    }

    return 0;
}
