cmake_minimum_required(VERSION 3.14)
project(
    user_intent
    LANGUAGES CXX
    )
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LIB_NAME user_intent_lib)
set(HDR
inc/user_intent.hxx
inc/database.hxx
)
set(SRC
src/user_intent.cxx
)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
if(UNIT_TEST)
add_definitions(-DUNIT_TEST)
add_subdirectory(test)
add_library(${LIB_NAME} ${HDR} ${SRC})
else()
add_executable(${PROJECT_NAME} ${HDR} ${SRC})
endif(UNIT_TEST)


