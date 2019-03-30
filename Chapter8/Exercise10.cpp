#include <iostream>
#include <vector>

/* Write a function maxv() that returns the largest element of 
    a vector argument.
*/

double findMax(const std::vector<double>& x)
{
    double temp = 0;
    for(auto y : x)
    {
        if(y > temp){temp = y;}
    }
    return temp;
}
int main()
{
    const std::vector<double> x {1, 2000000, 100, 1000, 10000, 4, 5, 2, 1000000, 1000000};
    double max = findMax(x);
    std::cout << max << '\n';
}