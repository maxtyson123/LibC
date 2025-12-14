# Set the flags
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}" )

# Enable assembly
SET(CMAKE_ASM_FLAGS "-f elf64")
SET(CMAKE_ASM_COMPILE_OBJECT "nasm <FLAGS> -o <OBJECT> <SOURCE>")
FILE(GLOB_RECURSE ASM_SRCS src/*.s)
SET_SOURCE_FILES_PROPERTIES(${ASM_SRCS} PROPERTIES LANGUAGE ASM)

# Find all the cpp and s files in the src directory (recursive)
FILE(GLOB_RECURSE LIBC_SOURCES src/*.cpp src/*.s)

# Build LibC
ADD_LIBRARY(libc STATIC ${LIBC_SOURCES})
TARGET_INCLUDE_DIRECTORIES(libc PUBLIC include)

# On MaxOS install it to the fs
IF(DEFINED MY_VARIABLE)
    INSTALL(TARGETS libc DESTINATION ${CMAKE_SOURCE_DIR}/filesystem/os/lib)
ENDIF()
