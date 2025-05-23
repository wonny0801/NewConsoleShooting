#pragma once
class Sound
{
public:

	Sound();
	~Sound();

	bool LoadSound(std::string path, bool isloop);

	void Play();
	void Stop();

	FMOD::Sound* sound; // 사운드 파일정보담는 포인터변수....
	FMOD::Channel* channel; // 스피커 담는 변수....

	
};
