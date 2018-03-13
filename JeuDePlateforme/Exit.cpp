#include "Exit.h"

using namespace platformer;

Exit::Exit(const float posX, const float posY, RenderWindow* const renderWindow)
{
	setPosition(posX, posY);
}

Exit::~Exit()
{
}

bool Exit::chargerTextures(const char texturePath[])
{
	if (!texture.loadFromFile(texturePath))
	{
		return false;
	}

	texture.setSmooth(false);
	setTexture(texture);
	return true;
}