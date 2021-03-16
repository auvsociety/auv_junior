# Session #2.1 notes

- [ ] Compile a single C file
```
gcc hello.c -o hello.out
```
- [ ] Show temporary files
```
gcc hello.c -save-temps -o hello.out
```

- [ ] Compile multiple C files
```
gcc main.c arithmetic.c user_interface.c -o main.out
```

- [ ] Multiple C files with a folder structure
```
gcc main.c arithmetic.c user_interface.c -I../include -o main.out
```

- [ ] Multiple C files with a better folder structure
```
gcc ../src/main.c ../src/arithmetic.c ../src/user_interface.c -I../include -o main.out

gcc main.c arithmetic.c user_interface.c -I../include -o ../bin/main.out
```

- [ ] Multiple C files with a better folder structure and MAKE


## Resources
### For build process
- [Link 1](https://www.linkedin.com/pulse/c-build-process-details-abdelaziz-moustafa/)
- [Link 2](https://www.hackerearth.com/practice/notes/build-process-cc/)
- [Link 3](https://www.geeksforgeeks.org/compiling-a-c-program-behind-the-scenes/)

### For make
- [Link 1](https://www.tutorialspoint.com/makefile/index.htm)
- [Link 2](https://makefiletutorial.com/)