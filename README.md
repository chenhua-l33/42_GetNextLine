*This activity has been created as part of the 42 curriculum by chenhli*

# Description

A self-implementation of GetNextLine in C, which reads a file descriptor one line at a time and returns each line, `NULL` is returned when there is nothing left to read or on error.

The project is split into following:

- get\_next\_line\_utils.c includes primitive helpers(string and memory primitives).
- get\_next\_line.c includes main flow: newline detection, stash management and EOF/error handling.
- get\_next\_line.h includes function prototypes and `BUFFER_SIZE` default.

# Instructions

Compile using mandated flags 
```sh
# BUFFER_SIZE can be any positive integer
cc -Wall -Werror -Wextra \
   *.c  \
   -D BUFFER_SIZE=42\
   -o gnl
```


# Resources

[static variables](https://www.geeksforgeeks.org/c/static-variables-in-c/)

[read() examples](https://stackoverflow.com/questions/19769542/reading-from-file-using-read-function)

[file descriptor](https://stackoverflow.com/questions/18507057/what-are-the-possible-values-for-file-descriptors)

# LLM Usage

LLM(Deepseek) is used to assist understanding during debugging and brainstorm with about the main workflow.
