# Get_next_line

## Project Overview

The Get Next Line project involves creating a function that reads a line from a file descriptor. By completing this project I could not only add a convenient function to my library, but also learned about static variables.

## Features

The get_next_line function:

- Reads a line from a given file descriptor.
- Returns the line read, including the terminating newline character,
  except when the end of file is reached without a newline.
- Handles multiple calls to read lines consecutively from the file descriptor.

Function Prototype:
```c
c char *get_next_line(int fd);
```
Files to Submit:

    get_next_line.c
    get_next_line_utils.c
    get_next_line.h

External Functions Allowed:

    read
    malloc
    free
    
Bonus Files:

    get_next_line_bonus.c
    get_next_line_bonus.h
    get_next_line_utils_bonus.c

Implementation Details:

  - Handle memory allocation and prevent memory leaks.
  - Include a Makefile with the following rules: $(NAME), all, clean, fclean, and re.
  - The buffer size for reading can be set using the -D BUFFER_SIZE=n compiler flag.
    
Bonus Part: 
  - Use only one static variable.
  - Manage multiple file descriptors simultaneously, allowing reading from
    different file descriptors without losing track.
