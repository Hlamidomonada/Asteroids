#ifndef _ENTITY_HPP
#define _ENTITY_HPP_

#include <SFML/Graphics.hpp>
#include "const.hpp"
#include "animation.cpp"

class Entity
{
public:
	float x, y, dx, dy, R, angle;
	bool life;
	std::string name;
	Animation anim;

	Entity();

	void settings(std::unique_ptr<Animation> a, int X, int Y, float Angle = 0, int radius = 1);

  virtual void update();

	void draw(RenderWindow& app);

	virtual ~Entity();
};
#endif
