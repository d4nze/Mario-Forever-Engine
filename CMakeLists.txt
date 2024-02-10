cmake_minimum_required(VERSION 3.27)
project(Mario_Forever_Engine)

set(CMAKE_CXX_STANDARD 17)
add_executable(Mario_Forever_Engine
        # Dear ImGui
        Libraries/imgui/imgui.cpp
        Libraries/imgui/imgui-SFML.cpp
        Libraries/imgui/imgui_demo.cpp
        Libraries/imgui/imgui_draw.cpp
        Libraries/imgui/imgui_internal.h
        Libraries/imgui/imgui_tables.cpp
        Libraries/imgui/imgui_widgets.cpp
        Libraries/imgui/imstb_rectpack.h
        Libraries/imgui/imstb_textedit.h
        Libraries/imgui/imstb_truetype.h
        # Main Project
        main.cpp
        Engine/Engine.cpp
        Engine/Engine.hpp
        Engine/Window.cpp
        Engine/Window.hpp
        Engine/GUI/MainMenuBar.cpp
        Engine/GUI/MainMenuBar.hpp
        Engine/GUI/ThemeManager.cpp
        Engine/GUI/ThemeManager.hpp
        Engine/GUI/ObjectEditorView.cpp
        Engine/GUI/ObjectEditorView.hpp
        Engine/GUI/UIWindow.hpp
        Engine/Settings.cpp
        Engine/Settings.hpp
        Engine/App.cpp
        Engine/App.hpp
        Engine/GUI/Inspector.cpp
        Engine/GUI/Inspector.hpp
        Engine/GUI/ObjectHierarchy.cpp
        Engine/GUI/ObjectHierarchy.hpp
        Engine/EngineObject.cpp
        Engine/EngineObject.hpp
)

### SFML ###

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Libraries/SFML/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Libraries/SFML/include/SFML)
target_link_libraries(Mario_Forever_Engine sfml-system sfml-window sfml-graphics sfml-audio)

### Dear ImGui ###

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Libraries/imgui)
