#include "animation.hpp"

	animation::Animation() {} // см .hpp, также почему имя класса с маленькой буквы?
// этот код даже не скомпилируется

	animation::Animation(Texture& t, int x, int y, int w, int h, int count, float Speed)
	{ // где списки инициализации?
		Frame = 0;
		speed = Speed;

		for (int i = 0; i < count; i++)
			frames.push_back(IntRect(x + i * w, y, w, h));

		sprite.setTexture(t);
		sprite.setOrigin(w / 2, h / 2);
		sprite.setTextureRect(frames[0]);
	}


	void animation::update()
	{
		Frame += speed;
		int n = frames.size(); // auto n = ...
		if (Frame >= n) Frame -= n; // форматирование, обычно делают перенос строки
		if (n > 0) sprite.setTextureRect(frames[int(Frame)]);
	}

	bool animation::isEnd()
	{
		return Frame + speed >= frames.size();
	}

};

