#include<iostream>
#include<vector>

// Write a program to play a numbers guessing game.
// The user thinks of a number between 1 and 100 and the
// program asks questions to figure out what the number is
// (e.g. Is the number less than 50?) The program should be
// able to figure out the number after asking no more than 7
// questions. HINT: Use the < and <= operators and the
// if-else construct.

int main(){

int min = 0;
int max = 0;
int guess = 0;
int counter = 0;
std::string response;

std::cout << "Pick a min number: ";
std::cin >> min;

std::cout << "Pick a max number: ";
std::cin >> max;

guess = ((max + min) / 2)+1;

while(counter < 7){
    std::cout << "Is your pick less than " << guess << " , yes or no?: ";
    std::cin >> response;

    if (response=="yes"){
        max = guess-1;
    }else {
        min = guess+1;
    }
    guess = ((max + min) / 2)+1;
    counter += 1;

    if (max==min){
        std::cout << "You guessed: " << max << '\n';
        return 0;
    }else {
    }
}
std::cout << "I give up, bye!" << '\n';
}