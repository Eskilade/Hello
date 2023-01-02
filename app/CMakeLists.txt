add_executable(DoHello)

target_sources(DoHello
    PRIVATE
        main.cpp
)

target_link_libraries(DoHello
    PUBLIC 
        Hello
)

target_compile_features(DoHello
    PRIVATE
        cxx_std_17
)

