cmake_minimum_required(VERSION 2.0)

project(kv_c_array)

add_library(kv_c_array SHARED kv_c_array.c)
target_include_directories(kv_c_array PRIVATE
  ../../../include
)
