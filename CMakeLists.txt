PROJECT(test)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

list( APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/GetGitRev" )
include( GetGitRevisionDescription )
git_describe(GIT_VERSION "--always" "--dirty" "--tags" "--abbrev=5")
message( STATUS "GIT VERSION: ${GIT_VERSION}" )

configure_file (
    ${CMAKE_CURRENT_SOURCE_DIR}/version/version.c.in
    ${CMAKE_CURRENT_SOURCE_DIR}/version/version.c
)

include_directories(version)
list ( APPEND SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/version/version.c" )
ADD_EXECUTABLE(version main.cpp ${SOURCES})
