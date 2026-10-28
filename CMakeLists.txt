cmake_minimum_required(VERSION 3.23)

project(lob)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(lob)

target_compile_options(lob PRIVATE -Wall -Wextra)

target_sources(lob
	PRIVATE
	src/main.cpp
)

