
# C - Simple Shell

This project is a simple UNIX command interpreter, inspired by the original Unix shell.


![Logo](data:image/jpeg;base64,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)



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
| ![Ahmed Ramzy](https://static.wixstatic.com/media/222d15_038fc869803a4ddbb67cb0bc7f53f04b~mv2.png/v1/crop/x_0,y_38,w_1232,h_1232/fill/w_600,h_600,al_c,q_85,usm_0.66_1.00_0.01,enc_auto/me2.png) | ![Ashraf Atef]() |
| Ahmed Bassem Ramzy is currently thriving as a Health Ministry health inspector.Driven by an unwavering passion for the tech industry, Ahmed aspires to establish a prominent presence as a Software Engineer. With a remarkable history of accomplishments, Ahmed Ramzy stands out for his exceptional ability to streamline routine processes through software development, enabling faster data input. Additionally, his instrumental contribution to the construction of a comprehensive employee database, designed for efficient information retrieval, showcases his dedication to optimizing operational efficiency. Continuously pushing the boundaries of technology, Ahmed Ramzy remains steadfast in his pursuit of excellence and innovation within the tech realm. |  |

