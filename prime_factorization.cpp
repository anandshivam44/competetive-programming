#include <bits/stdc++.h>
using namespace std;

void primeFactors(int n)
{
    vector<int> storeFactors;
    while (n % 2 == 0)
    {
        storeFactors.push_back(2);
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            storeFactors.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        storeFactors.push_back(n);
    }
    storeFactors.push_back(-1);
    int temp = storeFactors[0];
    int count = 0;
    int finalAnswer = 1;
    for (int i = 0; i < storeFactors.size(); i++)
    {
        //cout << "  " << storeFactors[i] << "  "<< " == " << temp << " is " << (storeFactors[i] == temp) << "\n";
        if (storeFactors[i] == temp)
        {
            count = count + 1;
        }
        else if (storeFactors[i] != temp)
        {
            //cout << " count is  " << count << " ";
            finalAnswer = finalAnswer * (1 + count);
            count = 1;
            temp = storeFactors[i];
        }
    }
    cout << finalAnswer << "\n";
}

/* Driver code */
int main()
{
    int n = 360;
    primeFactors(n);
    return 0;
}