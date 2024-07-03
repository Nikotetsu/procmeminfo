cmake_minimum_required(VERSION 3.15)

#
#   Project details
#

project(
    "rotek-test"
    VERSION "0.0.1"
    LANGUAGES CXX
)

include(cmake/settings.cmake)
include(cmake/sources.cmake)

#
# Application
#

add_executable(rotek-test
    ${exe_sources}
)

target_link_libraries(rotek-test
    PRIVATE
    	
)




