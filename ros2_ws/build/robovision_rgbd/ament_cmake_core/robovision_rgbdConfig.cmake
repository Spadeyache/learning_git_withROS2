# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_robovision_rgbd_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED robovision_rgbd_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(robovision_rgbd_FOUND FALSE)
  elseif(NOT robovision_rgbd_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(robovision_rgbd_FOUND FALSE)
  endif()
  return()
endif()
set(_robovision_rgbd_CONFIG_INCLUDED TRUE)

# output package information
if(NOT robovision_rgbd_FIND_QUIETLY)
  message(STATUS "Found robovision_rgbd: 0.0.0 (${robovision_rgbd_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'robovision_rgbd' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT robovision_rgbd_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(robovision_rgbd_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${robovision_rgbd_DIR}/${_extra}")
endforeach()
