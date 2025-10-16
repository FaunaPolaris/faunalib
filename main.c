#include "libfauna.h"

int main(void)
{
	t_map	*starting_map;

	starting_map = load_map("maps/test_map.map");
	free(starting_map);
	return(1);
}
