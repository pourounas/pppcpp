#include<iostream>
#include<vector>
#include<algorithm> // find is in algorithm

// Read a sequence of double values into a vector
// Think of each value as the distance between 2 cities
// along a given route. Compute and print the total 
// distance (the sum of all distances). Find and print
// the smallest and greatest distance between two
// neighbouring cities. Find and print the mean distance
// between neighbouring cities.

int main(){
    // initialise our vector
    std::vector<double> distances;

    // read in sequence of distances
    for(double distance; std::cin >> distance;){
        distances.push_back(distance);
    }
    double total_distance = 0;
    std::cout << "You entered: ";
    // Calculate the total distance
    for (double distance : distances){
        std::cout << distance << " ";
        total_distance += distance;
    }
    std::cout << '\n' << "Total distance: " << total_distance << '\n';

    //calculate the mean distance
    std::size_t count = distances.size();
    double mean = total_distance / count;

    // find shortest and longest distances
    // Not using a min/max from standard library on purpose
    // we are interested in neighbouring cities so we can't sort
    double min, max = 0;
    for (double distance : distances){
        if (min == 0 || min > distance){
            min = distance;
        }
        else if (max == 0 || max < distance){
            max = distance;
        }
        else{}
    }
    std::cout << "Shortest distance: " << min << '\t' << "Longest distance: " << max << std::endl;
}