#include "Renderer.h"

#include <iostream>

void GLClearError()
{
    while (glGetError() != GL_NO_ERROR);
}

bool GLLogCall(const char* function, const char* file, int line)
{
    while (GLenum error = glGetError())
    {
        printf("[OpenGL Error] (0x%x): %s %s:%d\n", error, function, file, line);
        return false;
    }

    return true;
}