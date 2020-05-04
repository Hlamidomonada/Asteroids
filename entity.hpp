#ifndef _ENTITY_HPP
#define _ENTITY_HPP_

#include <SFML/Graphics.hpp>
#include "const.hpp"
#include "animation.cpp"

class Entity
{
public:
	float x, y, dx, dy, R, angle; // публичные данные?
	bool life; // именование с мб и с m_ в начале
	std::string name;
	Animation anim;

	Entity(); // = default?

	void settings(Animation& a, int X, int Y, float Angle = 0, int radius = 1); // переменные с Бб

  virtual void update(); // табуляция съехала

	void draw(RenderWindow& app);

	virtual ~Entity(); // = default?
};
#endif
