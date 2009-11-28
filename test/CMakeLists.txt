include_directories (${SPLITS_SOURCE_DIR}/lib)
link_directories (${SPLITS_BINARY_DIR}/lib)
add_executable (testsplits TestSplits.cpp TestSplitsComputer.cpp)
target_link_libraries (testsplits splits cppunit) 
