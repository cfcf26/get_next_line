# Get Next Line Project

## Introduction

The Get Next Line project involves programming a function that reads a line from a file descriptor. The project emphasizes the use of static variables in C programming. Successful completion allows for the addition of get_next_line() to the libft library for use in school C projects.

## Project Objectives

- The project must be written in C.
- The project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.
- Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non-functional and will receive a 0 during the evaluation.
- All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.
- If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and your Makefile must not relink.
- Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
- Submit your work to your assigned git repository. Only the work in the git repository will be graded.

## Mandatory Part

- Program name: get_next_line
- Turn in files: get_next_line.c, get_next_line.h, get_next_line_utils.c
- External functions: read, malloc, free
- Libft authorized: No
- Description: Write a function that returns a line read from a file descriptor.

## Bonus Part

- Develop get_next_line() using only one static variable.
- Your get_next_line() can manage multiple file descriptors at the same time. For example, if you can read from the file descriptors 3, 4 and 5, you should be able to read from a different fd per call without losing the reading thread of each file descriptor or returning a line from another fd.
- Append the _bonus.[c\\h] suffix to the bonus part files. It means that, in addition to the mandatory part files, you will turn in the 3 following files: get_next_line_bonus.c, get_next_line_bonus.h, get_next_line_utils_bonus.c
- The bonus part will only be assessed if the mandatory part is PERFECT. Perfect means the mandatory part has been integrally done and works without malfunctioning. If you have not passed ALL the mandatory requirements, your bonus part will not be evaluated at all.

## Submission and Peer-evaluation

Turn in your assignment in your Git repository as usual. Only the work inside your repository will be evaluated during the defense. Don’t hesitate to double check the names of your files to ensure they are correct. Once passed, do not hesitate to add your get_next_line() to your libft.
