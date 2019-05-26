TTL ONESCOMP
AREA Program, CODE, READONLY
ENTRY
MAIN
    LDR R1, VALUE ; Load the number to be complimented
    MVN R1, R1 ; NOT the contents of R1
    MOV R3, #0X40000000
    STR R1, [R3] ; Store the result
HERE B HERE
VALUE DCD &0123; Value to be complemented
    END