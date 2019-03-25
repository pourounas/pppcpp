#include <iostream>
#include <vector>

void fibonacci(int x, int y, std::vector<int>& v, int n)
{
    int sum = 0;
    int i = 0;
    while( i < n)
    {
        if (i==0) 
        {
            v.push_back(x);
            sum = x;
        }
        else if (i==1) 
        {
            v.push_back(y);
            sum = y;
        }
        else
        {
            v.push_back(v[i-2] + v[i-1]);
        }
        i++;

    }
}

int main()
{
    std::vector<int> numbers;
    int x = 1;
    int y = 2;
    int n = 30;
    fibonacci(x, y, numbers, n);
    for (auto v : numbers)
    {
        std::cout << v << ", ";
    }
    std::cout << '\n';

}