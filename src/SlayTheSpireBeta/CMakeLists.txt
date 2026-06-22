cmake_minimum_required(VERSION 3.19)
project(SlayTheSpireBeta LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(SlayTheSpireBeta
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    Enemy.h
    Enemy.cpp
)

target_link_libraries(SlayTheSpireBeta
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS SlayTheSpireBeta
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET SlayTheSpireBeta
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
