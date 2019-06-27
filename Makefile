
poc: clean
	gcc -nostdlib -T linker_script poc.c -o poc 
clean:
	touch poc
	rm poc
