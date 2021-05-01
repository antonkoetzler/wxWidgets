cmake_minimum_required(VERSION 2.8)

project(FirstCompile)

# Setting wxWidget's location
set(wxWidgets_ROOT_DIR "C:/sdks/wxWidgets-3.1.5")
set(wxWidgets_CONFIGURATION mswu)

# Using CMake's find_packge() to confirm wxWidget's location
find_package(wxWidgets COMPONENTS core base REQUIRED)
include("${wxWidgets_USE_FILE}")

add_executable(
	${PROJECT_NAME}
	FirstCompile.cpp
)

target_link_libraries(
	${PROJECT_NAME}
	${wxWidgets_LIBRARIES}
)
