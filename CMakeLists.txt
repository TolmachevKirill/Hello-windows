cmake_minimum_required(VERSION 3.0)
project(HelloWindows)

# Установите системное имя и компиляторы перед созданием цели
set(CMAKE_SYSTEM_NAME Windows)

# Добавьте вашу цель (исполняемый файл)
add_executable(hello main.cpp)

# Если ваша версия CMake старше 3.13, используйте этот способ:
if(CMAKE_VERSION VERSION_GREATER "3.13.0")
  target_link_options(hello PRIVATE -static-libgcc -static-libstdc++ -static)
else()
  # Установите флаги линковщика для статической компоновки
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++ -static")
endif()

