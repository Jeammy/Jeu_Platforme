#pragma once
#include <SFML/Graphics.hpp>
#include <string>

#ifndef _DEBUG
	#define NDEBUG 
#endif
#include <cassert>

using namespace sf;

using std::string;

namespace platformer
{
	class Acteur : public Sprite
	{
		public:
			Acteur(const float posX, const float posY, RenderWindow* const renderWindow);
			~Acteur();

			bool chargerTextures(const char texturePath[]);
			void ajustementsVisuels();
			
			virtual void deplacement(bool direction) =0;
			inline bool getState();
			void setState(bool dead);
			Texture texture; 
			const int startPositionX;
			const int startPositionY;

		protected:
			const float VITESSE = 6.0f;
			RenderWindow* renderWindow;
			IntRect** intRects;
			Vector2f interfaceDeplacement;

			bool isDead;
	};
}

