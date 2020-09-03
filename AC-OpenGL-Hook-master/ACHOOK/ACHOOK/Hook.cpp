#include "Include.h"

void PreRenderFrame()
{
	glPushMatrix();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	GLint viewport[4];
	glGetIntegerv(GL_VIEWPORT, viewport);

	glLoadIdentity();
	glOrtho(0, viewport[2], viewport[3], 0, 0, 1);

	OnRenderFrame();

	glPopMatrix();

}

DWORD dwDrawHud = NULL;

__declspec(naked) void gl_DrawHud()
{
	__asm
	{
		call PreRenderFrame;

		mov esi, glDisable;
		push GL_BLEND;
		call esi;

		jmp[dwDrawHud];
	}
}

