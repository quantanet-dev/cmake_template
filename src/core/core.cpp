#include <core/core.hpp>

namespace unify
{
    void Core::Run()
    {
        while (!window.shouldClose())
        {
            glfwPollEvents();
        };
    };
};