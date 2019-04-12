# Basic Command Line Cheatsheet


This is a summary of the command line programs we covered in the workshop,
for handy reference.


## `ls`

```bash
ls
```

List files in the current directory.

```bash
ls -l
```

List files in the current directory, with one file per line, and detailed
information for each file.

```bash
ls -a
```

List all files in the current directory, including hidden ones.

```bash
ls <folder path>
```

List all files in the given folder path. The path can be absolute or relative.


## `pwd`

```bash
pwd
```

Display the current directory that you are in, as an absolute path.


## `cd`

```bash
cd <folder path>
```

Navigate to the given folder. After running this successfully, the output of
`pwd` (covered just above) should be the new folder that you just moved to.


## `touch`

```bash
touch <file>
```

Creates a file with the given name, if it doesn't exist. If it already exists,
updates the last accessed and modified timestamps of the file.


## `mkdir`

```bash
mkdir <folder name>
```

Create a new, empty folder with the given name, inside the current directory.