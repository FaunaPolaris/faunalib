#include "libfauna.h"

static int	st_define_tiles(char *map_name);

t_map	*load_map(char *map_name)
{
	t_map	*loaded_map;

	loaded_map = (t_map *)calloc(1, sizeof(t_map));
	st_define_tiles(map_name);
	return (loaded_map);
}

static int	st_define_tiles(char *map_name)
{
	FILE	*fp;
	char	*line;
	char	*token;
	size_t	len;
	ssize_t	read;

	line = NULL;
	len = 0;
	read = 0;

	fp = fopen(map_name, "r");
	if (fp == NULL)
		return (0);
	while ((read = getline(&line, &len, fp) != -1))
		{
			printf("%s\n", strtok(line, ", "));
			while ((token = strtok(NULL, ", ")))
				printf("%s\n", token);
		}
	free(line);
	fclose(fp);
	return (1);
}
