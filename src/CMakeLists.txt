add_library(${PROJECT_NAME}-lib "")

target_sources(
        ${PROJECT_NAME}-lib
        PRIVATE
            Adder.cpp
)

add_executable(${PROJECT_NAME}
        main.cpp)

target_link_libraries(
         ${PROJECT_NAME}
        ${PROJECT_NAME}-lib)
