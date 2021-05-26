project(TextEditor)

cmake_minimum_required(VERSION 3.0)

set(wxWidgets_ROOT_DIR "C:/sdks/wxWidgets-3.1.5")
set(wxWidgets_CONFIGURATION mswu)

find_package(wxWidgets REQUIRED richtext adv html core xml base)
include("${wxWidgets_USE_FILE}")

aux_source_directory(./src/ SRC)
include_directories(./include/)

add_executable(
	${PROJECT_NAME}
	${SRC}
)

target_link_libraries(
	${PROJECT_NAME}
	${wxWidgets_LIBRARIES}
)
