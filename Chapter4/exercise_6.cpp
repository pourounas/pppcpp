#include <iostream>
#include<vector>
#include<map>
#include <stdexcept>      // std::out_of_range
#include <iostream>       // std::cerr

/* Make a vector holding the ten string values "zero", "one", ... "nine".
Use that in a program that converts a digit to its correspoding spelled-out value
e.g. the input 7 gives "seven". Have the same program, using the same input loop
convert spelled-out numbers into their digit form; e.g. "seven" prints 7. */

int main(){
    // Read about map (dictionary) here
    // https://www.moderncplusplus.com/map/
    std::vector<std::string> words {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "teen"};
    std::map<std::string,int> dictionary {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9},
    };
    for(std::string word : words){
        // map::find will search for they, if it finds it 
        // an iterator is returned, if not then a map::end is returned instead (.end())
        //http://www.cplusplus.com/reference/map/map/find/
        std::map<std::string,int>::iterator it = dictionary.find(word);
        if (it == dictionary.end()){
            std::cout << "I don't understand " << word << '\n';
        }else{
            // the iterator has to two members, first(key), and second (Value)
            std::cout << it->first << '\n';
        }
    }
    for(std::string word : words){
        // map::find will search for they, if it finds it 
        // an iterator is returned, if not then a map::end is returned instead (.end())
        //http://www.cplusplus.com/reference/map/map/find/
        std::map<std::string,int>::iterator it = dictionary.find(word);
        if (it == dictionary.end()){
            std::cout << "I don't understand " << word << '\n';
        }else{
            // the iterator has to two members, first(key), and second (Value)
            std::cout << it->second << '\n';
        }
    }
}