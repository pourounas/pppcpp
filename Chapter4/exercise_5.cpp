#include<iostream>
#include<vector>
#include <limits>

/* Write a program that performs as a very simple calculator
Your calculator should be able to handle the four basic math 
operations - add, subtract, multiply  and divide - on two input 
values. Your program should prompt the user to enter three 
arguments: two double values and a character tp represent an 
operation. If the entry requirements are 35.6, 24.1 and '+', 
the program output should be "The sum of 35.6 and 24.1 is 59.7". */


char readOperator(char op, std::string inputMsg, std::string errorMsg){
    std::cout << inputMsg;
    while (!(std::cin >> op)){
        // .clear clears the error flag on cin 
        // (so that future I/O operations will work correctly)
        std::cin.clear();
        // numeric_limits is a template class in which a max() function
        // for the integral type std::streamsize is defined.
        // http://en.cppreference.com/w/cpp/types/numeric_limits for more.
        // You are effectively telling cin to skip to the new line (\n) while
        // ignore a certain number of characters (returned by numeric_limit's max).
        // you HAVE to specify the number of characters to ingore, it can't 
        // simply skip to the new line.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << errorMsg << '\n';
        std::cout << inputMsg;
    }
    return op;
}

double readNumber(double num, std::string inputMsg, std::string errorMsg){
    std::cout << inputMsg;
    while (!(std::cin >> num)){
        // .clear clears the error flag on cin 
        // (so that future I/O operations will work correctly)
        std::cin.clear();
        // numeric_limits is a template class in which a max() function
        // for the integral type std::streamsize is defined.
        // http://en.cppreference.com/w/cpp/types/numeric_limits for more.
        // You are effectively telling cin to skip to the new line (\n) while
        // ignore a certain number of characters (returned by numeric_limit's max).
        // you HAVE to specify the number of characters to ingore, it can't 
        // simply skip to the new line.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << errorMsg << '\n';
        std::cout << inputMsg;
    }
    return num;
}

int main(){
    char op;
    double numA = 0;
    double numB = 0;
    std::string opSum = "sum";
    std::string opSub = "difference";
    std::string opProd = "product";
    std::string opDiv = "division";
    std::string numMessage = "Enter a number please: ";
    std::string opMessage = "Pick your operator please: ";
    std::string errorMessage = "Not a valid input, please try again.";
    
    numA = readNumber(numA, numMessage, errorMessage);
    numB = readNumber(numB, numMessage, errorMessage);
    while((op != '+') && (op != '-') && (op!='/') && (op !='*')){
        op = readOperator(op, opMessage, errorMessage);
    }
    if (op == '+'){
        std::cout << "The " << opSum << " of " << numA << " and " << numB << " is " << numA + numB << '\n';
    }else if (op =='-'){
        std::cout << "The " << opDiv << " of " << numA << " and " << numB << " is " << numA - numB << '\n';
    }else if (op == '/'){
        std::cout << "The " << opDiv << " of " << numA << " and " << numB << " is " << numA / numB << '\n';
    }else
    {
        std::cout << "The " << opProd << " of " << numA << " and " << numB << " is " << numA * numB << '\n';
    }
    
}