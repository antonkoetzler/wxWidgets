project(Buttons)
cmake_minimum_required(VERSION 2.8)

# Settings windows wxWidgets location
set(wxWidgets_ROOT_DIR "C:/sdks/wxWidgets-3.1.4")
set(wxWidgets_CONFIGURATION mswu)

# (Mainly for Ubuntu) find_package and setting wx include dir
find_package(wxWidgets COMPONENTS core base REQUIRED)
include("${wxWidgets_USE_FILE}")

# include and src directories
aux_source_directory(./src/ SRC)
include_directories(./include/ INCLUDE)

add_executable(
	${PROJECT_NAME}
	${SRC}
)

target_link_libraries(
	${PROJECT_NAME}
	${wxWidgets_LIBRARIES}
)

