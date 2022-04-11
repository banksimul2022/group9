QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ew1.cpp \
    ew2.cpp \
    ew3.cpp \
    ew4.cpp \
    ew5.cpp \
    ew6.cpp \
    ew7.cpp \
    ew8.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ew1.h \
    ew2.h \
    ew3.h \
    ew4.h \
    ew5.h \
    ew6.h \
    ew7.h \
    ew8.h \
    mainwindow.h

FORMS += \
    ew1.ui \
    ew2.ui \
    ew3.ui \
    ew4.ui \
    ew5.ui \
    ew6.ui \
    ew7.ui \
    ew8.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
