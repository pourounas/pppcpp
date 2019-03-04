#include<iostream>
#include<algorithm> // std::find, sort are in here
#include<vector>
#include<string>
#include<functional> // std::bind 

// compute mean and median temperatures
// we define median of a sequence as "a number"
// so that exactly as many elements come before it 
// in the sequence as they come after it.
int main(){
    std::vector<double> temps = {45, 44, 43, 50}; // temperatures
    for (double temp; std::cin >> temp;){ // read into temp
        temps.push_back(temp); // put tempt into vector
    }
    // compute mean temperature
    double sum = 0;
    std::cout << "Temperatures:" << '\n';
    for (double temp : temps){
        std::cout << temp << '\t';
        sum += temp;
    }
    std::cout << '\n' << '\n';

    double average = sum / temps.size();
    std::cout << "Average temperature:" << " " << average << '\n';

    // sort temperatures
    std::sort(temps.begin(), temps.end());
    std::size_t numOfTemps = temps.size();
    std:: cout << "Sorted Temperatures" << '\n';
    for(double t : temps){
        std::cout << t << '\t';
    }
    std::cout << '\n';
    double median = 0;
    if (numOfTemps % 2 != 0){
        // odd number of elements
        median = temps[numOfTemps/2];
    }else{

        median = (temps[numOfTemps/2] + temps[(numOfTemps/2) - 1]) / 2;
    }
    std::cout << "Median temperature" << " " << median << '\n';
    return 0;
}