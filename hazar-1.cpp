#include <bits/stdc++.h>
using namespace std;
int main()
{
   int i, space, rows, k = 0;
   cout << "Enter the number of rows: ";
   cin >> rows;
   cout << endl;
   for (i = 1; i <= rows; ++i, k = 0)
   {
      for (space = 1; space <= rows - i; ++space)
      {
         cout << "  ";
      }
      while (k != 2 * i - 1)
      {
         cout << "* ";
         ++k;
      }
      printf("\n");
   }
   return 0;
}