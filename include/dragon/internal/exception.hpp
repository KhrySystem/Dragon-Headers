#pragma once

#include <exception>
#include <boost/exception/all.hpp>

typedef struct DgExceptionTag_T { } DgExceptionTag;
typedef boost::error_info<DgExceptionTag, const char*> DgExceptionInfo;

typedef struct DgBaseException_T: virtual boost::exception, virtual std::exception { } DgBaseException;

typedef DgBaseException dgGLFWInitializationFailedException;
typedef DgBaseException dgGLFWVulkanNotSupportedException;
typedef DgBaseException dgGLFWWindowCreationFailedException;
typedef DgBaseException dgVulkanInitializationFailedException;
typedef DgBaseException dgVulkanDebugUtilsMessengerEXTCreationFailedException;
typedef DgBaseException dgVulkanValidationLayerNotFoundException;
typedef DgBaseException dgVulkanExtensionLayerNotFoundException;