# ⎇ get_next_line

![42 Yerevan](https://img.shields.io/badge/42_Yerevan-Project_%232-blueviolet)
![C Language](https://img.shields.io/badge/Language-C-00599C?logo=c)
![Status](https://img.shields.io/badge/Status-Validated-brightgreen)
![Performance](https://img.shields.io/badge/Speed-Optimized-success)
![Memory](https://img.shields.io/badge/Memory-Leak_Free-important)

> **Efficient line-by-line file reader** | 🚀 A sophisticated solution for buffered sequential file access in C
> 📜 Reads lines of any length from file descriptors without loading entire files into memory
---

## 🌟 Project Highlights

**get_next_line** implements an advanced buffering system to:
- Read any file descriptor (files, stdin, sockets)
- Maintain state between calls with static variables
- Handle memory allocation optimally
- Process files of unlimited size
- Support multiple file descriptors simultaneously

```c
// Function prototype
char *get_next_line(int fd);
