/*  Circle and Area
    Sally Coder
    Sept. 16, 2016
    Code translated to c++
    May, 2022
*/

#include <iostream>
using namespace :: std;
const int PI = 3.14159;

int main(void)
{
    double area = 0.0, radius = 0.0;
    cout << "Enter radius: ";
    //printf("Enter radius: ");
    cin >> radius;
    //scanf("%lf", &radius);
    area = PI * radius * radius;
    cout << "radius of " << radius << " meters ; area is " << area << " sq. meters" << endl;
    //printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
    return 0;
}
