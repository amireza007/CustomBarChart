cmake_minimum_required(VERSION 3.16)

project(CustomBarChart VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick Gui UiPlugin Widgets Designer Core)

qt_standard_project_setup(REQUIRES 6.5)
qt6_add_plugin(mybarchart)

qt_add_executable(appCustomBarChart
    main.cpp
    mybarchart.cpp
)

qt_add_qml_module(appCustomBarChart
    URI CustomBarChart
    VERSION 1.0
    QML_FILES
        Main.qml
        RESOURCES BarChartQt.ui
        SOURCES mybarchart.h mybarchart.cpp
        SOURCES analogclock.h
        SOURCES analogclock.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appCustomBarChart PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appCustomBarChart
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)
target_link_libraries(appCustomBarChart
    PRIVATE Qt6::Quick
    PRIVATE Qt6::Gui
    PUBLIC  Qt6::Core
    PUBLIC Qt6::Gui
    PUBLIC Qt6::UiPlugin
    PUBLIC Qt6::Widgets
    PUBLIC Qt6::Designer
    PUBLIC Qt6::Designer
)
target_link_libraries(mybarchart
    PUBLIC  Qt6::Core
    PUBLIC Qt6::Gui
    PUBLIC Qt6::UiPlugin
    PUBLIC Qt6::Widgets
    PUBLIC Qt6::Designer
    PUBLIC Qt6::Designer
)

set(INSTALL_EXAMPLEDIR "${QT6_INSTALL_PREFIX}/${QT6_INSTALL_PLUGINS}/designer")
include(GNUInstallDirs)
install(TARGETS appCustomBarChart mybarchart
    BUNDLE DESTINATION  ${INSTALL_EXAMPLEDIR}
    LIBRARY DESTINATION ${INSTALL_EXAMPLEDIR}
    RUNTIME DESTINATION ${INSTALL_EXAMPLEDIR}

)

