
void main(void)
{
	const char *str = "And then there was the kernel.";
	char *vidptr = (char*)0xb8000; //vid mem
	unsigned int i = 0;
	unsigned int j = 0;

	while(j < 80*25*2) 
	{
		vidptr[j] = ' ';
		vidptr[j+1] = 0x07;  //light gray on screen 
		j = j+2;
	}
	
	j=0;

	 while(str[j] != '\0')
        {
                vidptr[i] = str[j];
                vidptr[i+1] = 0x07;  //light gray on screen 
                ++j;
		i = i+2;
        }

        return;


}
