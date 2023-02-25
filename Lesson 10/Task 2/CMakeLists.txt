cmake_minimum_required(VERSION 3.22.2)
project(cmake_project_two)
file(GLOB cmake_file 
	"*.h"
	"*.cpp"
)
add_executable(cmake_launch ${cmake_file})