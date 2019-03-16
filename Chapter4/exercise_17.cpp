#include<iostream>
#include<map>
#include<string>
#include<array>
#include<algorithm> //for min and max


// write a program that finds the min, max and mode
// of a sequence of strings

int main(){
    std::map<std::string, int> f;
    std::array<std::string, 5> words {"hello", "test", "hello", "goodbye", "lloeh"};
    std::string min = words[0];
    std::string max = words[0];
    std::string mode = "";
    int ff = 0;
    for(std::string w : words)
    {
        f[w] = f[w] + 1;
        min = std::min(min, w);
        max = std::max(max, w);
    }
    for (auto it = f.begin(); it != f.end(); it++)
    {
        if (it->second  > ff )
        {
            mode = it->first;
            ff = it->second;
        }
    }
    std::cout << "Min: " << min << '\t' << "Max: " << max << '\t' << "Mode: " << mode << '\n';
}