#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

namespace platformer
{
	class Exit : public Sprite
	{
	public:
		Exit(const float posX, const float posY, RenderWindow* const renderWindow);
		~Exit();
		Texture texture;
		bool chargerTextures(const char texturePath[]);
	};
}