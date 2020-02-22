FROM alpine:3.8

RUN apk add --no-cache gcc g++ make libc-dev && \
    apk add vim
WORKDIR /app
