set(SRCS main.cpp)

add_executable(dntp ${SRCS}
)

# Specify here the libraries this program depends on
target_link_libraries(dntp myLib)

install(TARGETS dntp DESTINATION build)