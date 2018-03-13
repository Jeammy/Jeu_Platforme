#include "Acteur.h"

using namespace platformer;
//Texture Acteur::texture;



Acteur::Acteur(const float posX, const float posY, RenderWindow* const renderWindow) : renderWindow(renderWindow),startPositionX(posX),
startPositionY(posY)
{
	setPosition(posX, posY);
	isDead = false;
}

Acteur::~Acteur()
{

}

bool Acteur::chargerTextures(const char texturePath[])
{
	if (!texture.loadFromFile(texturePath))
	{
		return false;
	}

	texture.setSmooth(false);
	return true;
}

void Acteur::ajustementsVisuels()
{
	setTexture(texture);
	
}

void Acteur::deplacement(bool direction)
{

}

inline bool Acteur::getState()
{
	return isDead;
}

void Acteur::setState(bool dead)
{
	isDead = dead;
}

