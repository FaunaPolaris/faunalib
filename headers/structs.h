#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct s_tile
{
	int		is_exit;
	int		is_inpassable;
	char	*exit;
}	t_tile;

typedef struct s_map
{
	char 	*map_name;
	t_tile	**tiles;
}	t_map;

#endif
