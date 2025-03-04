#include <iostream>

int multi(int x, int y) {
    return x * y;
}
int takeAway(int x, int y) {
    return x - y;
}
int add(int x, int y) {
    return x + y;
}
int division(int x, int y) {
    return x / y;
}

int userValue() {
    std::cout << "Please enter your value : ";
    int userInput;
    std::cin >> userInput;
    
    return userInput;
}

char userValueMethod() {
    std::cout << "Please enter your method(-,+,x,/): ";
    char operation;
    std::cin >> operation;
    
    return operation;
}

int main()
{
    int x{userValue()};
    int y{userValue()};
    char operatore{userValueMethod()};
    
    switch (operatore) {
        case '*':
           std::cout << "Your answer multipled is: " << multi(x, y) << "\n";
            break;
        case '+':
            std::cout << "Your answer added is: " << division(x, y) << "\n";
            break;
        case '-':
            std::cout << "Your answer subtraction is: " << takeAway(x, y) << "\n";
            break;
        case '/':
            if(x & y != 0) {
            std::cout << "Your answer divided is: " << division(x, y) << "\n";
            } else {
                std::cout << "Your value is equal to zero. \n TRY AGAIN!";
            }
            break;
            default: 
                std::cout << "You entered a value is not supported. Try again!";
    }
    
    return 0;
}

