#include<bits/stdc++.h>
using namespace std;

struct Library {
    int ind,books,sign_up,bpd,sum,spd,nb,s;
    // string s;
    vector<int>b;
    // int *b;
};

void swap(Library *a, Library *b)  
{  
    Library t = *a;  
    *a = *b;  
    *b = t;  
}  
  
/* This function takes last element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
int partition (vector<Library> arr, int low, int high)  
{  
    int pivot = arr[high].spd; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j].spd < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  
/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void quickSort(vector<Library> arr, int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  


void merge(vector<Library> arr, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    Library L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i].spd <= R[j].spd) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(vector<Library> arr, int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 




int main() {
    int b,l,d,i,j,k;
    ifstream fin;
    fin.open("d_tough_choices.txt");
    ofstream fout;
    fout.open("d_out.txt");
    fin>>b>>l>>d;
    vector<int> scores(b);
    for (i=0;i<b;++i)
        fin>>scores[i];
    vector<vector<int>>libs(l,vector<int>(6,0));
    vector<Library> lib(l);
    vector<bool> found(b,false);
    vector<int> arr(b,-1);
    for (i=0;i<l;++i) {
        int y;
        // string s="";
        for (j=0;j<3;++j) {
            fin>>libs[i][j];
            // fin>>y;
            // libs[i].push_back(y())
        }
        int sum=0,new_books=0;
        vector<int>abc;
        // int *b;
        int s=0;
        for (j=0;j<libs[i][0];++j) {
            int index;
            fin>>index;
            if (!found[index]) {
                found[index]=true;
                sum+=scores[index];
                ++new_books;
                // s+=to_string(index)+" ";
                abc.push_back(index);
                ++s;
            }
        }
        libs[i][3]=sum;
        libs[i][4]=sum/libs[i][1];
        lib[i].books=libs[i][0];
        lib[i].sign_up=libs[i][1];
        lib[i].bpd=libs[i][2];
        lib[i].sum=libs[i][3];
        lib[i].spd=libs[i][4];
        libs[i][5]=new_books;
        lib[i].nb=libs[i][5];
        lib[i].s=s;
        lib[i].b=abc;
        // s.erase(s.find_last_not_of(" \n\r\t")+1);
        // lib[i].s=s;
        lib[i].ind=i;
        // cout<<libs[i][3]<<'\n';
    }
    // quickSort(lib,0,l-1);
    // mergeSort(lib,0,l-1);
    // for (i=0;i<l;++i)
    //     cout<<lib[i].spd<<'\n';
    int x=d,c=0;
    vector<Library> a;
    for (i=0;i<l;++i) {
        if (x>=0 && lib[i].sign_up + lib[i].nb / lib[i].bpd <= x)  {
            x-=lib[i].sign_up;
            a.push_back(lib[i]);
            ++c;
        }
    }
    fout<<c<<'\n';
    for (i=0;i<;++i) {
        fout<<a[i].ind<<' '<<a[i].nb<<'\n';
        // fout<<a[i].s<<'\n';
        for (j=0;j<a[i].nb;++i) {
            fout<<a[i].b[j]<<' ';
        }
        fout<<"\b\n";
    }
    return 0;
}