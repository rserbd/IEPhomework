cmake_minimum_required(VERSION 3.0.0)
project(mealsProject VERSION 0.1.0)

add_executable(main
main.cpp
Meal.cpp
Breakfast.cpp
Lunch.cpp
Meal.h
Breakfast.h
Lunch.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
