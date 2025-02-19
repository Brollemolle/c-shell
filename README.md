> **Disclaimer**: This project is a work in progress and is not yet complete. It is still in early parts of development. Contributions, suggestions, and feedback are welcome!
# C-Shell

Welcome to **C-Shell**, a simple shell implementation in C! This project is a learning exercise aimed at understanding how shells work under the hood. The goal is to create a functional shell with most of the basic capabilities of `bash`, excluding advanced features like piping and custom prompts (for now).


## 🚀 Features (Planned)

- [ ] Basic command execution (e.g., `ls`, `cd`, `pwd`)
- [ ] Built-in commands (e.g., `exit`, `help`)
- [ ] Command history (up/down arrow support)
- [ ] Input/output redirection (e.g., `>`, `<`)
- [ ] Background process execution (e.g., `&`)
- [ ] Environment variable support (e.g., `$HOME`)
- [ ] Tab completion (stretch goal)


## 🛠️ How to Build and Run

To build and run the C-Shell locally, follow these steps:

### Prerequisites
- A C compiler (e.g., `gcc`)
- A Unix-like operating system (Linux or macOS recommended)

### Steps
1. **Clone the repository**:
   ```bash
   git clone https://github.com/Brollemolle/c-shell.git
   cd c-shell
   ```

2. **Compile the shell**:
   ```bash
   gcc -o cshell src/main.c
   ```

3. **Run the shell**:
   ```bash
   ./cshell
   ```

4. **Test the shell**:
   - Try running basic commands like `ls`, `cd`, and `pwd`.
   - Use `exit` to quit the shell.


## Why This Project?

This project is a great way to:
- Learn how shells work internally.
- Understand process management in Unix-like systems.
- Practice C programming, especially working with system calls like `fork()`, `execvp()`, and `wait()`.
- Gain experience in building a real-world tool from scratch.


## What I’m Trying To Learn

- **System Calls**: Using `fork()`, `execvp()`, `wait()`, and `chdir()`.
- **String Parsing**: Tokenizing user input into commands and arguments.
- **Process Management**: Handling foreground and background processes.
- **Error Handling**: Gracefully handling errors and edge cases.

## 🤝 Contributing

This project is primarily for learning purposes, but if you’d like to contribute, feel free to open an issue or submit a pull request! Here are some areas where contributions would be welcome:
- Adding new features (e.g., piping, tab completion).
- Improving error handling.
- Writing test cases.

## 📜 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.



If you have any questions or feedback, feel free to reach out.
