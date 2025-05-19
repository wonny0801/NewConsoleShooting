#include "include.h"

int main()
{
	Init();

	/*while (true)
	{
		Update();
		Draw();

		EngineSync(30);
	}*/
	while (gamemng.gamePlayTimeCheck())
	{
		Update();
		Draw();

		EngineSync(30);
	}

	gamemng.TimeOver();
	system("pause");
	Release();

	return 0;
}