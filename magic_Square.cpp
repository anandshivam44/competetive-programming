#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
const ll mod = 1000000007;
const ll inf = 1e18;
#define all(x) begin(x), end(x)
#define loop(i, n) for (int i = 0; i < n; i++)
#define print_array(arr)                                         \
    loop(z, sizeof(arr) / sizeof(arr[0])) cout << arr[z] << " "; \
    cout << "\n"
#define print_vector(vvv)                      \
    loop(z, vvv.size()) cout << vvv[z] << " "; \
    cout << "\n"
#define print_vector_pair(vvv)                                             \
    loop(z, vvv.size()) cout << vvv[z].first << " " vvv[z].second << "\n"; \
    cout << "\n"
#define fill_my(arr, q) fill(all(arr), q)
#define N 3

void displayMatrix(int mat[N][N]);

void multiply(int arr[][N],
              int mat2[][N], int res[][N])
{
    // int res[3][3];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < j; j++)
    //     {
    //         res[i][j]=0;
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < 3; k++)
                res[i][j] += arr[i][k] *
                             mat2[k][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < j; j++)
        {
            arr[i][j] = res[i][j];
        }
    }
}
void rotateMatrix(int mat[][N])
{
    // Consider all squares one by one
    for (int x = 0; x < N / 2; x++)
    {
        // Consider elements in group of 4 in
        // current square
        for (int y = x; y < N - x - 1; y++)
        {
            // store current cell in temp variable
            int temp = mat[x][y];

            // move values from right to top
            mat[x][y] = mat[y][N - 1 - x];

            // move values from bottom to right
            mat[y][N - 1 - x] = mat[N - 1 - x][N - 1 - y];

            // move values from left to bottom
            mat[N - 1 - x][N - 1 - y] = mat[N - 1 - y][x];

            // assign temp to left
            mat[N - 1 - y][x] = temp;
        }
    }
}

// Function to print the matrix
void displayMatrix(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%2d ", mat[i][j]);

        printf("\n");
    }
    printf("\n");
}

int find_abs(int a[][N], int b[][N])
{
    int s = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            s += abs(a[i][j] - b[i][j]);
        }
    }
    return s;
}

int main()
{
    // clock_t time_req;
    // time_req = clock();
    cin.sync_with_stdio(false);
    cin.tie(0);
    int answer = 0;
    int minimum = INT_MAX;
    int input[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> input[i][j];
            // cout << input[i][j] << " ";
        }
        // cout << endl;
    }
    // cout << endl;
    int arr[3][3] = {
        {8, 3, 4},
        {1, 5, 9},
        {6, 7, 2}};
    int I[3][3] = {
        {0, 0, 1},
        {0, 1, 0},
        {1, 0, 0}};

    //displayMatrix(arr);

    for (int i = 0; i < 4; i++)
    {
        minimum = min(minimum, find_abs(arr, input));
        // cout << endl
        //      << minimum << "    " << find_abs(arr, input);
        rotateMatrix(arr);
        //displayMatrix(arr);
    }
    int ans[3][3];
    multiply(arr, I, ans);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = ans[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        minimum = min(minimum, find_abs(arr, input));
        // cout << "\n\n"
        //      << minimum << "    " << find_abs(arr, arr) << "\n\n";

        rotateMatrix(arr);
        //displayMatrix(arr);
    }

    cout << minimum << endl;
    //time_req = clock() - time_req;
    // cout << "\nProcessor time " << (float)time_req / CLOCKS_PER_SEC<< " sec" << endl;
    return 0;
}
