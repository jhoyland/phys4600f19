#include <stdio.h>
#include <stdlib.h>
#include <math.h>	
//#include <visa.h>

void main(int argc, char** argv)
{
/*	unsigned char resultBuffer[256];
	ViStatus status = VI_SUCCESS;
	ViFindList resourceList;
	ViUInt32 num_inst;
	ViUInt32 resultCount;

	ViSession defaultRM, scopeHandle;
	ViChar description[VI_FIND_BUFLEN];
	char dataBuffer[2500];

	int y;

	int lsb;
	int msb;

	setvbuf(stdout, NULL, _IOLBF, 0);

<<<<<<< HEAD
	status = viOpenDefaultRM(&defaultRM);*/

	printf("\nAttempting to open\0");

/*	if(status == VI_SUCCESS)
	{

=======


	if(status == VI_SUCCESS)
	{
<<<<<<< HEAD
		status = viFindRsrc(defaultRM,"USB[0-9]::0x0699?*INSTR",&resourceList,&num_inst,description);
		if(status == VI_SUCCESS)
		{
			status = viOpen(defaultRM,description,VI_NULL,VI_NULL,&scopeHandle);
=======
>>>>>>> 52dae5f5d7d0a5865c92d71e23b73b8dcbbc5aed
		status = viFindRsrc(defaultRM,"USB[0-9]::?*INSTR",	&resourceList,&num_inst,description);
		if(status == VI_SUCCESS)
		{
			status = viOpen(defaultRM,description,	VI_NULL,VI_NULL,&scopeHandle);
>>>>>>> 1f7d2a36932c8e4e73a683247a4afcc1915d63e3

			if(status == VI_SUCCESS)
			{
				printf("\nOpened %s\n",description);

				viWrite(scopeHandle,"*IDN?\n",6,&resultCount);
				viRead(scopeHandle,resultBuffer,256,&resultCount);

				printf("\nResult count = %d",resultCount);
				printf("\nResult buffer = %s\n",resultBuffer );

				viWrite(scopeHandle,"CURV?\n",6,&resultCount);
				viRead(scopeHandle,dataBuffer,2500,&resultCount);

				for(int i = 0; i<128; i++)
				{
					y = dataBuffer[i];
					printf("\nRaw = %x,  Read = %d",y,y);
				}
			}
			else
			{
				printf("\nFailed to open %s",description);
			}
		}
		else
		{
			printf("\nCouldn't find any instruments");
		}
	}
	else
	{
		printf("\nFailed to open defaultRM");
	}*/
}