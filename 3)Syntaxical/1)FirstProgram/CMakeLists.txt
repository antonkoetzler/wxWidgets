cmake_minimum_required(VERSION 2.8)
project(FileSeperation)

set(wxWidgets_ROOT_DIR "C:/sdks/wx3.1.4/")
set(wxWidgets_CONFIGURATION mswu)

find_package(wxWidgets COMPONENTS core base REQUIRED)
include("${wxWidgets_USE_FILE}")

aux_source_directory(./src/ SRC_LIST)
include_directories(./include/ INCLUDE)

add_executable(
	${PROJECT_NAME}
	${SRC_LIST}
)

target_link_libraries(
	${PROJECT_NAME}
	${wxWidgets_LIBRARIES}
)
