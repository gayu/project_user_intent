cmake_minimum_required(VERSION 3.14)

find_package(GTest REQUIRED)
#pkg_check_modules(GMock REQUIRED "gmock")

include_directories(${GTEST_INCLUDE_DIRS})
set(UT_BIN user_intentUT)

set(SRC
    user_intent_UT.cpp
    main.cpp
)

set(LIBS_TEST
    ${Boost_LIBRARIES}
    ${GTEST_BOTH_LIBRARIES}
    ${GMOCK_LIBRARIES}
    GTest::GTest
    GTest::Main
    gmock
)
add_executable(${UT_BIN} ${SRC})

target_include_directories( ${UT_BIN} PUBLIC
		            ${GTEST_INCLUDE_DIRS}
                            ${GMOCK_INCLUDE_DIRS}
)
target_link_libraries(${UT_BIN} PUBLIC
                      user_intent_lib
                      ${LIBS_TEST}
)
