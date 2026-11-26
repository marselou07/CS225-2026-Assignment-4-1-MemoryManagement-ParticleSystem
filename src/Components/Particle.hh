#pragma once
#include "../Framework/entity.hh"
#include <vector>
static const int POOL_SIZE = 1000;
static const int CHUNK_SIZE = 72;
static char buffer[POOL_SIZE * CHUNK_SIZE];
static bool occupirf[POOL_SIZE];
class Particle : public Entity
{
public:
	AEVec2 position;
	AEVec2 velocity;
	float life;
	float maxLife;
	int color;
};