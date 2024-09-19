## Plan

Write the compiler in C as a learning project.


## Tooling

- C
- gcc compiler
- make

## Implementation steps

1. Implement a usable linked-list type for strings [done]
2. Implement a more ergonomic rich linked list (keeping place, insert either end, len, etc) [good enough]
    a. insert/remove individual node [done]
3. Get it working to parse the file into the list [done]
4. Create tokenizer
5. Implement the tree type to hold the AST
6. Work on the rules for recursively parsing into the AST


## Open Questions
1. In C is the right approach something like making a struct for a node and then another struct that holds nodes and any metadata, and then a series of functions to operate on the structs which take the struct in question as the first argument, as an approximation of OOP? A: Yeah basically this seems to work.
2. When allocating memory for the ll, should it be node by node or do we need to get fancy by allocating a block and then using it until it runs out? Or just having a fixed max size? A: doing per node for now, any different implementation can be hidden in the create functions.
