#include<8051.h>
int i;

void main()
{
	unsigned int arr[43]= {160, 172, 184, 196, 208, 215, 220, 255, 255, 
						   255, 255, 255 ,255, 255, 255, 255, 192, 196, 200, 
						   204, 208, 212, 216, 220, 128, 128, 128, 128, 128,
						   128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
						   128, 128,128, 128};

	while(1)
		{
			for(i = 0; i<43;i++)
				{P2 = arr[i];}
		}
}