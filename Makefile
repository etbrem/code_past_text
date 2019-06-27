
poc: clean
	gcc -T linker_script poc.c -o poc -Wl,--verbose
clean:
	touch poc
	rm poc
