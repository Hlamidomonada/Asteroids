#include "asteroids.hpp"
	asteroid::asteroid() // можно вызывать к-р базового класса и передавать данные ему
    
	{
		dx = rand() % 8 - 4; // оде генераторы C++11?
		dy = rand() % 8 - 4;
		name = "asteroid"; // не стоит использовать строку, лучше константу перечисления
	}

	void asteroid::update() // override?
	{
		x += dx;
		y += dy;

		if (x > W) x = 0;  if (x < 0) x = W;
		if (y > H) y = 0;  if (y < 0) y = H;
	}

};
