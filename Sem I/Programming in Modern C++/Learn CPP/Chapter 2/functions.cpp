#include <iostream>


// Preprocessor
#define PI 3.14159


// Forward Declarations
namespace Math
{
    int add(int a, int b);
    int multiply(int a, int b);
    void greet();
    double areaOfCircle(double radius);
    int square(int x);
}


int main()
{
    Math::greet();

    // 2.4 Function arguments
    int x{5};
    int y{3};

    std::cout << "x = " << x << ", y = " << y << '\n';

    // Value-returning functions
    int sum{Math::add(x, y)};
    std::cout << "Sum: " << sum << '\n';

    int product{Math::multiply(x, y)};
    std::cout << "Product: " << product << '\n';

    // Namespace usage
    std::cout << "Square of " << x << " = " << Math::square(x) << '\n';

    // Preprocessor constant
    std::cout << "Area of circle (r = 2): " << Math::areaOfCircle(2.0) << '\n';

    return 0;
}


// Namespace
namespace Math
{    
    // Void functions
    void greet()
    {
        std::cout << "Welcome!\n";
    }


    // Value returning functions
    int add(int a, int b)
    {
        return a + b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    double areaOfCircle(double radius)
    {
        double area{PI * radius * radius}; // local variable "area": parameter "radius"
        return area;
    }

    int square(int x)
    {
        return x * x;
    }
}