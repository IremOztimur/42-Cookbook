# get_next_line

## 📝 Description
`get_next_line` is a 42 School project that implements a function which reads a line from a file descriptor. When called in a loop, the function allows reading a text file one line at a time until the end of the file.

## 🔍 Function Prototype
```c
char *get_next_line(int fd);
```

## ⚙️ Parameters
- `fd`: The file descriptor to read from

## ↩️ Return Value
- Returns the line that was read (including the terminating `\n` character, except if the end of file was reached and does not end with a `\n` character)
- Returns NULL if there is nothing else to read or if an error occurred

## 🚀 Features
- Reads from multiple file descriptors simultaneously (bonus part)
- Works with any buffer size
- Memory leak free
- Handles errors gracefully
- Works with both files and standard input


## 🛠️ Compilation
The function can be compiled with any buffer size:
```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=1024 get_next_line.c get_next_line_utils.c -o get_next_line
```
To compile with bonus part:
```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=1024 get_next_line_bonus.c get_next_line_utils_bonus.c -o get_next_line_bonus
```

Run your program:
```bash
./get_next_line
```

## 📚 Usage Example
```c
    #include "get_next_line.h"
    #include <fcntl.h>
    #include <stdio.h>
    
    int main(void)
    {
        int     fd;
        char    *line;
        
        fd = open("test.txt", O_RDONLY);
        if (fd < 0)
            return (1);
            
        while ((line = get_next_line(fd)) != NULL)
        {
            printf("%s", line);
            free(line);
        }
        
        close(fd);
        return (0);
    }
}
```