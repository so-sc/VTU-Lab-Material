/*Given a file of N employee records with a set K of Keys(4-digits) which uniquely determine the records in file F.
Assume that file F is maintained in memory by a Hash Table(HT) of m memory locations with L as the set of memory address
(2-digit) of locations in HT. Let the keys in K and address in L are Integers. Design and develop a 
Program in C that uses Hash Function H: K ®L as H(K)=K mod m (remainder method), and implement hashing technique to map given key K to the address space
*/

#include <stdio.h>
#include <stdlib.h>

int key, m, *ht, hi, elec = 0, flag = 0;

void createht()
{
    int i;
    ht = (int *)malloc(m * sizeof(int));
    if (m == 0)
    {
        printf("Unable to create hash table");
        exit(0);
    }
    else
    {
        for (i = 0; i < m; i++)
            ht[i] = -1;
    }
}

void insertht(int key)
{
    hi = key % m;
    while (ht[hi] != -1)
    {
        hi = (hi + 1) % m;
        flag = 1;
    }
    if (flag)
    {
        printf("Collision detected and avoided by linear probing");
        flag = 0;
    }
    ht[hi] = key;
    elec++;
}

void displayht()
{
    int i;
    if (elec == 0)
    {
        printf("Hash table is empty\n");
        return;
    }
    printf("Hash table contents are: \n");
    for (i = 0; i < m; i++)
        printf("[%d]-->%d\n", i, ht[i]);
}

void main()
{
    int i, n;
    printf("Enter the number of employee records: \n");
    scanf("%d", &n);
    printf("Enter the two digit memory location: \n");
    scanf("%d", &m);
    if (m < n)
    {
        printf("Not enough space in the hash table!\n");
        return;
    }
    createht();
    printf("Enter the four digit key values employee records: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &key);
        insertht(key);
    }
    displayht();
}

/*
OUTPUT:

Enter the number of employee records
5
Enter the two digit memory location
10
Enter the four digit key values employee records
1234
1456
1784
Collision detechtd and avoided by liner probing1890
1536
Collision detechtd and avoided by liner probingHash table contents are:
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
*/
