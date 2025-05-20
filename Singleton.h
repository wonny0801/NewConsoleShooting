#pragma once
//singleton = 디자인 패턴... 프로그램 내에서 딱 하나 존재하는 객체... 어디서든 접근 가능해야함...

template<typename T>
class Singleton
{
protected:
	Singleton()
	{

	};
	~Singleton()
	{

	};

	Singleton& operator=(const Singleton& a) = delete;
	Singleton(const Singleton&) = delete;


public:
	static T* Getles()
	{
		if (instance == nullptr)
		{
			instance = new T();
		}
		return instance;
	}

private:
	static T* instance;
};



