CMAKE_MINIMUM_REQUIRED(VERSION 3.8)

PROJECT(HELLO)

AUX_SOURCE_DIRECTORY(. SRC_LIST)

ADD_EXECUTABLE(hello ${SRC_LIST})

