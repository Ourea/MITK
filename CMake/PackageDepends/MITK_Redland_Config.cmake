list(APPEND CMAKE_PREFIX_PATH ${REDLAND_INSTALL_DIR})
find_package(Redland REQUIRED CONFIG)
list(APPEND ALL_INCLUDE_DIRECTORIES ${Redland_INCLUDE_DIR})
list(APPEND ALL_LIBRARIES rdf)
