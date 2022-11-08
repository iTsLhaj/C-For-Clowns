
#include <stdio.h>

// this is what nesting statments is
int main(int argc, char** argv)
{
	int is_alive = 0;
	int is_dead = 0;
	int is_zero_hp = 1;
	int is_afk = 0;
	int ban = 0;


	if(is_afk)
	{
		if(is_zero_hp)
		{
			is_dead = 1;
			is_afk = 0;

			if(ban)
			{
				ban = 0;
				if(is_afk)
				{
					ban = 1;
				}
			}

		}else{
			ban = 1;
		}
	}else{
		is_zero_hp = 0;
		is_alive = 1;
	}


	return 0;
}
