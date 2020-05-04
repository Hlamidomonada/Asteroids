#ifndef _ANIMATION_HPP
#define _ANIMATION_HPP // можно pragma once

#include <SFML/Graphics.hpp>

class Animation
{
public:
	float Frame, speed; // почему данные публичные? Frame с ББ?
	Sprite sprite; // именование с m_ лучше делать
	std::vector<IntRect> frames; // стоит добавить include vector

	Animation(); // тут мы обычно пишем = default, но он вообще нужен?
  
	Animation(Texture& t, int x, int y, int w, int h, int count, float Speed);

  void update();

	bool isEnd(); // надо добавить const, т.к. функция не изменяет объект
	

};
#endif
