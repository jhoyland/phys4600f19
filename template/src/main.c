
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

uint8_t keep_going = 1;

void loop()
{

}

void setup()
{

}

int main()
{
	setup();
	while(keep_going) loop();
 
	return 0;
}