#pragma once

#include <exception>
#include <boost/exception/all.hpp>
namespace Dragon {
	typedef struct ExceptionTag_T { } ExceptionTag;
	typedef boost::error_info<ExceptionTag, const char*> ExceptionInfo;

	typedef struct BaseException_T: virtual boost::exception, virtual std::exception { } BaseException;

	typedef BaseException GLFWInitializationFailedException;
	typedef BaseException GLFWVulkanNotSupportedException;
	typedef BaseException GLFWWindowCreationFailedException;
	typedef BaseException VulkanInitializationFailedException;
	typedef BaseException VulkanDebugUtilsMessengerEXTCreationFailedException;
	typedef BaseException VulkanValidationLayerNotFoundException;
	typedef BaseException VulkanExtensionLayerNotFoundException;
	typedef BaseException VulkanNoPhysicalDevicesFoundException;
};
