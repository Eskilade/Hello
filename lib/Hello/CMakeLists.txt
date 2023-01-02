add_library(Hello)

target_sources(Hello
    PRIVATE
        src/hello.cpp
)

#target_link_libraries(SystemMonitoringLibCore
#    PRIVATE
#        Components::GenericLogger
#    PUBLIC
#        Components::TreeMapUtils
#        SystemMonitoringLibUtils
#        Components::AutonomyTypes
#        SystemMonitoringLibPublic
#)

target_include_directories(Hello
    PUBLIC
        "include"
)

#target_compile_features(SystemMonitoringLibCore
#    PRIVATE
#        cxx_std_17
#)

