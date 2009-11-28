cmake_minimum_required (VERSION 2.6)
project (SPLITS)

# set link libraries for project
IF(UNIX)
	LINK_LIBRARIES(${CMAKE_THREAD_LIBS} ${CMAKE_DL_LIBS})
ENDIF(UNIX)

add_subdirectory (lib)
add_subdirectory (test)

add_executable (findsplits Splits.cpp)
target_link_libraries (findsplits splits) 
