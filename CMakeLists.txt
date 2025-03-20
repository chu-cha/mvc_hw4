
cmake_minimum_required(VERSION 3.5)

project(mvc )

file(GLOB HEADER_FILES "*.h")
file(GLOB CPP_FILES "*.cpp")

add_executable(mvc ${CPP_FILES} ${HEADER_FILES} )

set (ALL_SOURCES mvc)

set_target_properties(${ALL_SOURCES} PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
)

foreach(s ${ALL_SOURCES})
	if (MSVC)
		target_compile_options(${s} PRIVATE
			/W4
		)
		
	else ()
		target_compile_options(${s} PRIVATE
			-Wall 
		)
	endif()
endforeach()

install(TARGETS mvc RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_CONTACT example@example.com)
include(CPack)

