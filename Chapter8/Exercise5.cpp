#include <vector>
#include <iostream>
/*
 Write two functions that reverse the order of elements in a vector<int>
For example, 1, 3, 5, 7, 9 becomes 9, 7, 5, 3, 1. The first reverse
function should produce a new vector with the reversed sequence, leaving
its original vector unchanged. The other reverse function should reverse
the elemtents of its vector without using any other vectors (hint: swap)
*/

void print(const std::vector<int>& v)
{
    for (auto i : v)
    {
        std::cout << i << ',';
    }
    std::cout << '\n';
}

void reverse_in_place(std::vector<int>& v)
{
    int temp;
    int l = v.size()-1;
    for (int i = 0; i < (l/2)+1; i++)
    {
        temp = v[l-i];
        v[l-i] = v[i];
        v[i] = temp;
    }
    print(v);
}

void reverse(const std::vector<int>& v)
{
    std::vector<int> vv;
    int l = v.size();
    while (l > 0)
    {
        vv.push_back(v[l-1]);
        l--;
    }
    print(vv);
}

int main()
{
    std::vector<int> v {1, 3, 5, 7, 9};
    reverse(v);
    reverse_in_place(v)
;
}