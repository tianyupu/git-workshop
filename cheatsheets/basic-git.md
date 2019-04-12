# Basic Git Cheatsheet


This is a summary of the Git commands covered in the workshop, for handy
reference.


## `init`

```bash
git init
```

We run this _once_ in a folder that we want to start using as a Git repository.
Once run, we can use Git to help us manage the contents of this folder (and all
its subfolders).


## `add`

```bash
git add <file1> <file2> ...
```

Use this to stage changes to commit. Multiple files/folders can be specified in
the one command. Files and folders are specified using either an absolute or
relative path. (If a relative path is used, it's treated as relative to the
current directory.)

```bash
git add .
```

Use this _cautiously_ as a shortcut to add all files and folders recursively.
This means that the contents of all subfolders will be added, too. This can be
helpful when staging a lot of files, but has the danger that you can stage
files you didn't intend to.


## `commit`

```bash
git commit -m "<summary of changes>"
```

Commit the changes that were staged using `git add`. This version allows you to
specify a message directly on the command line.

```bash
git commit
```

Also commits the changes that were staged, but opens a text editor (behaviour
varies depending on your computer) to compose the commit summary. For larger
changes, this is recommended, as it allows you to write a more detailed
summary.


## `reset`

```bash
git reset HEAD <file1> <file2> ...
```

`reset` is a complex Git command that needs to be used carefully. In this
workshop we only looked at one usage of it, and that is to unstage changes.
You can think of this particular usage as the exact opposite of the
`git add <file1> <file2>` command. _Note that_ the changes you made will still
be present in the file(s), but they will no longer be in the staging area.


## `checkout`

```bash
git checkout -- <file1> <file2> ...
```

Like `reset`, `checkout` can also be tricky, and needs to be used with care.
You can think of this particular usage as discarding all the changes you made
and going back to the version that was in the last commit. _Be very careful!_
Running the command above cannot be undone and can cause you to lose work.


## `log`

```bash
git log
```

View the history of commits (i.e. snapshots). The most recent one appears at
the top, and as you go down the list, the commits are (usually/often, but not
necessarily) older [1].


### Bonus

The output of `git log` can be customised in two ways:
1. Filtering commits matching some criteria
1. Customising the display of commits

Some example variations of `git log` that are frequently used:

```bash
# Filtering commits
git log --author="<author name or email>"
git log --since="2019-04-01"
git log --until="2019-04-01"
git log -- <file> # only show the history of the specified file

# Customising the display of commits
git log --oneline
git log --graph

# Filtering and customising together
git log --since="2019-04-01" --oneline --graph
```


## `show`

```bash
git show
```

Without an argument, this will show the details of the most recent commit.

```bash
git show <commit id>
```

Shows the details of the specified commit. Gives detailed information about
what exactly was changed, when, and by whom.


## `tag`

In general, tags are extremely useful to 'bookmark' certain points in the
history, to make it easier to find and go back to those points. Tags can be
thought of as bookmarks or milestones.

```bash
git tag
```

In this form, lists all the tags that have been created.

```bash
git tag <tag name>
```

This form creates a tag with the given name, pointing to the most recent
commit.

```bash
git tag <tag name> <commit id>
```

This form creates a tag with the given name, pointing to the given commit.


## `push`

```bash
git push
```

Send your changes to the corresponding repository (the 'remote') that is
hosted elsewhere on the Internet. This requires a remote to be configured for
the Git repository.


## `pull`

```bash
git pull
```

Get the changes that others have pushed since you last pulled. This command
allows the Git on your computer to know about what other things have changed on
the remote. It's only relevant if you're working on a repository with multiple
people.


## Endnotes

[1] Why this can happen is beyond the scope of this workshop, but if you're
curious, please come up and ask me 🙂