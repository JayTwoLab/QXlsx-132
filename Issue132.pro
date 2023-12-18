# Issue132.pro
 
TARGET = Issue132
TEMPLATE = app

QT += core
QT += gui

CONFIG += console
CONFIG -= app_bundle

DEFINES += QT_DEPRECATED_WARNINGS

##########################################################################
# NOTE: You can fix value of QXlsx path of source code.
QXLSX_PARENTPATH=../QXlsx/QXlsx/
QXLSX_HEADERPATH=../QXlsx/QXlsx/header/
QXLSX_SOURCEPATH=../QXlsx/QXlsx/source/
include(../QXlsx/QXlsx/QXlsx.pri)

SOURCES += main.cpp

