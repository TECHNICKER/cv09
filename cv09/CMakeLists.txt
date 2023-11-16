# CMakeList.txt : CMake project for cv09, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (cv09 "cv09.cpp" "cv09.h" "VectorMath.h" "VectorMath.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cv09 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
