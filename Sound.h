#pragma once
class Sound
{
public:

	Sound();
	~Sound();

	bool LoadSound(std::string path, bool isloop);

	void Play();
	void Stop();

	FMOD::Sound* sound; // ���� ����������� �����ͺ���....
	FMOD::Channel* channel; // ����Ŀ ��� ����....

	
};
