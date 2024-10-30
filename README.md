<h1 align="center">
	📖 get_next_line
</h1>

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Usage](#usage)
- [Allowed Functions](#allowed-functions)


## Overview

The **Get Next Line** project is part of the 42 curriculum, where the objective is to create a function, `get_next_line`, that reads a line from a given file descriptor. The function should handle multiple line reads, different file descriptors, and manage memory effectively. The project aims to enhance understanding of buffer management, memory allocation, and efficient I/O handling in C.

## Features

- **Line-by-Line Reading**: `get_next_line` reads from a file descriptor and returns one line at a time, each time it is called.
- **Multiple File Descriptor Handling**: The function should be able to manage multiple file descriptors simultaneously.
- **Dynamic Memory Allocation**: Dynamically allocates memory to store lines of any length, freeing memory when it's no longer needed.
- **Configurable Buffer Size**: The reading buffer size can be adjusted by changing the value of `BUFFER_SIZE` (specified at compile time).

## Usage

### Function Prototype
```c
char *get_next_line(int fd);
```

For more detailed information, look at the [**subject of this project**](https://github.com/minotte/ft_gnl/blob/main/fr.subject.pdf)


## 🛠️ Usage

1. Include Get Next Line Header **"** ***get_next_line.h*** **"** in your main file
2. Print the return of the function.
3. Compile your files with:
    ```bash=
    clang -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c
    ```
4. Launch the compiled program.

### main exemple

```c
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main()
{
    int fd = open("example.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return 0;
}
```
## Allowed Functions
* read
* malloc
* free
