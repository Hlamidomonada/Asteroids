#ifndef _ANIMATION_HPP
#define _ANIMATION_HPP

#include <SFML/Graphics.hpp>

class Animation
{
public:
	float Frame, speed;
	Sprite sprite;
	std::vector<IntRect> frames;

	Animation();
  
	Animation(Texture& t, int x, int y, int w, int h, int count, float Speed);

  void update();

	bool isEnd();
	

};
#endif
