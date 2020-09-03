#include "Include.h"

void DrawESP(Player* pTargetPlayer, Player* pLocalPlayer)
{
	Vec3 vHeadPos = pTargetPlayer->m_HeadPos;
	Vec3 vFootPos = pTargetPlayer->m_FootPos;

	vHeadPos.z += 0.8F;

	Vec3 vScreenHead, vScreenFoot;
	if (PGame::WorldToScreen(vHeadPos, &vScreenHead) && PGame::WorldToScreen(vFootPos, &vScreenFoot))
	{
		float flHeight = abs(vScreenFoot.y - vScreenHead.y);
		float flWidth = flHeight / 2.0F;

		Render::Color32 color = PGame::IsVisible(pLocalPlayer->m_HeadPos, pTargetPlayer->m_HeadPos) ? Render::Color32(1.0F, 1.0F, 0.0F, 1.0F) : Render::Color32(1.0F, 0.0F, 0.0F, 1.0F);

		DrawRect(vScreenHead.x - flWidth / 2, vScreenHead.y, vScreenHead.x + flWidth / 2, vScreenHead.y + flHeight, color, false);

		DrawHealthBar(vScreenHead.x - flWidth / 2, vScreenHead.y + 2, flWidth, 6.0F, static_cast <float>(static_cast <float>(pTargetPlayer->m_Health) / 100.0F), Render::Color32(0.0F, 1.0F, 0.0F, 1.0F));

		PGame::DrawString(vScreenFoot.x - flWidth / 2, vScreenFoot.y + 4, static_cast <int>(color.r * 255), static_cast <int>(color.g * 255), static_cast <int>(color.b * 255), pTargetPlayer->m_Name);
	}
}

void OnRenderFrame()
{
	Game* pGame = Game::GetInstance();
	Player* pLocalPlayer = pGame->m_LocalPlayer;

	for (int i = 0; i < pGame->m_PlayerCount; i++)
	{
		Player* pPlayer = pGame->GetPlayer(i);
		if (!Mem::IsLinked(pPlayer))
			continue;

		if (pPlayer == pLocalPlayer)
			continue;

		if (pPlayer->m_State != CS_ALIVE)
			continue;

		if (pPlayer->m_Health <= 0 || pPlayer->m_Health > 100)
			continue;

		if (pPlayer->m_HeadPos.x == 0 && pPlayer->m_HeadPos.y == 0 && pPlayer->m_HeadPos.z == 0)
			continue;

		if (PGame::GotTeamMates())
		{
			if (pLocalPlayer->m_Team == pPlayer->m_Team)
				continue;
		}
		DrawESP(pPlayer, pLocalPlayer);
	}
}




