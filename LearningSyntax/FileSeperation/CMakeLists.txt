cmake_minimum_required(VERSION 2.8)

project(OrganizedProgram)

aux_source_directory(./src/ SRC)
include_directories(./include/ INCLUDE)

add_executable(
	${PROJECT_NAME}
	${SRC}
)
