FROM ubuntu

RUN apt update && apt install -y git gcc make libpcap-dev \

RUN git clone https://github.com/sages-pl/src-c.git /tmp \
    && cd /tmp \
    && ./configure \
    && make \
    && make install


## -----


FROM alpine

RUN apk add --no-cache git gcc make libpcap-dev musl-dev

RUN git clone https://github.com/sages-pl/src-c.git /tmp \
    && cd /tmp \
    && ./configure \
    && make \
    && make install
