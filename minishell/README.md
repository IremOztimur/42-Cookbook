# Minishell

![42 Badge](https://img.shields.io/badge/42-Project-blue)
![C Badge](https://img.shields.io/badge/Language-C-lightgrey)

A simple shell implementation as part of the 42 curriculum. This project recreates basic shell functionality, similar to bash, to deepen understanding of processes, file descriptors, and command interpretation.

## Features

- Command prompt display with command line editing
- Command history (up/down arrows)
- Environment variable management
- Signal handling (ctrl-C, ctrl-D, ctrl-\)
- Built-in commands:
  - `echo` with `-n` option
  - `cd` with relative or absolute path
  - `pwd`
  - `export`
  - `unset`
  - `env`
  - `exit`
- Command execution with absolute/relative paths
- Pipe handling (`|`)
- Redirection operators (`>`, `>>`, `<`, `<<`)
- Environment variable expansion (`$`)
- Exit status handling (`$?`)
- Quote handling (single `'` and double `"`)

## Building
```bash
make # Compile the project
make clean # Remove object files
make fclean # Remove object files and executable
make re # Recompile the project
```

## Usage
```bash
./minishell
```

## Implementation Details

- Written in C
- Uses readline library for command line editing
- Dynamic memory management with custom array implementations
- Lexer/Parser for command interpretation
- Process management using fork and execve
- File descriptor management for redirections and pipes

## Project Structure
```bash
├── inc/ # Header files
├── lib/ # Library files (libft)
├── readline/ # Readline library
└── src/
    ├── built-in-func/ # Built-in command implementations
    ├── dynamic_arrays/ # Dynamic array handling
    ├── execution/ # Command execution
    ├── lexer/ # Lexical analysis
    ├── loop/ # Main shell loop
    ├── minishell/ # Core shell functions
    ├── parser/ # Command parsing
    └── redirection/ # I/O redirection handling
```

## Authors

- [ioztimur](https://github.com/IremOztimur)
- [acerrah](https://github.com/acerrah)
