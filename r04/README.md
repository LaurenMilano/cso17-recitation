Tutorial 4
==========
In all our labs, we provide grade/test tools so that you (and we) can test if your implementation is correct. To do so, there are usually a Makefile and several object files (**.o**). It's not uncommon that programmers can't see the test cases and have to think about the corner cases by themselves (ACM International Collegiate Programming Contest is an example). Many students added **main** function and use **gcc** to compile and then to debug. This is allowed, but many of you forgot to remove the main function and to test with our Makefile. 

This recitation mimics the format of our labs. You can add your own main function for debug purpose (see strlen.c and dlist.c), but must remove it before submitting. Otherwise, you'll get 0 credit for this recitation. The second goal of this recitation is to let you review pointer and pointer to pointer. This is the last recitation to practice basic C (unless your need more).

Exercise 1
----
Unlike many other language, there is no length field for a string. C language uses a special character, '\0', to denote the end of a string. Users can then use strlen() defined in string.h to calculate the length. You are asked to implement strlen (you cannot call the built-in strlen). Complete **cso\_strlen()** in strlen.c. Remember to do error handling.

Exercise 2
----
In lab1, you have written a basic link list. Link list is useful when you want to create a new node in front of a list (prepend). But many times, you need both prepend and append. Doing append for a link list is slow (why?). In this exercise, you are asked to implement the append and prepend functions for a double link list. I have provided the skeleton code (dlist.c and dlist.h) for the corner cases. Read it and think about how to implement both functions(they are symmetric). Remove (or delete) is slightly difficult and we are not going to implement it in this recitation. But you are encourage to implement it and to reinforce your understanding of pointer.

## What to submit and how to submit??
Before submitting your solution, you can type **git diff** to see what you change. Be sure to change those lines or functions specified in above descriptions.  
You need to submit all four modified files.  
**git add strlen.c dlist.c**
**git commit -m "r04"**
**git push**
