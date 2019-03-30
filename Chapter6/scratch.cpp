#include<iostream>
#include<vector>

class Token
{
    public:
        char kind;
        double value;
};



Token get_token(char in)
{
    Token t;
    double value = 0;
    switch (in)
    {
        case '+':
            t.kind = in;
            break;
        case '-':
            t.kind = in;
            break;
        case '*':
            t.kind = in;
            break;
        case '/':
            t.kind = in;
            break;
        case '(': case ')':
            t.kind = in;
            break;
        case '0': case '1': case '2': case '3': case '4': 
        case '5': case '6': case '7': case '8': case'9':
            t.kind = '8';
            std::cin.putback(in);
            std::cin >> value;
        default:
            break;
    }
    t.value = value;
    return t;
}

int main(){
    std::vector<Token> tokens;
    char in;
    while(std::cin >> in){
        if (in == 'q')
        {
            break;
        }
        Token t = get_token(in);
        tokens.push_back(t);
    }
    for(Token t : tokens){
        std::cout << t.kind << '\t' << t.value << '\n';
    }
}