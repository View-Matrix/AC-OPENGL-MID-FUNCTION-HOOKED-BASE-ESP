#ifndef GAME
#define GAME

#include "Mem.h"
#include "Class.h"

namespace PGame
{
	bool GotTeamMates();
	void EngineDrawString(char* pText, int x, int y, int r, int g, int b, int pUnknown = -1, int pUnknown2 = -1);
	bool IsVisible(Vec3 vFrom, Vec3 vTo);
	void DrawString(int x, int y, int r, int g, int b, char* pText, ...);
	bool WorldToScreen(Vec3 vPos, Vec3* pvOut);
}

#endif