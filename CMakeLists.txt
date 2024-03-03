CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(Final-Project)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

# Add the include directory for libqrencode
include_directories(
    ${CMAKE_SOURCE_DIR}/external/libqrencode/include
    ${CMAKE_SOURCE_DIR}/src
)

# Find and link against the libqrencode library
find_library(QRENCODE_LIB qrencode HINTS ${CMAKE_SOURCE_DIR}/external/libqrencode/lib)

# Test QRCode backend code
ADD_EXECUTABLE(QRCodeGenerator tests/testQRCode.cpp)

# Testing Testing everything is good
ADD_EXECUTABLE(QRCodeRestaurant
    tests/testQRCodeVRes.cpp
    src/restaurant.cpp
)

# Link against libqrencode
target_link_libraries(QRCodeGenerator PRIVATE ${QRENCODE_LIB})
target_link_libraries(QRCodeRestaurant PRIVATE ${QRENCODE_LIB})

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
