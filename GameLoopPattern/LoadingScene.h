#pragma once

class ProgressBar;

class LoadingScene : public GameNode
{
	ProgressBar*		_loadingBar;
	Image*				_bg;



public:
	LoadingScene();
	~LoadingScene();
	
	int					_curCount;

	virtual bool Init();
	virtual void Release();
	virtual void Update();
	virtual void Render(HDC hdc);
};

static DWORD CALLBACK ThreadFunction(LPVOID lpParam);