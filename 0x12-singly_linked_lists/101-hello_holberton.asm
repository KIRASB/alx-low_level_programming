global   main
	  extern    printf
main:
	  mov   edi, tet
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
tet: db `Hello, Holberton\n`,0
