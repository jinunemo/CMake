cmake_minimum_required(VERSION 3.28.3)

project(OLAS VERSION 1.0)

configure_file(OLASConfig.h.in OLASConfig.h)

add_executable(${PROJECT_NAME} main.cpp)

option(USE_ADDER "A simple library for adding 2 floats." ON)

if(USE_ADDER)
    list(APPEND EXTRA_LIBS adder)
    list(APPEND EXTRA_INCLUDES Adder/cpp)
endif()

add_subdirectory(Adder/cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR} ${EXTRA_INCLUDES})

target_link_libraries(${PROJECT_NAME} PRIVATE ${EXTRA_LIBS})
