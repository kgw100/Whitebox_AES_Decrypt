#include "Whitebox.h"

//static const uint8_t tbox[10][16][256];
//static const uint8_t sbox[16][16];

int main()
{
	unsigned int key[16]; //����� Ű 

	find_key(sbox,tbox, key); // key => { 0x42,0x65, 0x76,0x61,0x3f, 0x57, 0x74, 0x21, 0x73, 0x56, 0x42, 0x38, 0x44, 0x4f, 0x4d, 0x71 };

	rev_sr(key);  // Ű ��ȣȭ(������)
	res_key(key); // ��ȣȭ�� Ű�� ����ϴ� �Լ� 

	// Key is BOB!?eM8sWvqDVta
}


