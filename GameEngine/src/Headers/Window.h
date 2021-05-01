#pragma once
#include <Headers/Engine.h>

GLFWwindow* CreateWindow(int width, int height, const char* title, bool fullscreen);
void UpdateWindow(GLFWwindow* window);
void CloseWindow(GLFWwindow* window);
void SetFullscreen(GLFWwindow* window, bool mode);
void SetWindowTitle(GLFWwindow* window, const char* title);
void SetBackground(glm::vec4 color);