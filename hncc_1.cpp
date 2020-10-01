    #include <bits/stdc++.h>
    #define PI 3.141
    using namespace std;
 
    double polygonArea(double X[], double Y[], int n)
    {
        double area = 0;
        int j = n - 1;
        for (int i = 0; i < n; i++)
        {
            area += (X[j] + X[i]) * (Y[j] - Y[i]);
            j = i;
        }
        return abs(area / 2.0);
    }
 
    double distance(double x1, double y1, double x2, double y2)
    {
        return sqrt(pow(x2 - x1, 2) * 1.0 + pow(y2 - y1, 2) * 1.0);
    }
 
    void test_case()
    {
        double r;
        int N;
        cin >> N >> r;
        double angle[N];
        double x[N];
        double y[N];
 
        for (auto i = 0; i < N; i++)
        {
            cin >> angle[i];
            angle[i] = (PI * angle[i]) / 180.0;
            x[i] = r * cos(angle[i]);
            y[i] = r * sin(angle[i]);
            // printf("%lf : %lf \n", x[i], y[i]);
        }
        double perimeter = 0;
        for (long i = 0; i < N; i++)
        {
            perimeter += distance(x[i], y[i], x[(i + 1) % N], y[(i + 1) % N]);
        }
        double area = 0;
        area = polygonArea(x, y, N);
        area = PI * (double)r * (double)r - area;
        // cout << perimeter<<" " <<area<< endl;
        printf("%.1f %.1f\n", perimeter, area);
    }
 
    int main()
    {
        cin.sync_with_stdio(false);
        cin.tie(0);
        int t;
        cin >> t;
        // cin >> t;
        for (int i = 1; i <= t; i++)
        {
            printf("Case #%d: ", i);
            test_case();
        }
        return 0;
    }