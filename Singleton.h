#pragma once
//singleton = ������ ����... ���α׷� ������ �� �ϳ� �����ϴ� ��ü... ��𼭵� ���� �����ؾ���...

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



