project(Hello-Hinata)
cmake_minimum_required(VERSION 2.8.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR})

set(Hello-Hinata_SRCS main.cpp main_application.cpp)
add_executable(Hello-Hinata ${Hello-Hinata_SRCS})
set_target_properties(Hello-Hinata PROPERTIES AUTOMOC TRUE)
target_link_libraries(Hello-Hinata ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY} ${QT_QTDECLARATIVE_LIBRARY})
install(TARGETS Hello-Hinata RUNTIME DESTINATION bin)
