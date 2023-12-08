
# C - Simple Shell

This project is a simple UNIX command interpreter, inspired by the original Unix shell.


![Logo](data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAQ8AAAC6CAMAAACHgTh+AAAAclBMVEUAAAD///+srKw/Pz/4+Pg0NDSCgoKhoaGzs7Pp6el7e3u6urqysrIsLCzl5eXh4eF1dXUmJiYgICDv7+/IyMi+vr7R0dFAQECMjIxFRUU2Njbc3NyVlZVSUlKAgIBkZGSdnZ0SEhJcXFxmZmZOTk4ZGRm0amS3AAADmElEQVR4nO3be1uyMBzG8S1RwUQ857HM6v2/xUcTcicY2XOJ0+/nT8Audvvb2IYJAQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADftk3fwC1Ju1G/6Xu4HctnKeVT03dxK97mUpJHoZdJSR650WYiJXkU2pGUJXm0285PfF7jthrzIsvySJNk5PhALDtXurVGtMrySBMpB6l1fXy47J4DKctjlBwPJGaXib+vu+NASvJIk9ORgd5l4vzC+w3EnUf755mTqV0m/rnybgNx5jFKzseUMSRWLr3XQFx5rBL1YFZ0GTWOuw3EkUdrojVcrk+B6HFIuWjyti823vY6i05vf2zTsHu2G5/OO/IYGg0/VYgZh4wba9PFWrusmH5Gg+5Sa9Iqv8TRX3pm09djO47n5pp1oe3UaII6NY/ymYVzPLUqZD0LvjpGz2YT9Gyq8rArxBTcym8/qW5QdR52heiCq46O7wv25FFdIcHtKy58cXjzqAokuDg81V4rj/I/ElxnMSdUl+VR1ueCi0OYz9kL83B3meA6i/9hWTcP118Krzre12bTo8huV608xNz82MTeMbt1xjjY3x+ObbtmJLXysCbph5lqcIFoU+t1seE3NgaVOnk4Z7hZYIGk6sNlrpzQW1cjj5IJf2CBfCi3rvd2bVzx51G6/gkrkI1y5/qWjZqUP4+K5WC2ul5z/qyvlIf+tuBd3Qb05eEYSs8c72VuljKcro1T6lfuyaN6s0Bm7leZt0h5jkyNU0+18/DEcaiQ1hWb9CdKHnPjlNKVqvOwOkvXWsskoYwhSn8ZGKfUKUhVHtbmYN+x2g2lQpROEem/j0tr7p+qT6giDiFezaPm6HSj1K0gffGltfMX9ZGvaI3F3WR5xUb9wVatgjflxFJbwlSOH9pw+hOq1mWSQLqL+BqoX+K5x+gvIT3Pl5njmFYhwcQhRFdr9yY/+moscD3zj9g+JJQKCSgOvcMcSuSp89Hr6sXhz6PoMsb2Ty+8OByPSxfv+mVmVcfRMLw4xKdjO+z3eRwrxLFXOgxoKlbY/Zc8xMz5yroXykRMYW17XpTH/WgPymJ4zDzEi/U8eew8xCorC+Ix8xDvni2MR8tDiI/KEnm8PA5zBf1NXZY9eB6H1i6myXF2Fk2mm6W2P1b8nk77/4bwXs5eYtTOt8P3nbPXr9OxsXKss2/uJgEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACMc/AWAgNdcnzIAAAAAASUVORK5CYII=)



## Concepts
Basics of programming
\
Basics of C
\
Basics of thinking like an engineer
\
Group work
\
Learning how to learn

## Background Context
The goal of this project is to write a simple UNIX command interpreter. It's an opportunity to apply your knowledge of C programming, understand how a shell works, and enhance your skills in team collaboratio

## Important Note from Julien
Julien emphasizes the importance of understanding the framework, not copying solutions, and learning how to walk toward the solution instead of memorizing it. Collaboration is encouraged, but both partners are responsible for the code pushed to GitHub. Cheating, plagiarism, and shortcuts are strongly discouraged.

## Learning Objectives
By the end of this project, you should be able to explain various concepts, including:

General history and details about the original Unix operating system
The design and implementation of the UNIX shell
Basics of the C programming language and its predecessor, B programming language
Knowledge about Ken Thompson
Understanding of how a shell works
Concepts like pid, ppid, system calls, and functions
Manipulating the environment of the current process
Execution of other programs with the execve system call
Handling the PATH to find programs
Suspension of process execution until a child terminates
Understanding EOF (end-of-file)

## Output
Program output must match sh (/bin/sh) for both normal and error output
## Made for ALX SE Program



## Running Tests

To run tests, run the following command

```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```


## Contributing

Contributions are always welcome!

See `contributing.md` for ways to get started.

Please adhere to this project's `code of conduct`.


## Tasks

| Task Name | Description                |
| :-------- | :------------------------- |
| `Betty would be proud` | `Write a beautiful code that passes the Betty checks.` |
|`Simple shell 0.1` |   `Write a UNIX command line interpreter.`
|`Simple shell 0.2` | `Enhance the shell to handle command lines with arguments.`
|`Simple shell 0.3` | `Further improve the shell to handle the PATH.`
| `Simple shell 0.4`| `Implement the exit built-in command to exit the shell.`
| `Simple shell 1.0`| `Implement the env built-in command to print the current environment.`
|`Simple shell 0.1.1 (Advanced)` | `Write your own getline function.`
|`Simple shell 0.2.1 (Advanced)` | `Avoid using strtok in your implementation.`
|`Simple shell 0.4.1 (Advanced)` | `Handle arguments for the built-in exit command`
|`setenv, unsetenv (Advanced)` | `Implement the setenv and unsetenv built-in commands.`
|`cd (Advanced)` | `Implement the cd built-in command to change the current directory.`
|`; (Advanced)` | `Handle the commands separator (;).`
|`&& and or (Advanced)` | `Handle the logical operators && and or.`
|`alias (Advanced)` | `Implement the alias built-in command.`
|`Variables (Advanced)` | `Handle variables replacement, including $? and $$.`
|`Comments (Advanced)` | `Handle comments in the shell.`
|`File as input (Advanced)` | `Enable the shell to take a file as a command line argument.`




## Developers:

| **Ahmed B.Ramzy (AKA RAMZY)** | **Ashraf Atef (AKA Ashraf)** |
|---|---|
|[@Ahmed Ramzy](https://www.github.com/RamzyAR7) | [@Ashraf Atef](https://www.github.com/Ashraf-Atef1)
![Ahmed Ramzy](https://static.wixstatic.com/media/222d15_038fc869803a4ddbb67cb0bc7f53f04b~mv2.png/v1/crop/x_0,y_38,w_1232,h_1232/fill/w_600,h_600,al_c,q_85,usm_0.66_1.00_0.01,enc_auto/me2.png) 
|![Ashraf Atef]() |
| Ahmed Bassem Ramzy is currently thriving as a Health Ministry health inspector.Driven by an unwavering passion for the tech industry, Ahmed aspires to establish a prominent presence as a Software Engineer. With a remarkable history of accomplishments, Ahmed Ramzy stands out for his exceptional ability to streamline routine processes through software development, enabling faster data input. Additionally, his instrumental contribution to the construction of a comprehensive employee database, designed for efficient information retrieval, showcases his dedication to optimizing operational efficiency. Continuously pushing the boundaries of technology, Ahmed Ramzy remains steadfast in his pursuit of excellence and innovation within the tech realm. |  |

