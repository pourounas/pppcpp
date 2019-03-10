#include<vector>
#include<map>
#include<iostream>

int main(){
    std::vector<int> numbers {10,2,3,4,5,6,6,6,7,7,8,8,1};
    std::map<int, int> frequency;
    int f = 0;
    int mode = 0;
    for(int number : numbers){
        frequency[number] = frequency[number] + 1;
    }
    for (auto it=frequency.begin(); it != frequency.end(); it++){
        if (it->second > f){
            mode = it->first;
            f = it->second;
        }
    }
    std::cout << "Mode: " << mode <<" .Appears " << f << '\n';
}