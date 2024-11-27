#include <glad/gl.h>
#include <glfw/glfw3.h>

#include <iostream>
#include <vector>
#include <string>

#ifdef _WIN32
#define PLATFORM "Windows"
#elif __APPLE__
#define PLATFORM "macOS"
#endif

using namespace std;

vector<string> CheckPlatform()
{
    cout << "PLATFORM: \n\t" << PLATFORM << endl;

    vector<string> supportedAPIs;

    if (glfwVulkanSupported() != GLFW_TRUE)
    {
        supportedAPIs = {">=OpenGL 4.1"};
    }
    supportedAPIs = {">=OpenGL 4.1", ">=Vulkan 1.3"};

    cout << "GRAPHICS API(s):"
         << endl;

    for (int i = 0; i < supportedAPIs.size(); i++)
    {
        cout << "\t" << supportedAPIs[i] << endl;
    }

    int glVersion = gladLoadGL(glfwGetProcAddress);
    // int glVersion = gladLoadVulkan(glfwGetProcAddress);

    int major = GLAD_VERSION_MAJOR(glVersion);
    int minor = GLAD_VERSION_MINOR(glVersion);

    printf("Loaded OpenGL version %d.%d\n", major, minor);

    return supportedAPIs = {};
};