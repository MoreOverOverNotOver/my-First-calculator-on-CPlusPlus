#include <iostream>

int main() {
    std::cout <<"Hello! It's calculator! Please, don't type character or word in number section!\n";
    float n1, n2;
    std::string op;
    std::string stateYesOrNo;
startAgain:
    std::cout <<"Type operator or 'help': \n";
    std::cin >> op;
    if (op == "help") {
        std::cout << "You can add (+), subtract (-), divided (/) or multiply (*) two numbers.\nRerun program to start calculate\n";
        goto startAgain;
    }
    std::cout <<"Enter first numbers: \n";
    std::cin >> n1;
    std::cout <<"Enter second numbers: \n";
    std::cin >> n2;

    if (op == "+") {
        std::cout <<"Result is: " << n1 + n2 << "\n";
    }
    else if (op == "-") {
        std::cout <<"Result is: " << n1 - n2 << "\n";
    }
    else if (op == "*") {
        std::cout <<"Result is: " << n1 * n2 << "\n";
    }
    else if (op == "/") {
        std::cout <<"Result is: "  << n1 / n2 << "\n";
    }
    else {
        std::cout <<"Error! Operator '"+op+"' does not exist.\n";
    }
    std::cout << "Do you want to continue? [Y/N]: ";
    std::cin >> stateYesOrNo;
    if (stateYesOrNo == "y" or stateYesOrNo == "Y" or stateYesOrNo == "YES" or stateYesOrNo == "Yes" or stateYesOrNo == "yes") {
        goto startAgain;
    }
    else if (stateYesOrNo == "n") {
        std::cout <<"See you again!";
        return 0;
    }
    return 0;
}
