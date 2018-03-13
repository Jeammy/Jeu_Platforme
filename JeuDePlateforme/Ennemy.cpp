#include "Ennemy.h"

Texture Ennemy::texture;

Ennemy::Ennemy(const float posX, const float posY, RenderWindow* const renderWindow)
: Acteur(posX, posY, renderWindow)
{
	setPosition(posX, posY);
}

Ennemy::~Ennemy()
{

}


void Ennemy::deplacement(bool direction)
{

	if (direction == true)
	{
		setPosition(getPosition().x + ENNEMY_SPEED, getPosition().y);
	}
	else if (direction == false)
	{
		setPosition(getPosition().x - ENNEMY_SPEED, getPosition().y);
	}
}

void Ennemy::update()
{
	velocityY += 3; //2 = gravité
	move(0, velocityY);
}
void Ennemy::stop()
{
	velocityY = 0;
}