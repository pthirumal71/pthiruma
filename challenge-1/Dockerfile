FROM ubuntu@sha256:626ffe58f6e7566e00254b638eb7e0f3b11d4da9675088f4781a50ae288f3322 AS base

RUN apt-get update \
    && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    python3

RUN mkdir /challenge

COPY reversing.c final setup-challenge.py /app/

WORKDIR /app/


RUN tar czvf /challenge/artifacts.tar.gz final

FROM base AS challenge
ARG FLAG

RUN python3 setup-challenge.py