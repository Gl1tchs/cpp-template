set(MODULE_NAME core)

add_library(${MODULE_NAME} STATIC src/foo.cpp)

target_include_directories(${MODULE_NAME} PUBLIC 
		$<INSTALL_INTERFACE:include>
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)
