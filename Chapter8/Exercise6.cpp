#include <vector>
#include <iostream>

/* Write versions of the functions from exercise 5, buth with a vector<string> */

void print(const std::vector<std::string>& v)
{
    for (auto i : v)
    {
        std::cout << i << ',';
    }
    std::cout << '\n';
}

void reverse(std::vector<std::string>& word)
{
    std::vector<std::string> w;
    int l = word.size() - 1;
    while (l >= 0)
    {
        w.push_back(word[l]);
        l--;
    }
    print(w);
}

void reverse_in_place(std::vector<std::string> w)
{
    std::string temp;
    int l = w.size() - 1;
    for(int i = 0; i < (l / 2) + 1; i++)
    {
        temp = w[l - i];
        w[l - i] = w[i];
        w[i] = temp; 
    }
    print(w);
}

int main()
{
    std::vector<std::string> v {"hello", "there", "stranger"};
    reverse(v);
    reverse_in_place(v);
;
}