# CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
CMAKE_MINIMUM_REQUIRED(VERSION 3.5)
project(Final-Project)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")
set(CMAKE_CXX_STANDARD 11)

# Add the include directory for libqrencode
include_directories(
    ${CMAKE_SOURCE_DIR}/external/libqrencode/
    ${CMAKE_SOURCE_DIR}/src
)

# Find and link against the libqrencode library
find_library(QRENCODE_LIB qrencode HINTS ${CMAKE_SOURCE_DIR}/external/libqrencode/)

# Ensure libqrencode library is found
if(NOT QRENCODE_LIB)
    message(FATAL_ERROR "libqrencode library not found")
endif()

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

# Add the include directory for googletest
ADD_SUBDIRECTORY(tests/googletest)

ADD_EXECUTABLE( main
    src/main.cpp
    src/restaurant.cpp
<<<<<<< HEAD
    src/recommendation.cpp
    src/buffetRestaurants.cpp
    src/vRestaurants.cpp
)

# Testing Algorithm
ADD_EXECUTABLE(Algorithm
    tests/testAlgorithm.cpp
    #src/main.cpp
    src/restaurant.cpp
    src/recommendation.cpp
    src/buffetRestaurants.cpp
    src/vRestaurants.cpp

=======
    src/vRestaurants.cpp
>>>>>>> refs/remotes/origin/tsaka014/algo
)


# Link against librect (your restaurant library) for main
target_link_libraries(main PRIVATE librect)

ADD_EXECUTABLE(test
      tests/test.cpp
 )

add_library(librect STATIC src/restaurant.cpp)
TARGET_LINK_LIBRARIES(test gtest_main librect)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
