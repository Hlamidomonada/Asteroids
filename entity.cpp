#include "entity.hpp"

	entity::Entity() // опять где-то маленькая буква, где-то большая
	{ // списки инициализации?
		life = 1;
	}

	void entity::settings(Animation& a, int X, int Y, float Angle = 0, int radius = 1) // для float 0.0f
	{ // зачем эта функция? она же делает работу конструктора, надо переделать
		anim = a;
		x = X; y = Y;
		angle = Angle;
		R = radius;
	}

	virtual void entity::update() {}; // можно не писатт

	void entity::draw(RenderWindow& app)
	{
		anim.sprite.setPosition(x, y);
		anim.sprite.setRotation(angle + 90);
		app.draw(anim.sprite);

		CircleShape circle(R); // что это за круг, который не отрисовывается?
		circle.setFillColor(Color(255, 0, 0, 170));
		circle.setPosition(x, y);
		circle.setOrigin(R, R);
		//app.draw(circle);
	}

	virtual entity::~Entity() {}; // см. .hpp
};
