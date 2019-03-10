#include<iostream>

int main(){
    double grains = 0;
    int square = 1;
    int squareGrains = 0;
    int acummGrains = 0;

    std::cout << "How many grains'd you like? ";
    std::cin >> grains;

    while( acummGrains < grains){
        squareGrains = square * square;
        acummGrains += squareGrains;
        std::cout << "Current: " << squareGrains << '\t' << "Accumulated: " << acummGrains << '\t' << "Squares: " << square << '\n';
        square += 1;
    }
    std::cout << "Squares:" << square << '\n';
}