# Set the flags
SET(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} "-nostdlib -Wall")
SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-nostdlib -Wall -fno-exceptions -fno-rtti")

# Enable assembly
SET(CMAKE_ASM_FLAGS "-f elf64")
SET(CMAKE_ASM_COMPILE_OBJECT "nasm <FLAGS> -o <OBJECT> <SOURCE>")
FILE(GLOB_RECURSE ASM_SRCS src/*.s)
SET_SOURCE_FILES_PROPERTIES(${ASM_SRCS} PROPERTIES LANGUAGE ASM)

# Find all the c and s files in the src directory (recursive)
FILE(GLOB_RECURSE LIBC_SOURCES src/*.c src/*.s)

# Build LibC
ADD_LIBRARY(libc STATIC ${LIBC_SOURCES}
        include/aio.h)
TARGET_INCLUDE_DIRECTORIES(libc PUBLIC include)

# On MaxOS install it to the fs
IF(DEFINED MY_VARIABLE)
    INSTALL(TARGETS libc DESTINATION ${CMAKE_SOURCE_DIR}/filesystem/os/lib)
ENDIF()
