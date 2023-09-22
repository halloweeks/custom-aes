#include <stdio.h>
#include "AES.h"

int main(int argc, const char *argv[]) {
	// AES-128 KEY FOR ENCRYPT AND DECRYPT
	uint8_t key[16] = {
		0xA9, 0x90, 0x7C, 0x88, 0x8F, 0xE1, 0x72, 0x33,
		0x90, 0xF5, 0x78, 0xE9, 0x57, 0x90, 0xE3, 0x58
	};
	
	// EXAMPLE DATA 64 BYTE MULTIPLE AES BLOCKS
	uint8_t data[64] = "This is test aes-128-cbc encrypt and decrypt in c language.....";
	
	// PRINT ORIGINAL DATA
	printf("ORIGINAL DATA: \n");
	for (uint8_t index = 0; index < 64; index++) {
		printf("%02X, ", data[index]);
	}
	printf("\n");
	
	// ENCRYPT DATA
	EncryptData(data, 64, key);
	
	// PRINT ENCRYPTED DATA
	printf("ENCRYPTED DATA: \n");
	for (uint8_t index = 0; index < 64; index++) {
		printf("%02X, ", data[index]);
	}
	printf("\n");
	
	// DECRYPT DATA
	DecryptData(data, 64, key);
	
	// PRINT DECRYPTED DATA
	printf("DECRYPTED DATA: \n");
	for (uint8_t index = 0; index < 64; index++) {
		printf("%02X, ", data[index]);
	}
	printf("\n");
	
	return 0;
}