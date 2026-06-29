#include <iostream>
using namespace std;

int main()
{
    // Methods of variable initialization

    int a {5}; // direct-list-initialization, narrowing conversions throws compiler error
    int b = 4.5, c = 6; // copy-initialization, supports narrowing conversions
    int d {}; // value-initialization (empty braces)
    [[maybe_unused]] int e {3}; //[[maybe_unused]] : compiler doesn't show error if var unused
    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", e = " << e << '\n';
    

    // cin cout flushing
    
    char ch{};
    int num{};
    cout << "Enter an integer followed by a character (e.g. 5a): ";
    cin >> num >> ch; // Input "5a": 5 is read into num > 'a' remains in cin buffer > 'a' is read into ch.
    cout << num << ch;


    // Identifier naming conventions
    int val {}; // lowercase 
    int my_var_name {}; int my_fn_name (); // snakecase
    int myVarName {}; // Camelcase (conventional, best practice)


    return 0;
}
