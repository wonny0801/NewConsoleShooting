#include "include.h"

Sound::Sound()
{
	sound = nullptr;
	channel = nullptr;
}

Sound::~Sound()
{
}

//공식문서 확인
bool Sound::LoadSound(std::string path, bool isloop)
{
	if (GameMng::Getles()->system == nullptr)
	{
		return false;
	}

	FMOD_MODE mode = isloop ? FMOD_LOOP_NORMAL : FMOD_LOOP_OFF;
	FMOD_RESULT result = GameMng::Getles()->system->createSound(path.c_str(), mode, nullptr, &sound);
	
	if (result != FMOD_OK)
		return false;


	return true;
}

void Sound::Play()
{
	if (sound != nullptr)
	{
		GameMng::Getles()->system->playSound(sound, nullptr, 0, &channel);
	}
	
}

void Sound::Stop()
{
	if (channel != nullptr)
	{
		channel->stop();
	}
	
}
