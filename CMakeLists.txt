cmake_minimum_required(VERSION 3.23)

project(MultiDesk)

find_package(SFML REQUIRED COMPONENTS System Window Graphics Network)

add_executable(multidesk)

target_sources(multidesk PRIVATE
        main.cpp
)

target_link_libraries(multidesk PRIVATE
    SFML::Graphics 
    SFML::Window 
    SFML::System 
    SFML::Network
    input_lite
)

