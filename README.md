# Cost constrained shortest paths
Programming assignment for CS401 to find shortest path from source to destination subject to 2 factors, cost and time. A budget factor is also present which dictates which path to select.

# Compilation instructions
Usage of my implementation is with the following command:
```bash
cpath <file> <s> <d> <budget>
```
"s" is the source vertex
"d" is the destination vertex
"budget" is the fixed cost you can afford to spend on a path
The program reads a graph file for input.
The file reading procedure has been left unchanged from what was provided to start off.
The program only works with integer vertices.