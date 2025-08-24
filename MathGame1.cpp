#include <iostream>
#include <string>
using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int fib(int n) {
    if (n < 2) {
        return 1;
    } else {
        return fib(n - 2) + fib(n - 1);
    }
}

int main() {
    int num;
    string choice;
    string quit;

    cout << "==============================" << endl;
    cout << "   Welcome to Maths Game 1!   " << endl;
    cout << "==============================" << endl;

    while (true) {
        cout << "\nChoose an option:" << endl;
        cout << "1. Fibonacci" << endl;
        cout << "2. Factorial" << endl;
        cout << "Type 'exit' to quit the game." << endl;

        cin >> choice;

        if (choice == "exit" || choice == "Exit") {
            cout << "Thanks for playing! Goodbye :)" << endl;
            break;
        }

        if (choice == "1" || choice == "Fibonacci" || choice == "fibonacci") {
            cout << "Enter a position in Fibonacci sequence: ";
            cin >> num;
            cout << "The number at position " << num 
                 << " is " << fib(num) << endl;
        } 
        else if (choice == "2" || choice == "Factorial" || choice == "factorial") {
            cout << "Enter a number: ";
            cin >> num;
            cout << "The factorial of " << num 
                 << " is " << factorial(num) << endl;
        } 
        else {
            cout << "Invalid choice! Please try again." << endl;
            continue;
        }

        cout << "\nDo you want to continue playing? (yes/no): ";
        cin >> quit;
        if (quit == "no" || quit == "No") {
            cout << "Thanks for playing! Goodbye :)" << endl;
            break;
        }
    }

    return 0;
}
