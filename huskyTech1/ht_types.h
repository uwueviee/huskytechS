#pragma once
#include "Sprite.h"

struct Point {
	float x = 0;
	float y = 0;
};

//unsafe, but ehh heck it (:
enum TileType {
	GRASS = 0,
	STONE = 1,
	DEV1 = 2,
	DEV2 = 3,
};