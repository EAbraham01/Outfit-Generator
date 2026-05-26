cmake_minimum_required(VERSION 3.10)
project (OutfitGenerator)

set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_STANDARD_REQUIRED True)

enable_testing()

#(uncomment and add files as you create them)
 add_library(outfit_lib
     src/ClothingItem.cpp
     src/Outfit.cpp
     src/User.cpp
     src/Wardrobe.cpp
     src/RecommendationSystem.cpp
)

# Create main executable
add_executable(outfit_app src/main.cpp)
target_link_libraries(outfit_app outfit_lib)

# Create test executable
add_executable(tests tests/test_main.cpp)
target_link_libraries(tests outfit_lib)

# Copy data folder to build directory
file(COPY ${CMAKE_SOURCE_DIR}/data DESTINATION ${CMAKE_BINARY_DIR})

# Register tests with CTest
add_test(NAME OutfitTests COMMAND tests)
