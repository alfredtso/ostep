# Homework 

## Question 1
Write a program that calls fork(). Before calling fork(), have the
main process access a variable (e.g., x) and set its value to some-
thing (e.g., 100). What value is the variable in the child process?
What happens to the variable when both the child and parent change
the value of x

### Answer
- see [a1](a1.c)
- The child would get a "copy" of the number. We can alter the number but the
original copy won't be affect.

