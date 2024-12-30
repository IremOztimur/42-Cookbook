# ft_irc - IRC Server Implementation

![C++](https://img.shields.io/badge/C%2B%2B-98-blue)
![42 Badge](https://img.shields.io/badge/42-Project-blue)

A lightweight Internet Relay Chat (IRC) server implementation written in C++98, following RFC standards. This project creates a server that allows multiple clients to connect, communicate, and manage channels in real-time.

## Features

- **Authentication System**: Secure password-based server access
- **Nickname Management**: Unique nickname handling and validation
- **Channel Operations**: 
  - Create and join channels
  - Channel operator privileges
  - Topic management
  - User kick/ban capabilities
- **Private Messaging**: Direct communication between users
- **Mode Management**: Channel and user mode modifications
- **Real-time Communication**: Efficient message broadcasting
- **Standard Compliance**: Implements core IRC protocol commands

## Supported Commands

- `PASS`: Server authentication
- `NICK`: Set/change nickname
- `USER`: Set username and real name
- `JOIN`: Join a channel
- `PRIVMSG`: Send private messages
- `WHO`: List channel members
- `MODE`: Modify channel/user modes
- `PART`: Leave a channel
- `KICK`: Remove user from channel
- `PING`: Server connection test
- `TOPIC`: Set/view channel topic
- `INVITE`: Invite users to channels
- `QUIT`: Disconnect from server

## Clone the repository

```bash
git clone <repository-url>
cd ft_irc
```

## Compile the server

```bash
make
```

## Run the server
```bash
./ircserv <port> <password>
```

## Usage

1. Start the server with desired port and password:
```bash
./ircserv <port> <password>
```

2. Connect to the server using an IRC client or command line tools.

3. Use the supported commands to interact with the server.

## Technical Details

- Written in C++98
- Uses poll() for non-blocking I/O
- IPv6 support
- No external libraries
- RFC-compliant protocol implementation

## Requirements

- C++ compiler with C++98 support
- Make
- POSIX-compliant operating system

## Authors

- [Irem Oztimur](https://github.com/IremOztimur)
- [Fatih Soymaz](https://github.com/fsoymaz)

