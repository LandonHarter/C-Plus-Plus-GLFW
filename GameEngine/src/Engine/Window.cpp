#include <Headers/Engine.h>

GLFWwindow* CreateWindow(int width, int height, const char* title, bool fullscreen) {
	GLFWwindow* window = glfwCreateWindow(width, height, title, fullscreen ? glfwGetPrimaryMonitor() : NULL, NULL);
	glfwMakeContextCurrent(window);
	return window;
}

void UpdateWindow(GLFWwindow* window) {
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);
	glfwPollEvents();
}

void CloseWindow(GLFWwindow* window) {
	OnClose();
	glfwTerminate();
}

void SetFullscreen(GLFWwindow* window, bool mode) {
	int width;
	int height;
	glfwGetWindowSize(window, &width, &height);
	glfwSetWindowMonitor(window, mode ? glfwGetPrimaryMonitor() : NULL, 100, 100, width, height, -1);
}

void SetWindowTitle(GLFWwindow* window, const char* title) {
	glfwSetWindowTitle(window, title);
}

void SetBackground(glm::vec4 color) {
	glClearColor(color.r, color.g, color.b, color.a);
}