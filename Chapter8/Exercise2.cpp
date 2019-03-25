#include <iostream>
#include <vector>

void print(std::string label, std::vector<int> numbers)
{
    for (auto value : numbers)
    {
        std::cout << label << value << '\n';
    }
}

int main()
{
    std::vector<int> numbers {1, 2, 3, 4, 5};
    std::string label {"Number: "};
    print(label, numbers);
}