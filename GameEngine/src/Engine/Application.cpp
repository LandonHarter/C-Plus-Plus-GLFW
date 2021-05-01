#include <Headers/Engine.h>

GLFWwindow* window;

int main() {
    if (!glfwInit()) {
        std::cout << "Error Initializing GLFW" << std::endl;
        return -1;
    }

    window = CreateWindow(700, 500, "Window", false);

    if (glewInit() != GLEW_OK) return -1;

    Start();

    while (!glfwWindowShouldClose(window))
    {
        UpdateWindow(window);
        Update();
    }

    OnClose();
    CloseWindow(window);
    return 0;
}

GLFWwindow* GetWindow() {
    return window;
}