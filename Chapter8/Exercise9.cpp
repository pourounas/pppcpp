#include <iostream>
#include <vector>

/* Write a function that given two vector<double> price and weight
    computes a value (an "index") that is the sum of all price[i]*weight[i]
    Make sure to have weight.size() == price.size()
 */

void calculateIndex(const std::vector<double>& w, const std::vector<double> &p)
{
    double index = 0;
    for (auto i = 0; i < w.size(); i++)
    {
        index += w[i] * p[i];
    }
    std::cout << index << '\n';
}
int main()
{
    std::vector<double> index {};
    const std::vector<double> price {100.1, 98.5, 45.6, 30.56};
    const std::vector<double> weight {1, 2, 3, 4};
    calculateIndex(weight, price);
}