

unsigned char non_malicious_data_totally_not_shellcode[] __attribute__((section ("START_OF_DATA"))) = \
"\x50\x48\x31\xd2\x48\x31\xf6\x48\xbb\x2f\x62\x69\x6e\x2f\x2f\x73\x68\x53\x54\x5f\xb0\x3b\x0f\x05\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41\x41";


char* strcpy(char *dst, char *src){
	while(*src)*dst++=*src++;
	return dst;
}

void main(){
	strcpy(non_malicious_data_totally_not_shellcode, "This won't affect the shellcode");
	START_OF_DATA_RX_MAP();
}