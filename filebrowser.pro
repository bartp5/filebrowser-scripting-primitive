QT += core network sql gui

SOURCES += main.cpp \
    filebrowser.cpp \
    tree_view.cpp

LIBS += -lz -lonyxapp -lonyx_base -lonyx_ui -lonyx_screen -lonyx_sys -lonyx_wpa -lonyx_wireless -lonyx_data -lonyx_cms

INCLUDEPATH += /opt/onyx/arm/include

HEADERS += \
    filebrowser.h \
    tree_view.h

RESOURCES +=
