#include<vector>
#include<iostream>

int main(){
    std::vector<int> numbers;
    std::vector<int> primes;
    
    for(int i=2; i<150; i++) numbers.push_back(i);

    for (int s=0; s < numbers.size(); s++){
        // ignore 0 and 1
        if (s < 2) continue;
        // 2 is the first prime
        if (s==2) primes.push_back(s);
        else{
            bool check = true;
            // Check if number can be divided by any of the other primes
            for(int e : primes){
                if(s % e == 0){ 
                    check = false; 
                    break;
                }
            }
            if (check) primes.push_back(s);
        }
    }
    for(int p : primes){
        std::cout << p << " ";
    }
    std::cout << '\n';
}