#pragma once

#include <core/window.hpp>
#include <core/vulkan/graphics_pipeline.hpp>

#define vertShaderPath "shaders/simple_shader.vert.spv"
#define fragShaderPath "shaders/simple_shader.frag.spv"

namespace unify
{
    class Core
    {
    public:
        const int WIDTH = 1280;
        const int HEIGHT = 720;

        void Run();

    private:
        Window window{WIDTH, HEIGHT, "Hello Vulkan!"};
        GraphicsPipeline graphicsPipeline{vertShaderPath, fragShaderPath};
    };
};