cmake_minimum_required(VERSION 3.0)

project(wxTest)

set(wxWidgets_ROOT_DIR "C:/sdks/wx3.1.4/")
set(wxWidgets_CONFIGURATION mswu)

find_package(wxWidgets COMPONENTS core base REQUIRED)
include("${wxWidgets_USE_FILE}")

add_executable(
	wxTest
	myapp.cpp
)

target_link_libraries(
	${PROJECT_NAME}
	${wxWidgets_LIBRARIES}
)
