# BankSystem
A demo Bank System written in C

How to run locally:
clone repo to local directory, then enter

build image from Dockerfile  with:
docker build -t \<name-of-image\> .

Build and run container from image with:
docker run -it --name \<name-of-container\> -v .:/usr/src/myapp \<name-of-image\>

From here, feel free to compile and play with my banking app, whose main() function  is in app.c

after exiting, start again with: docker -ai \<name-of-container\> 
