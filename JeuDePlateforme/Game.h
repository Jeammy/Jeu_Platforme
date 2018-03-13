#pragma once

#ifndef _DEBUG
	#define NDEBUG 
#endif
#include <cassert>

#include <SFML/Graphics.hpp>
#include "Player.h"
#include "LevelManager.h"
#include "SpawnerCollectible.h"
#include "Block.h"
#include "Goomba.h"
#include "Spike.h"
#include "Exit.h"
#include "ParaGoomba.h"
using namespace sf;
using namespace std;


namespace platformer
{
	class Game
	{
	public:
		Game();
		~Game();
		int run();

		const int LARGEUR = 800;
		const int HAUTEUR = 480;
		const float VITESSE = 5;
		const float GRAVITE = 2;

		//Nombre d'animations et frames par animation qu'on a dans notre spriteSheet.
		//Oui c'est hardcodé; on ne peut pas faire autrement
		//Si vous avez une solution venez me l'exposer
		const int NOMBRE_ANIMATIONS = 3;
		const int NOMBRE_FRAMES = 2;

	private:
		bool init();
		void getInputs();
		void update();
		void draw();

		//Nouveau à présent qu'on utilise les pointeurs, on va tout libérer avant de terminer
		void unload();
		bool testCollisionBoxes(Sprite spr1, Sprite spr2);
		void BlockBuilder(const char levelPath[], const char blockTPath[]);
		bool VerifierCollisionBetweenPlayerAndBlock();
		bool VerifierCollisionBetweenPlayerAndCollectible();
		bool VerifierCollisionBetweenPlayerAndEnnemy();
		void VerifierCollisionBetweenEnnemyAndBlock();
		bool verifierMortPlayer();
		const int numBackground = 3;

		Sprite* background;
		Texture* backgroundT;
		Sprite* backgroundSky;
		Texture* backgroundSkyT;

		Player * player = NULL;
		Exit * exit = NULL;

		bool can_jump = false; //Booléen indiquant si le joueur peut sauter ou non.
		bool can_exit = false;
		

		Font font; // Le style d'écriture utilisé pour le score et le hp.
		Text showScore; // Le texte qui va afficher le score du joueur.
		int score = 0; // Le score du joueur
		
		vector<Block> blockList; //liste des blocks du niveau.
		vector<Ennemy*> ennemyList; //liste des ennemis du niveau.
		vector<Collectible*> collectibleList; //liste des pièces du niveau.

		RenderWindow mainWin;
		View view;
		Event event;
	};
}