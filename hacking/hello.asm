section .data    	    ;section declaration
msg db "Hello, haxor!",0xa  ;our string with carrige return
len equ $ - msg             ;length of our string
section .text               ;Mandatory section declaration

    global _start		    ; Export the entry point to the ELF linker or loaders conventionally recognize _start as their entry point

_start:

			    
			   ;Now write our string to stdout
    mov edx,len	           ;notice how arguments are loaded in reverse 
    mov ecx,msg	           ;Third argument (messege length)
    mov ebx,1              ;load first argument (file handle(stdout))
    mov eax,4              ;system call number (4=sys_write)
    int 0x80               ;call kernel interrupt and exit
    mov ebx,0	           ;Load first syscall argument (exit code)
    mov eax,1 		   ;system call number (1=sys_exit)
    int 0x80 		   ;call kernel interrupt and exit



