This project contains different small C++ programms which were made during C++ course for beginners.

All programs tored here in order to avoid creating many different small procjects and facilitate the process of learning through Git flow.

Source code of each program located in individual directory. Name of a directory and *.cpp file contains such information:
1. Lecture number in format **l + number**;
2. Type of exercise:
   1. **Exercise** for normal exercises;
   2. **Challenge** for challenges;

> For example. l99-challenge means that this programme is for lecture 99 challenge.

Git flow is needed to store the history of learning through the course and also to improve the process of working on different programms in one project.

The rules of using Git flow in this project are simple:
1. Each new program considered feature;
2. Finished program considered release;

Release versions contain information about course status, section number and lecture number:
1. The first number shows the status of the course if it's finished or not;
2. The second number is a section number;
3. The third number is a lecture number;

> For example. v0.12.78 means that course isn't finished (0), and the program was made for lecture 78 in section 12.

Right now all binary file are ignored to avoid innecessary commits.