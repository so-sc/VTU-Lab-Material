# Data Structures Lab Material (17CSL38)
 [![Languages](https://img.shields.io/badge/Language-C-blue.svg?style=for-the-badge)](https://sosc.org.in) [![SOSC](https://is.gd/visit_sosc_badge)](https://sosc.org.in) 
 
### SYLLABUS

| Program No.| Question |
| ------- | ------ |
| Program-01 | Design, Develop and Implement a menu driven Program in C for the following Array operations
a. Creating an Array of N Integer Elements
b. Display of Array Elements with Suitable Headings
c. Inserting an Element (ELEM) at a given valid Position (POS)
d. Deleting an Element at a given valid Position(POS)
e. Exit.
Support the program with functions for each of the above operations.
 |
| Program-02 | Design, Develop and Implement a Program in C for the following operations on Strings
a. Read a main String (STR), a Pattern String (PAT) and a Replace String (REP)
b. Perform Pattern Matching Operation: Find and Replace all occurrences of PAT in STR with
REP if PAT exists in STR. Report suitable messages in case PAT does not exist in STR
Support the program with functions for each of the above operations. Don't use Built-in functions. |
| Program-03 | Design, Develop and Implement a menu driven Program in C for the following operations on STACK
of Integers (Array Implementation of Stack with maximum size MAX)
a. Push an Element on to Stack
b. Pop an Element from Stack
c. Demonstrate how Stack can be used to check Palindrome
d. Demonstrate Overflow and Underflow situations on Stack
e. Display the status of Stack
f. Exit
Support the program with appropriate functions for each of the above operations  |
| Program-04 | Design, Develop and Implement a Program in C for converting an Infix Expression to Postfix
Expression. Program should support for both parenthesized and free parenthesized expressions with the
operators: +, -, *, /, %( Remainder), ^ (Power) and alphanumeric operands.
|
| Program-05 | Design, Develop and Implement a Program in C for the following Stack Applications 
a. Evaluation of
Suffix expression with single digit operands and operators: +, -, *, /, %, ^ 
b. Solving Tower of Hanoi
problem with n disks.|
| Program-06 | Design, Develop and Implement a menu driven Program in C for the following operations on Circular
QUEUE of Characters (Array Implementation of Queue with maximum size MAX)
a. Insert an Element on to Circular QUEUE
b. Delete an Element from Circular QUEUE
c. Demonstrate Overflow and Underflow situations on Circular QUEUE
d. Display the status of Circular QUEUE
e. Exit
Support the program with appropriate functions for each of the above operations |
| Program-07 | Design, Develop and Implement a menu driven Program in C for the following operations on Singly
Linked List (SLL) of Student Data with the fields: USN, Name, Branch, Sem, PhNo
a. Create a SLL of N Students Data by using front insertion.
b. Display the status of SLL and count the number of nodes in it
c. Perform Insertion and Deletion at End of SLL
d. Perform Insertion and Deletion at Front of SLL
e. Demonstrate how this SLL can be used as STACK and QUEUE
f. Exit
|
| Program-08 | Design, Develop and Implement a menu driven Program in C for the following operations on Doubly
Linked List (DLL) of Employee Data with the fields: SSN, Name, Dept, Designation, Sal, PhNo
a. Create a DLL of N Employees Data by using end insertion.
b. Display the status of DLL and count the number of nodes in it
c. Perform Insertion and Deletion at End of DLL
d. Perform Insertion and Deletion at Front of DLL
e. Demonstrate how this DLL can be used as Double Ended Queue
f. Exit |
| Program-09 |Design, Develop and Implement a Program in C for the following operations on Singly Circular
Linked List (SCLL) with header nodes
a. Represent and Evaluate a Polynomial P(x,y,z) = 6x2y2z-4yz5+3x3yz+2xy5z-2xyz3
b. Find the sum of two polynomials POLY1(x,y,z) and POLY2(x,y,z) and store the result in
POLYSUM(x,y,z)
Support the program with appropriate functions for each of the above operations
 |
| Program-10 | Design, Develop and Implement a menu driven Program in C for the following operations on Binary
Search Tree (BST) of Integers
a. Create a BST of N Integers: 6, 9, 5, 2, 8, 15, 24, 14, 7, 8, 5, 2
b. Traverse the BST in Inorder, Preorder and Post Order
c. Search the BST for a given element (KEY) and report the appropriate message
d. Delete an element(ELEM) from BST
e. Exit |
| Program-11| Design, Develop and Implement a Program in C for the following operations on Graph(G) of Cities
a. Create a Graph of N cities using Adjacency Matrix.
b. Print all the nodes reachable from a given starting node in a digraph using BFS method
c. Check whether a given graph is connected or not using DFS method.|
| Program-12 | Given a File of N employee records with a set K of Keys(4-digit) which uniquely determine the records
in file F. Assume that file F is maintained in memory by a Hash Table(HT) of m memory locations
with L as the set of memory addresses (2-digit) of locations in HT. Let the keys in K and addresses in L
are Integers. Design and develop a Program in C that uses Hash function H: K ®L as H(K)=K mod m
(remainder method), and implement hashing technique to map a given key K to the address space L.
Resolve the collision (if any) using linear probing. |

# Installation and  requirements 
- Since the programs are run in Ubuntu for the labs, the following are instructions are to execute them accordingly
1. Click [here](https://github.com/so-sc/VTU-Lab-Material/archive/master.zip) to clone the repository with the below command:
    ```sh
    $ git clone https://github.com/so-sc/VTU-Lab-Material.git
    ``` 
2. Open a terminal and type the below command to change directory into `VTU-Lab-Material/sem-3/computer_science/DS_LAB`

    ```sh
    $ cd VTU-Lab-Material/sem-3/computer_science/DS_LAB
    ```
3. To compile and execute the C program using GCC (GNU Compiler Collection)
    ```sh
    $ gcc Program_Name.c
    ```
4. Run the compiled executable `a.out`
    ```sh
    $./a.out
    ```
    
## Contributing
If you'd like to contribute to the repository, read [CONTRIBUTING.md](https://github.com/so-sc/VTU-Lab-Material/blob/master/CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.
