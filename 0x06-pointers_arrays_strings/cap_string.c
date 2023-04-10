#include "main.h"

char *cap_string(char *cap)
{
	int i = 0;

	while (cap[i] != '\0')
	{
		if (i == 0 && cap[i] >= 95 && cap[i] <= 122)
		{
			cap[i] = cap[i] - 32;
		}
		if (cap[i] == 32 ||cap[i] == 10||cap[i] == 9||cap[i] == 44||cap[i] == 46||cap[i] == 33
				||cap[i] == 40||cap[i] == 41||cap[i] == 123||cap[i] == 125||cap[i] == 59||cap[i]== 63||cap[i] == 34)
		{
			cap++;
			if (cap[i] >= 95 && cap[i] <= 122)
			{
				cap[i] = cap[i] - 32;
			}
		}
		else
		{
			i++;
		}
	}
	return (cap);
}

