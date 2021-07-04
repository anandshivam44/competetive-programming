#include <bits/stdc++.h>
using namespace std;
class ThreeDimensionalShape
{
public:
    int height = 2;
    int width = 3;
};
class Cube : public ThreeDimensionalShape
{
public:
    int depth = 4;
    Cube(int h, int w, int d)
    {
        height = h;
        width = w;
        depth = d;
    }
    Cube(int d)
    {
        depth = d;
    }

    int calculate_surface_area()
    {
        return 2 * (width * depth + height * depth + height * width);
    }
    int calculate_volume()
    {
        return height * width * depth;
    }
};

int main()
{
    Cube cube(10, 20, 30);
    cout << "Surface Area  is : " << cube.calculate_surface_area() << endl;
    cout << "Volume is : " << cube.calculate_volume() << endl;

    return 0;
}
