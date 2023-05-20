cmake_minimum_required(VERSION 3.2)

project(
  moodle
  VERSION 1.0
  LANGUAGES CXX)

set(PROJECT_SOURCES main.cpp include/student.h src/student.cpp)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
