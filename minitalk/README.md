# Minitalk

## 📝 Description
Minitalk is a communication program in the form of a client and server. The server must be started first and print its PID. The client takes two parameters: the server PID and the string to send. The client must communicate the string to the server using ONLY UNIX signals (`SIGUSR1` and `SIGUSR2`). The server must display the string quickly.

## ⚡️ How it Works
- The server starts and displays its PID
- The client takes the server's PID and the string to send as arguments
- The client converts each character of the string to binary and sends it to the server using:
  - `SIGUSR1` to send 1
  - `SIGUSR2` to send 0
- The server receives the signals and reconstructs the message
- Once the message is received, the server displays it

## 🛠️ Compilation
```bash
make # Compile both server and client
make clean # Remove object files
make fclean # Remove object files and executables
make re # Recompile everything
```

## 📚 Usage
1. First, start the server:
```bash
./server
```
The server will display its PID.

2. Then, in another terminal, run the client:
```bash
./client [server_pid] [message]
```

Terminal 1
```bash
./server
Server started!
PID: 4242
```

Terminal 2
```bash
./client 4242 "Hello, World!"
```

## ⚙️ Features
- Server acknowledges received messages
- Handles multiple clients
- Supports Unicode characters
- Clean signal handling
- Error management
