#pragma once

#include <dragon/dg_backend.hpp>

#ifndef DRAGON_FULL_POWER
    DGAPI VKAPI_ATTR VkBool32 VKAPI_CALL dgVkValidationLayerDebugCalback(
        VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
        VkDebugUtilsMessageTypeFlagsEXT messageType,
        const VkDebugUtilsMessengerCallbackDataEXT* callbackData,
        void* userData
    );

	DGAPI VkResult dgCreateDebugUtilsMessengerEXT(
		VkInstance instance, 
		const VkDebugUtilsMessengerCreateInfoEXT* createInfo,
		const VkAllocationCallbacks* allocator,
		VkDebugUtilsMessengerEXT* debugMessenger
	);

	DGAPI void dgDestroyDebugUtilsMessengerEXT(
		VkInstance instance, 
		VkDebugUtilsMessengerEXT debugMessenger, 
		const VkAllocationCallbacks* allocator
	);

	DGAPI std::string dgConvertVkResultToString(VkResult result);
#endif