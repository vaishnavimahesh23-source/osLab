# PROGRAM 9 : MEMORY MANAGEMENT - PAGE REPLACEMENT ALGORITHMS

## AIM :
To simulate page replacement algorithms (FIFO, LRU, and Optimal) (Memory management)

## CONTEXT :
FIFO (First-In, First-Out) Page Replacement Algorithm, which is one of the page replacement techniques used by an operating system for virtual memory management.
When the CPU requests a page that is not currently in the available memory frames, a page fault occurs. If all memory frames are occupied, the operating system must decide which page to remove to make room for the new page. The FIFO algorithm replaces the page that has been in memory the longest (the oldest page).

## SOURCE CODE :
**File :** [exp9.c](https://github.com/Balakrishna-0907/osLab/blob/6bf0c00de53bfd283a81a41ff60216a7f600ff74/ex09/exp9.c)

## COMPILATION :

```bash
gcc exp9.c -o exp9
```

## EXECUTION :

```bash
./exp9
```

## OUTPUT :
![Output for Experiment 9](https://github.com/Balakrishna-0907/osLab/blob/0735d9171ec33efe92082c35345411d861fa2704/ex09/output.png)
