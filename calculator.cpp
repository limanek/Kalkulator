#include <iostream>
#include <string>

std::string enter_number() {
    std::string text;
    std::cout << "number format e.g.: 'x + y'" << std::endl;
    std::getline(std::cin,text);
    return text;
}

int converter(std::string x, std::string sign, std::string y) {
    
    int x_con = std::stoi(x);
    std::cout << "x =" << x_con << ":" << std::endl;

    std::string sign_con = sign;
    std::cout << "sign =" << sign_con << ":" << std::endl;

    int y_con = std::stoi(y);
    std::cout << "y =" << y_con << ":" << std::endl;

    return 0;
}

std::string separation(std::string text) {
    std::string text_con = text;

    std::string x = text_con.substr(0, 1);
    std::cout << "x =" << x << ":" << std::endl;

    std::string sign = text_con.substr(2, 1);
    std::cout << "sign =" << sign << ":" << std::endl;

    std::string y = text_con.substr(4, 4);
    std::cout << "y =" << y << ":" << std::endl;

    converter(x,sign,y);
    return 0;
}

int start() {
    std::string text = enter_number();
    separation(text);
    return 0;
}

int main() {
    start();
    return 0;
}
