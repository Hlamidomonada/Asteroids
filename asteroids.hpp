#ifndef _ASTEROIDS_HPP
#define _ASTEROIDS_HPP

#include "entity.cpp"
#include "const.hpp"

class asteroid : public Entity // класс с Бб!
{
public:
	asteroid();

	void update();
	
};
#endif
