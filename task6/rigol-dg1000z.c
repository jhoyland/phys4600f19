#include <rigol-dg1000z.h>

#define CMD_SOURCE ":SOUR%d"

#define TEMPLATE_SOURCE_FREQ ":SOUR%d:FREQ %E\n"
#define TEMPLATE_OUTPUT_ON 	":OUTP%d ON\n"
#define TEMPLATE_OUTPUT_OFF ":OUTP%d OFF\n"

ViStatus vi_command_write_int(ViSession instrument, const char* command_template, int arg)
{
	ViStatus stat = VI_SUCCESS;
	char command[128];
	int returnCount;
	sprintf(command,command_template,arg);
	stat = viWrite(instrument,command,strlen(command),&returnCount);
	return stat;
}

ViStatus vi_command_write_int_float(ViSession instrument, const char* command_template, int iarg, float farg)
{
	ViStatus stat = VI_SUCCESS;
	char command[128];
	int returnCount;
	sprintf(command,command_template,arg,farg);
	stat = viWrite(instrument,command,strlen(command),&returnCount);
	return stat;
}

ViStatus set_freq(ViSession instrument, int ch, float freq)
{
	return vi_command_write_int_float(instrument, TEMPLATE_SOURCE_FREQ,ch,freq);
}

ViStatus output_on(ViSession instrument, int ch)
{
	return vi_command_write_int(instrument,TEMPLATE_OUTPUT_ON,ch);
}

ViStatus output_off(ViSession instrument, int ch)
{
	return vi_command_write_int(instrument,TEMPLATE_OUTPUT_OFF,ch);
}

ViStatus source_sin(ViSession instrument, int ch)
{
	ViStatus stat = VI_SUCCESS;
	char command[12];
	int returnCount;
	sprintf(command,TEMPLATE_OUTPUT_ON,ch);
	stat = viWrite(instrument,command,strlen(command),&returnCount);
	return stat;	
}

