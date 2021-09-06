cmake_minimum_required(VERSION 3.14)
option(ENABLE_TESTING "Enable tests" ON)
project(_._)
add_library(_._ INTERFACE)
include(CTest)
include(GNUInstallDirs)
target_include_directories(_._ INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}> $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)
add_custom_target(__.__ SOURCES _._)

# Tests and examples
if(ENABLE_TESTING)
	add_executable(test_._test test.cc)
	target_link_libraries(test_._test _._)
	add_test(NAME test_your_ass COMMAND ${CMAKE_COMMAND} -E echo 1 > test_._test)
endif()

# Install targets
install(TARGETS _._  EXPORT _._-config)
install(EXPORT _._-config DESTINATION ${CMAKE_INSTALL_DATADIR}/cmake/_._/)
install(FILES _._ DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/")

