set(NETWORKMGR_SRCS
    mpris.cpp
    mpris.h
    mpriscontroller_p.h
    mpriscontroller.cpp
    mpriscontroller.h
    mprismanager.cpp
    mprismanager.h
    mprisplayer.cpp
    mprisplayer.h
    mprisplayeradaptor.cpp
    mprisplayerinterface.cpp
    mprisqt.h
    mprisrootadaptor.cpp
    mprisrootinterface.cpp
    qmlplugins.cpp

    qtdbusextended/dbusextended.h
    qtdbusextended/dbusextendedabstractinterface.cpp
    qtdbusextended/dbusextendedabstractinterface.h
    qtdbusextended/dbusextendedpendingcallwatcher_p.h
    qtdbusextended/dbusextendedpendingcallwatcher.cpp
)

add_library(matsyampris_qmlplugins SHARED ${NETWORKMGR_SRCS})

target_link_libraries (matsyampris_qmlplugins
    Qt5::Core
    Qt5::Quick
    Qt5::Gui
    Qt5::DBus
)

install(TARGETS matsyampris_qmlplugins DESTINATION ${INSTALL_QMLDIR}/Matsya/Mpris)
install(FILES qmldir DESTINATION ${INSTALL_QMLDIR}/Matsya/Mpris)
