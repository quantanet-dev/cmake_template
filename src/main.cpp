#include <core/core.hpp>

#include <iostream>
#include <cstdlib>
// #include <stdexcept>

int main()
{
    unify::Core instance{};

    try
    {
        instance.Run();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}