# http2-traffic-injector
## Introduction
This HTTP2 traffic injector is the *final project* for the Software
Craftsmanship master, authored by Pablo Rebaque and Jorge Hevia.

This project aims to develop the following:

* An HTTP2 traffic injector for the test automation of HTTP2 API REST
microservices
* Associated Unit and E2E tests
* Associated documentation
* Continuous Integration environment

The project is developed in C++20 using the *nghttp* library.

## Building & running
### Pre-requirements
* cmake >= 3.10
* g++ >= 7 (to be changed)
* git (to clone gtest)
### Manual build & run
```console
foo@bar:~$ mkdir cmake-bin
foo@bar:~$ cd cmake-bin
foo@bar:~$ cmake ..
foo@bar:~$ cmake --build .
foo@bar:~$ ctest #To run tests or...
foo@bar:~$ test/ut #To run directly
foo@bar:~$ src/http2-traffic-injector #To run main
```
## Generating documentation
### Pre-requirements
docker
### Manual create project-proposal
```console
foo@bar:~$ docker pull hombrenieve/sw_craftmanship-latexmaker:pygments
foo@bar:~$ docker run --rm -v "$(pwd)/docs/project-proposal":/doc hombrenieve/sw_craftmanship-latexmaker:pygments latexmk -shell-escape -pdf document.tex
```

