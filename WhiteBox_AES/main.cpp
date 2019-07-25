#include "Whitebox.h"

//static const uint8_t tbox[10][16][256];
//static const uint8_t sbox[16][16];

int main()
{
	unsigned int key[16]; //저장될 키 

	find_key(sbox,tbox, key); // key => { 0x42,0x65, 0x76,0x61,0x3f, 0x57, 0x74, 0x21, 0x73, 0x56, 0x42, 0x38, 0x44, 0x4f, 0x4d, 0x71 };

	rev_sr(key);  // 키 복호화(역연산)
	res_key(key); // 복호화한 키를 출력하는 함수 

	// Key is BOB!?eM8sWvqDVta
}


