#include <iostream>
#include <vector>
#include <limits>

void fibonacci(int x, int y, std::vector<int>& v, int n)
{
    int sum = 0;
    int oldSum = 0;
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
            sum = v[i-2] + v[i-1];
            if (sum > v[i-2])
            {
                v.push_back(sum);
            }
            else
            {
                int imax = std::numeric_limits<int>::max();
                std::cout << "Int overflow after " <<  v[i-2] << " (" << sum << ")";
                std::cout << ". Theoretical limit is:" << imax << '\n';
                std::cout << "Number of fibonacci numbers: " << i << '\n';
                break;
            }
            

            
        }
        i++;

    }
}

int main()
{
    std::vector<int> numbers;
    int x = 1;
    int y = 2;
    int n = 60;
    fibonacci(x, y, numbers, n);
}