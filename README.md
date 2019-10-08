## Number cross solver by using z3 solver.
###
###
##### This program takes number cross puzzle through standard input and provides solution for the puzzle.   
###
###
### Input. 
###
##### Each number in the first line should be the sum of numbers in the Black squares of the column.
##### After first line, each number at the last of the row should be the sum of numbers in the White quares of the row.
##### *No line feed after the last number
##### For a 7x7 number cross example:
```c
3 25 9 23 5 6 7
1 2 3 4 5 6 7 17
1 3 5 7 9 2 4 21
6 8 7 6 5 4 3 25
2 1 7 4 5 3 2 17
2 6 1 9 2 2 2 13
1 9 1 1 8 6 3 17
1 7 3 9 7 1 1 16
```
###
### Output 
###
##### The solution provides information on each squares about their color.
```c
0 1 0 1 1 0 0 
1 0 1 0 0 0 1 
0 1 0 1 0 0 0 
0 0 0 1 0 1 0 
1 1 1 0 0 1 0 
0 1 0 0 0 0 1 
0 0 1 1 0 1 0 
```

##### "No solution" will be printed if there is no solution.
###
###
### Instruction
###
##### To build this program, 
```
make
```
###
##### To run this program,
```
hw1.out < input
```
###
##### When executed, the program will make seperate file called "formula" which contains the input for z3 solver for reference.
