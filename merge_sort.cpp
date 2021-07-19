#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left_index, int mid_index, int right_index)
{

    int n1 = mid_index - left_index + 1;
    int n2 = right_index - mid_index;

    int left_array[n1];
    int right_array[n2];

    for (int i = 0; i < n1; i++)
        left_array[i] = arr[left_index + i];

    for (int i = 0; i < n1; i++)
        right_array[i] = arr[mid_index + 1 + i];

    int i = 0, j = 0;
    int k = left_index;

    while (i < n1 && j < n2)
    {
        if (left_array[i] <= right_array[j])
        {
            arr[k] = left_array[i];
            i++;
        }
        else
        {
            arr[k] = right_array[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = left_array[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right_array[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start_index, int end_index)
{
    if (start_index >= end_index)
    {
        return;
    }
    int mid_index = start_index + (end_index - start_index) / 2;
    mergeSort(arr, start_index, mid_index);
    mergeSort(arr, mid_index + 1, end_index);
    merge(arr, start_index, mid_index, end_index);
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
