void test_function(int a, int b, int c, int d) 
{
    int flag;
    char buffer[10];

    flag = 31337;
    buffer[0] = 'A';
}

int main() 
{
    test_function(1, 2, 3, 4);
}
/*
(gdb) disass main                                        //disassemble main
Dump of assembler code for function main:                     
   0x00000000000006af <+0>:     push   rbp  -------          when program runs it sets up the function prologue aka stack frame.
   0x00000000000006b0 <+1>:     mov    rbp,rsp             the instructions save the frame pointer on the stack and save stack memory for the local function variables  
   0x00000000000006b3 <+4>:     mov    ecx,0x4             the prologue instructions vary depending on compiler and compiler options. but in general the marked instructions set up the stack frame.
   0x00000000000006b8 <+9>:     mov    edx,0x3
   0x00000000000006bd <+14>:    mov    esi,0x2
   0x00000000000006c2 <+19>:    mov    edi,0x1 ---------
   0x00000000000006c7 <+24>:    call   0x66a <test_function> ------when the call instruction is executed the return adress is pushed onto the stack and execution flow jumps to the start of test function at 0x000055555555466a
   0x00000000000006cc <+29>:    mov    eax,0x0 ------// flag = 31337;
   0x00000000000006d1 <+34>:    pop    rbp -----// buffer[0] = 'A';
   0x00000000000006d2 <+35>:    ret ---- Pop return address from stack and jump there
End of assembler dump.

(gdb) disass test_function
Dump of assembler code for function test_function:
   0x000055555555466a <+0>:     push   rbp                            when the test function is called the values are pushed on to the stack in reverse 4, 3, 2, 1 (FILO)
   0x000055555555466b <+1>:     mov    rbp,rsp                        
   0x000055555555466e <+4>:     sub    rsp,0x30
   0x0000555555554672 <+8>:     mov    DWORD PTR [rbp-0x24],edi------------------- These marked instructions push the values on to the stack
   0x0000555555554675 <+11>:    mov    DWORD PTR [rbp-0x28],esi
   0x0000555555554678 <+14>:    mov    DWORD PTR [rbp-0x2c],edx
   0x000055555555467b <+17>:    mov    DWORD PTR [rbp-0x30],ecx-------------------
   0x000055555555467e <+20>:    mov    rax,QWORD PTR fs:0x28
   0x0000555555554687 <+29>:    mov    QWORD PTR [rbp-0x8],rax
   0x000055555555468b <+33>:    xor    eax,eax
   0x000055555555468d <+35>:    mov    DWORD PTR [rbp-0x18],0x7a69
   0x0000555555554694 <+42>:    mov    BYTE PTR [rbp-0x12],0x41
   0x0000555555554698 <+46>:    nop
   0x0000555555554699 <+47>:    mov    rax,QWORD PTR [rbp-0x8]
   0x000055555555469d <+51>:    xor    rax,QWORD PTR fs:0x28
   0x00005555555546a6 <+60>:    je     0x5555555546ad <test_function+67>
   0x00005555555546a8 <+62>:    call   0x555555554540 <__stack_chk_fail@plt>
   0x00005555555546ad <+67>:    leave
   0x00005555555546ae <+
*/