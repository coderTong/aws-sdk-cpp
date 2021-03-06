add_project(aws-cpp-sdk-AWSMigrationHub "C++ SDK for the AWS AWSMigrationHub service" aws-cpp-sdk-core)

file(GLOB AWS_AWSMIGRATIONHUB_HEADERS
    "include/aws/AWSMigrationHub/*.h"
)

file(GLOB AWS_AWSMIGRATIONHUB_MODEL_HEADERS
    "include/aws/AWSMigrationHub/model/*.h"
)

file(GLOB AWS_AWSMIGRATIONHUB_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_AWSMIGRATIONHUB_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB AWSMIGRATIONHUB_UNIFIED_HEADERS
    ${AWS_AWSMIGRATIONHUB_HEADERS}
    ${AWS_AWSMIGRATIONHUB_MODEL_HEADERS}
)

file(GLOB AWSMIGRATIONHUB_UNITY_SRC
    ${AWS_AWSMIGRATIONHUB_SOURCE}
    ${AWS_AWSMIGRATIONHUB_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("AWSMIGRATIONHUB" AWSMIGRATIONHUB_UNITY_SRC)
endif()

file(GLOB AWSMIGRATIONHUB_SRC
    ${AWSMIGRATIONHUB_UNIFIED_HEADERS}
    ${AWSMIGRATIONHUB_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\AWSMigrationHub" FILES ${AWS_AWSMIGRATIONHUB_HEADERS})
        source_group("Header Files\\aws\\AWSMigrationHub\\model" FILES ${AWS_AWSMIGRATIONHUB_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_AWSMIGRATIONHUB_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_AWSMIGRATIONHUB_MODEL_SOURCE})
    endif(MSVC)
endif()

set(AWSMIGRATIONHUB_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${AWSMIGRATIONHUB_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_MIGRATIONHUB_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${AWSMIGRATIONHUB_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_AWSMIGRATIONHUB_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/AWSMigrationHub)
install (FILES ${AWS_AWSMIGRATIONHUB_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/AWSMigrationHub/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


