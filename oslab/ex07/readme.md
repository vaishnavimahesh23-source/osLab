# PROGRAM 7 : INTER-PROCESS COMMUNICATION USING SHARED MEMORY

## AIM :
To demonstrate inter-process communication between processes using shared memory segments and implement operations to create, access, modify, and release shared memory resources.

## CONTEXT :
Inter-Process Communication (IPC) is the set of mechanisms that allow processes to communicate (using Shared memory, Pipes, Sockets, Signals) and synchronize with each other while running. 
We explore, Shared memory: It is one of the fastest IPC mechanisms because multiple processes can directly access the same region of memory without repeatedly transferring data between them.

## LINUX SYSTEM CALLS / FUNCTIONS USED

| System Call / Function | Function |
|---|---|
| `shm_open()` | Creates or opens a shared memory object. |
| `ftruncate()` | Sets the size of the shared memory object. |
| `mmap()` | Maps the shared memory object into the process's address space. |
| `fork()` | Creates a child process. |
| `wait()` | Makes the parent process wait until the child process finishes. |
| `munmap()` | Removes the mapped shared memory region from the process's address space. |
| `close()` | Closes the shared memory object descriptor. |
| `shm_unlink()` | Deletes the shared memory object from the system after use. |
| `sleep()` | Suspends execution for a specified number of seconds (used here to ensure the parent writes before the child reads). |

## SOURCE CODE :
**File :** [exp7.c](https://github.com/Balakrishna-0907/osLab/blob/70316965500471adaa1a776957538d59e00b565a/ex07/exp7.c)
## COMPILATION :

```bash
gcc exp7.c -o exp7
```

## EXECUTION :

```bash
./exp7
```

## OUTPUT :
![Output for Experiment 6](https://github.com/Balakrishna-0907/osLab/blob/8b7aba9aa1d69a8dde0b0be80a911b4d695bec61/ex07/output.png)
