TEMPLATE = app

TARGET = minimal
target.path = .

INCLUDEPATH += .

DEFINES += QT_DEPRECATED_WARNINGS

QT += webengine

SOURCES += minimal.cpp

RESOURCES += minimalResources.qrc

INSTALLS += target
