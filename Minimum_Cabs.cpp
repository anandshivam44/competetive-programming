#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high, int start[])
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
            swap(&start[i], &start[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    swap(&start[i + 1], &start[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high, int start[])
{
    if (low < high)
    {

        int pi = partition(arr, low, high, start);

        quickSort(arr, low, pi - 1, start);
        quickSort(arr, pi + 1, high, start);
    }
}

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int start[t];
    int end[t];
    int count = 1;
    for (int i = 0; i < t; i++)
    {
        int n1;
        cin >> n1;
        int n2;
        cin >> n2;
        int n3;
        cin >> n3;
        int n4;
        cin >> n4;
        start[i] = n1 * 100 + n2;
        end[i] = n3 * 100 + n4;
    }
    // for (int i = 0; i < t; i++)
    // {
    //     cout << start[i] << " " << end[i] << endl;
    // }
    //cout << "\n";
    quickSort(start, 0, t - 1, end);
    for (int i = 0; i < t - 1; i++)
    {
        if (end[i] <= start[i + 1])
        {
            count = 1;
        }
        else
        {
            count++;
        }
    }

    // for (int i = 0; i < t; i++)
    // {
    //     cout << start[i] << " " << end[i] << endl;
    // }
    cout << count << "\n";

    return 0;
}
