#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int start;
	int end;
	int i = 0;
		
	if(argc == 2)
	{   
		while(argv[1][i] != '\0')
            i++;
        //printf("Len: %d\n", i);
		while(i >= 0)
		{
			while( argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')
				i--;
            //printf("end: %d\n", i);
			end = i;
			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			start = i + 1;
            //printf("start: %d\n", start);
			int  flag;
			flag = start;
            //printf("flag: %d\n", flag);
			while(start <= end)
			{
				write (1, &argv[1][start],1);
				start++;		
			}
			if (flag !=0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}