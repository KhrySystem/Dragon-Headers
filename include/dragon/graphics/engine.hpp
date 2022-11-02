#pragma once

struct Engine {
	VkInstance vkInstance;
	std::vector<GLFWwindow*> windows;
};

DGAPI DgBool32 createWindow(int width, int height, std::string title);