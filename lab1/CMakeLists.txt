cmake_minimum_required(VERSION 3.29)
project(lab1)

#file(GLOB TESTS tests/*.cpp)

include_directories(include)
add_executable(lab1 new_main.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE avg_dir)
add_subdirectory(avg_dir)
target_link_libraries(${PROJECT_NAME} av_st)

install(TARGETS av_st DESTINATION lib)
install(TARGETS av_st DESTINATION hpp)

return()
