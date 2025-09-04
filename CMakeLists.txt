cmake_minimum_required(VERSION 3.10)
project(planning_demo)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置编译选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdiagnostics-color=always -Wall -Wextra -Wpedantic")

# 如果是调试模式，添加调试信息
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
endif()

# 添加可执行文件
add_executable(planning_main
    src/planning_main.cpp
    src/process/process.cpp
    src/pnc_map/pnc_map.cpp
    src/show_result/show_result.cpp
)

# 设置包含目录
target_include_directories(planning_main PRIVATE
    src/process
    src/pnc_map
    src/show_result
    D:/mingw64/include
    D:/mingw64/opt/include
    D:/mingw64/x86_64-w64-mingw32/include
)

# 链接 EasyX 图形库和其他系统库
target_link_libraries(planning_main
    easyx
    gdi32
    imm32
    msimg32
    ole32
    oleaut32
    winmm
    uuid
)

# 设置输出目录（可选）
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/src)