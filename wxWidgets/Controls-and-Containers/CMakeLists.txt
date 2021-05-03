cmake_minimum_required(VERSION 2.8)

project(Controls-and-Containers)

set(wxWidgets_ROOT_DIR "C:/sdks/wxWidgets-3.1.5")
set(wxWidgets_CONFIGURATION mswu)

find_package(wxWidgets COMPONENTS core base REQUIRED)
include("${wxWidgets_USE_FILE}")

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
