#ifndef __STRUCT_H__
#define __STRUCT_H__

enum hero_type {
	loris,
	leandre,
	robin,
	mateo,
	dylan,
};

typedef struct stat_s {
	int str;
	int def;
	int m_str;
	int m_def;
	int crit;
} stat_t;

typedef struct hero_s {
	int type;

	sfSprite *sprite;
	sfTexture *texture;
	sfVector2f *position;
	sfVector2f *scale;
	int hp;
	int mp;
	int xp;
	int lvl;
	stat_t *stat;

	struct hero_s *next;
} hero_t;

typedef struct window_s {
	sfRenderWindow *window;
	sfVideoMode mode;
} window_t;

typedef struct map_s
{
	char *map_1d;
	char *map_2d;
	char **colision;
	char **map_c;
	char **map_d;
	sfSprite ***blocks_1d;
	sfSprite ***blocks_2d;
	sfTexture ***text_tab;
	int lar;
	sfIntRect rect;
	sfSprite **bg;
	sfTexture *text;
	sfClock *clock;
	float seconds;
} map_t;

#endif
