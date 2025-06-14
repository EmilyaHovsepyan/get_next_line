# get_next_line

![42 Project](https://img.shields.io/badge/42%20School-Project-blue)
![Language](https://img.shields.io/badge/language-C-informational)
![License](https://img.shields.io/badge/status-Completed-success)

> **42 Yerevan Project** | 📚 Reading one line at a time from a file descriptor.

---

## 📌 Description

`get_next_line` is a function that reads from a file descriptor and returns one line at a time, including the newline character. It handles buffering, memory allocation, and edge cases like end-of-file (EOF).

This project teaches dynamic memory handling, file reading, and persistent state between function calls.

---

## 🔧 Prototype

```c
char *get_next_line(int fd);

