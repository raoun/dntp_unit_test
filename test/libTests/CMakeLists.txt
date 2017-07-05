file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(libTests ${SRCS})

TARGET_LINK_LIBRARIES(libTests
    myLib
    libgtest
)

add_test(NAME libTests
COMMAND libTests)