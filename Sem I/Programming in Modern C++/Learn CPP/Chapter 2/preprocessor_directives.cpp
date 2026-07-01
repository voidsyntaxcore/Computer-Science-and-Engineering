# include <iostream>
# include "math.h"
# define MAX

int main()
{
    # ifndef BOB // Runs only if BOB is NOT defined
        std::cout << "BOB is not Defined\n";
    # endif

    # ifdef MAX // Runs only if MAX is defined
        std::cout << "Max is Defined\n";
    # endif

    std::cout << "Sum of 2 + 7 = " << add(2,7);
    return 0;
}

// g++ preprocessor_directives.cpp math.cpp -o preprocessor_directives.exe
// ./preprocessor_directives.exe