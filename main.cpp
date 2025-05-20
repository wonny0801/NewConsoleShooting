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
	while (true)
	{
		GameOverDraw();
	}
	
	
	
	Release();

	return 0;
}