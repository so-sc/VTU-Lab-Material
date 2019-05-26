    AREA Program, CODE, READONLY
    ENTRY
start
    MOV R0, #0x40000000
    LDR R1, [R0]
    ADD R0, R0, #04
    LDR R2, [R0]
    AND R1, R1, R2
    ADD R0, R0, #04
    STR R1, [R0]
SAME B SAME
    END 