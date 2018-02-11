# Get_Next_Line
Function witch read a line form the file descriptor.


# get_next_line @ 42
This project is the final starting project before branching out. The goal is to
make a function which reads a single line from a file descriptor, assuming it
isn't being tampered with in between calls to the function.

It must fit in one source file and one header. Mine works with multiple file
descriptors. It also has no memory leaks (hurray)!

## Usage
```c
char *str;

// To get a single line
get_next_line(fd, &str);
...
ft_strdel(&str); // You should free after you're done using your line

// To read a whole file
while (get_next_line(fd, &str))
{
	// process output it
	ft_putstr(str);
	
	// free the line to avoid leaking memory
	ft_strdel(&str);
}

```

#### Licence

This library is under the Apache 2.0 Licence.
Please refer to the LICENCE file for more detail
