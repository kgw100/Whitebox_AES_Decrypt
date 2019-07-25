#include "Whitebox.h"

void find_key(const uint8_t sbow[16][16], const uint8_t	tbox[10][16][256], unsigned int key[16])
{
	for (int k = 0; k < 16; k++) {
		unsigned int i = 0;
		for (; i < 16; i++) {
			for (unsigned int j = 0; j < 16; j++)
			{
				if (sbox[i][j] == tbox[0][k][0])
				{
					key[k] = i * 16 + j;
				}
			}
		}
	}
}


void sr(unsigned int out[16])
{

	unsigned int i, k, s, tmp;

	for (i = 1; i < 4; i++) {
		s = 0;

		while (s < i) {
			tmp = out[i];
			for (k = 0; k < 3; k++) {
				out[k * 4 + i] = out[k * 4 + i + 4];
			}
			out[i + 12] = tmp;
			s++;
		}
	}
}
void rev_sr(unsigned int out[16])
{


	unsigned int i, s, tmp;

	for (i = 1; i < 4; i++)
	{
		s = 0;
		while (s < i) {
			tmp = out[i + 12];
			for (int k = 2; k >= 0; k--)
			{
				out[k * 4 + i + 4] = out[k * 4 + i];
			}
			out[i] = tmp;
			s++;
		}

	}
}

void res_key(unsigned int out[16])
{
	for (int i = 0; i < 16; i++) {
		printf("%c", out[i]);
	}
	printf("\n");
}