global   main
	  extern    printf
main:
	  mov   edi, test
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
test: db `Hello, Holberton\n`,0
