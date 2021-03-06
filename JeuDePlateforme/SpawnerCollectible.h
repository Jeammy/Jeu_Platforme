#pragma once
#include "Collectible.h"
#include "Diamond.h"

namespace platformer
{
	class SpawnerCollectible
	{
	public:
		virtual Collectible * FabriqueCollectible(const float posX, const float posY, RenderWindow* const renderWindow) = 0;
	};

	class SpawnerDiamond : public SpawnerCollectible
	{
		public:
			Collectible * FabriqueCollectible(const float posX, const float posY, RenderWindow* const renderWindow)
			{
				return new Diamond(posX, posY, renderWindow);
			}
	};


}
