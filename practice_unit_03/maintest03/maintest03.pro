QT += testlib
QT += gui
QT += widgets #3.要加的
CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

SOURCES +=  tst_maintest03.cpp \ #4.記得要加的\換行
../main03/main03.cpp   #4.要加的


HEADERS += \
    ../main03/main03.h #5.要加的


INCLUDEPATH += ../main03 #6.要加的

FORMS += \
    ../main03/main03.ui #7.要加的
