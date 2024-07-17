(INIT)
    //loop
    @DRAWWHITE
    D=A
    @R11
    M=D
(RESET)
    //end of loop
    @END
    D=A
    @R12
    M=D
    //start
    @16383
    D=A
    @R13
    M=D
    //end
    @24575
    D=A
    @R14
    M=D
    //step
    @1
    D=A
    @R15
    M=D
    //go
    @FOR
    0;JMP

(END)
    //switch to black if kbd pressed
    @KBD
    D=M
    @INIT
    D;JEQ
    @DRAWBLACK
    D=A
    @R11
    M=D
    //can init rest same as initially
    @RESET
    0;JMP

(DRAWBLACK)
    A=D
    M=-1
    @FOR
    0;JMP
(DRAWWHITE)
    A=D
    M=0
    @FOR
    0;JMP

//For x in
//Loop Address: R11
//Done Address: R12
//Start/x: R13
//End: R14
//Step: R15
(FOR)
    @R13
    D=M
    @R14
    D=D-M
    @FOREND
    D;JEQ
    (FORLOOP)
        @R15
        D=M
        @R13
        MD=D+M
        @R11
        A=M
        0;JEQ
    (FOREND)
        @R12
        A=M
        0;JEQ

