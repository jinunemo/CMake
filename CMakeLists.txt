cmake_minimum_required(VERSION 3.28.3)

project(OLAS VERSION 1.0)

configure_file(OLASConfig.h.in OLASConfig.h)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

