// CPP code for range maximum query and updates
#include <bits/stdc++.h>
using namespace std;

// A utility function to get the
// middle index of given range.
int getMid(int s, int e)
{
    return s + (e - s) / 2;
}
int MaxUtil(int *st, int ss, int se, int l,
            int r, int node)
{
    // If segment of this node is completely
    // part of given range, then return
    // the max of segment
    if (l <= ss && r >= se)
        return st[node];

    // If segment of this node does not
    // belong to given range
    if (se < l || ss > r)
        return -1;

    // If segment of this node is partially
    // the part of given range
    int mid = getMid(ss, se);

    return max(MaxUtil(st, ss, mid, l, r,
                       2 * node + 1),
               MaxUtil(st, mid + 1, se, l,
                       r, 2 * node + 2));
}

// void updateValue(int arr[], int* st, int ss, int se,
// 				int index, int value, int node)
// {
// 	if (index < ss || index > se)
// 	{
// 		cout << "Invalid Input" << endl;
// 		return;
// 	}

// 	if (ss == se)
// 	{
// 		// update value in array and in segment tree
// 		arr[index] = value;
// 		st[node] = value;
// 	}
// 	else {
// 			int mid = getMid(ss, se);

// 			if (index >= ss && index <= mid)
// 				updateValue(arr, st, ss, mid, index,
// 							value, 2 * node + 1);
// 			else
// 				updateValue(arr, st, mid + 1, se,
// 							index, value, 2 * node + 2);

// 			st[node] = max(st[2 * node + 1],
// 					st[2 * node + 2]);
// 	}
// 	return;
// }
int getMax(int *st, int n, int l, int r)
{
    if (l < 0 || r > n - 1 || l > r)
    {
        printf("Invalid Input");
        return -1;
    }

    return MaxUtil(st, 0, n - 1, l, r, 0);
}

int constructSTUtil(string arr, int ss, int se,
                    int *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);

    st[si] = max(constructSTUtil(arr, ss, mid, st,
                                 si * 2 + 1),
                 constructSTUtil(arr, mid + 1, se,
                                 st, si * 2 + 2));

    return st[si];
}
int *constructST(string arr, int n)
{
    int x = (int)(ceil(log2(n)));
    int max_size = 2 * (int)pow(2, x) - 1;
    int *st = new int[max_size];
    constructSTUtil(arr, 0, n - 1, st, 0);
    return st;
}

// Driver code
int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11};
    string a = "abcdefghijk";
    int n = sizeof(arr) / sizeof(arr[0]);
    int *st = constructST(a, a.length());
    cout << "Max of values in given range = "
         << getMax(st, a.length(), 0, 10) << endl;
    return 0;
}
