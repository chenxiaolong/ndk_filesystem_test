cmake_minimum_required(VERSION 3.9)

project(test)

add_executable(main main.cpp)

target_compile_features(
    main
    PRIVATE
    cxx_std_17
)
