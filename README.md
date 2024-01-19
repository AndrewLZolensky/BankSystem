# BankSystem
A demo Bank System written in C\n

How to run locally:\n
clone repo to local directory, then enter\n
\n
build image from Dockerfile  with:\n
docker build -t \<name-of-image\> .\n

Build and run container from image with:\n
docker run -it --name \<name-of-container\> -v .:/usr/src/myapp \<name-of-image\>\n

From here, feel free to compile and play with my banking app, whose main() function  is in app.c\n 
