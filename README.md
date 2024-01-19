# BankSystem
A demo Bank System written in C

How to run locally:
clone repo to local directory, then enter

build image from Dockerfile  with:
docker build -t \<name-of-image\> .

Build and run container from image with:
docker run -it --name \<name-of-container\> -v .:/usr/src/myapp \<name-of-image\>

From here, feel free to compile and play with my banking app, whose main() function  is in app.c.

Build ./app with "make all" or "make app", which will trigger the makefile to build the app and its dependencies.

after exiting, start again with: docker start -ai \<name-of-container\> 
