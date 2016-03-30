#pragma once
#include "Character.h"
#include "Tile.h"
#include "TextureLoader.h"
#include "SObject.h"
#include <vector>


class EntityManager {
public:
	std::vector<Tile*> map;
	std::vector<Character*> players;
	std::vector<SObject*> sobjects;
	sf::Sprite bg;

	EntityManager() {
		bg.setTexture(*tl.getTexture("Art/Maps/bg_temp.png"));
	}
	void addPlayer(Character* p);
	void addMapTile(Tile* t);
	void addSObject(SObject* so);
	void handleInput();
	void handleMouse(int key);
	void update(float dt);
	void logic(float dt);
	void render(sf::RenderTarget &g);
	void resolveCollisions(float dt);
};


