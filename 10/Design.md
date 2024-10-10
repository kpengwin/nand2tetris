## Plan

Write the compiler in C as a learning project.


## Tooling

- C
- gcc compiler
- make
- rktest.h for testing

## Implementation steps

1. [done] Implement a usable linked-list type for strings 
2. [done] Implement a more ergonomic rich linked list (keeping place, insert either end, len, etc)
    a. [done] insert/remove individual node
3. [done] Get it working to parse the file into the list
4. [done] Create tokenizer (10.4.1)
5. [done] Create simple compillation engine (10.4.2 a)
 * [done] Create .c and .h files, outline functions
 * Create tests in test.c
 * [done] Implement functions until the tests pass
6. Complete compilation engine expressions (10.4.2 b)
 * Create tests in test.c
 * Implement functions until the tests pass
7. Complete compilation engine arrays (10.4.2 c)
 * Create tests in test.c
 * Implement functions until the tests pass
8. Roll the compilation engine functionality into main.c (actually use it)
9. Implement directory handling instead of just file handling
10. Implement output to file option instead of stdout



## Open Questions
1. In C is the right approach something like making a struct for a node and then another struct that holds nodes and any metadata, and then a series of functions to operate on the structs which take the struct in question as the first argument, as an approximation of OOP? A: Yeah basically this seems to work.
2. When allocating memory for the ll, should it be node by node or do we need to get fancy by allocating a block and then using it until it runs out? Or just having a fixed max size? A: doing per node for now, any different implementation can be hidden in the create functions. A2: Consider using arenas as the best practice way to do this. For now we are strictly assuming that the field content of a node lives only as long as the node which contains it.
