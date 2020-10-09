# Chef and his Garden

# Author: [Shivam Anand](https://www.linkedin.com/in/anandshivam44)

# DIFFICULTY:
EASY

# PREREQUISITES:
Conversion of Polar Co-ordinates to Rectangular Cordinates, Area of a Polygon, Distance Formula

# PROBLEM
![N|Solid](https://raw.githubusercontent.com/anandshivam44/Competetive_Programming/master/Untitled%20drawing.png)
Given a Polygon inside a Circle. Find Perimeter of the Polygon and find the are area of Circle that does not include Polygon.

# QUICK EXPLANATION
Find Distance between all points using Distance Formula. Add all of the distances to find perimeter
Find the Area of the Polygon using Shoelace Formula and then subtract it with Area of the Circle i.e. to obtain area of the shaded part.

# EXPLANATION
  - Convert angle in degrees to radians (only if your programming language uses radians to find sin and cos function) Use pi=3.141
  - Find corninates of all points (R sinθ, R cosθ)
  - Find Distance between consecutive points using distance formula 
  - Add all distances to find Perimeter
  - Find Area of Polygon using [Shoelace Formula](https://www.geeksforgeeks.org/area-of-a-polygon-with-given-n-ordered-vertices/)
  - Calculate Area outside Polygon : Area(Circle) - Area(Polygon)   Use pi=3.141
  - Print output correct to 1 decimal place


[details="Setter's Solution"]
    
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
[/details]
