CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(Final-Project)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

ADD_SUBDIRECTORY(tests/googletest)

ADD_EXECUTABLE( main
    src/main.cpp
    src/restaurant.cpp
)
ADD_EXECUTABLE(test
      tests/test.cpp
 )

add_library(librect STATIC src/restaurant.cpp)
TARGET_LINK_LIBRARIES(test gtest_main librect)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
