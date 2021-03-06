#pragma once
#include "Acteur.h"



namespace platformer
{
	class Player : public Acteur
	{
	public:
		Player(const float posX, const float posY, RenderWindow* const renderWindow);
		~Player();

		void keyboardMovement();
		void deplacement(bool direction);
		void jump();
		void update();
		void stop();
		static const int LARGEUR_PLAYER = 64;
		static const int HAUTEUR_PLAYER = 64;
		void retriveLife();
		int getNbLife();

		const int SAUT_VITESSE = 48;
	private:
		int nbLife;

		float velocityY = 0;
		static Texture playerT;

		const int NBR_NIVEAUX = 5;
		const int NBR_ANIMS_IMMOBILE = 11;
		const int NBR_ANIMS_MOUVEMENT = 11;
		const int NBR_ANIMS_MORT = 12;
		const int NBR_ANIMS_JUMP = 11;
		const int NBR_ANIMS_VICTOIRE = 11;
		const int NBR_ANIMS = 12;

		const float CLAVIER_DROITE = 1.0f;

		enum CADRAN{ IMMOBILE, MOUVEMENT, JUMP, VICTOIRE, MORT };


	};
}