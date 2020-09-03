#include "Include.h"
//ViewMatrix 2020 09 04 OPENGL MID FUNCTION HOOK TEST 

DWORD WINAPI MThread(LPVOID lpParameter)
{
	dwDrawHud = reinterpret_cast<DWORD>(Mem::DetourFunction(reinterpret_cast<void*>(OFFSET_GL_DRAWHUD_MIDFUNC), gl_DrawHud, 13));
	return EXIT_SUCCESS;
}


BOOL WINAPI DllMain(HMODULE _hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		MessageBox(NULL, "Injected", "SUCC", MB_OK);
		CreateThread(0, 0, MThread, 0, 0, 0);
		break;
	}
	return TRUE;
}