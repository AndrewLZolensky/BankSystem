FROM gcc:latest
RUN apt-get update && apt-get install -y \
    git \
    make \
    vim \
    gdb
WORKDIR /usr/src/myapp