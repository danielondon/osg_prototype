SET(TARGET adasisv3_tree)
ADD_EXECUTABLE (${TARGET} ${TARGET}.cpp)
TARGET_LINK_LIBRARIES(${TARGET} dynamic_library Qt5::Core Qt5::Gui Qt5::OpenGL)
