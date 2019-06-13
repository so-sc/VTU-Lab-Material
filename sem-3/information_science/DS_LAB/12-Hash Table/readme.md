# Program 12
Given a File of N employee records with a set K of Keys(4-digit) which uniquely determine the records
in file F. Assume that file F is maintained in memory by a Hash Table(HT) of m memory locations
with L as the set of memory addresses (2-digit) of locations in HT. Let the keys in K and addresses in L
are Integers. Design and develop a Program in C that uses Hash function H: K ®L as H(K)=K mod m
(remainder method), and implement hashing technique to map a given key K to the address space L.
Resolve the collision (if any) using linear probing.

## OUTPUT:
```shell

Enter the number of employee records
5
Enter the two digit memory location
10
Enter the four digit key values employee records
1234
1456
1784
Collision detected and avoided by liner probing1890
1536
Collision detected and avoided by liner probingHash table contents are:
[0]-->1890
[1]-->-1
[2]-->-1
[3]-->-1
[4]-->1234
[5]-->1784
[6]-->1456
[7]-->1536
[8]-->-1
[9]-->-1

```
