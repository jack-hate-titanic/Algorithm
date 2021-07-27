cmake_minimum_required(VERSION 3.17)
project(Algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algorithm main.cpp BinarySearch/binarySearch.cpp LeetCode/283MoveZero.cpp LeetCode/27removeElement.cpp Array/boundary.cpp LeetCode/72sortColor.cpp LeetCode/167twoSum.cpp LeetCode/125isPalindrome.cpp LeetCode/209minSubArrayLen.cpp)