#ifndef ENUMS
#define ENUMS

namespace AssaultCube
{
	enum { SA_KICK = 0, SA_BAN, SA_REMBANS, SA_MASTERMODE, SA_AUTOTEAM, SA_FORCETEAM, SA_GIVEADMIN, SA_MAP, SA_RECORDDEMO, SA_STOPDEMO, SA_CLEARDEMOS, SA_SERVERDESC, SA_SHUFFLETEAMS, SA_NUM };
	enum { VOTE_NEUTRAL = 0, VOTE_YES, VOTE_NO, VOTE_NUM };
	enum { FA_PICKUP = 0, FA_STEAL, FA_DROP, FA_LOST, FA_RETURN, FA_SCORE, FA_NUM, FA_RESET };
	enum { FM_PICKUP = 0, FM_DROP, FM_LOST, FM_RETURN, FM_SCORE, FM_KTFSCORE, FM_SCOREFAIL, FM_RESET, FM_NUM };
	enum { GUN_KNIFE = 0, GUN_PISTOL, GUN_CARBINE, GUN_SHOTGUN, GUN_SUBGUN, GUN_SNIPER, GUN_ASSAULT, GUN_CPISTOL, GUN_GRENADE, GUN_AKIMBO, NUMGUNS };
	enum { CS_ALIVE = 0, CS_DEAD, CS_SPAWNING, CS_LAGGED, CS_EDITING, CS_SPECTATE };
	enum { CR_DEFAULT = 0, CR_ADMIN };
	enum { TEAM_CLA = 0, TEAM_RVSF, TEAM_CLA_SPECT, TEAM_RVSF_SPECT, TEAM_SPECT, TEAM_NUM, TEAM_ANYACTIVE };
	enum { SM_NONE = 0, SM_DEATHCAM, SM_FOLLOW1ST, SM_FOLLOW3RD, SM_FOLLOW3RD_TRANSPARENT, SM_FLY, SM_OVERVIEW, SM_NUM };
	enum { FPCN_VOID = -4, FPCN_DEATHCAM = -2, FPCN_FLY = -2, FPCN_OVERVIEW = -1 };
	enum { BT_NONE, BT_NADE, BT_GIB };

	enum SERVER_MSG
	{
		SV_SERVINFO = 0, SV_WELCOME, SV_INITCLIENT, SV_POS, SV_POSC, SV_POSN, SV_TEXT, SV_TEAMTEXT, SV_TEXTME, SV_TEAMTEXTME, SV_TEXTPRIVATE,
		SV_SOUND, SV_VOICECOM, SV_VOICECOMTEAM, SV_CDIS,
		SV_SHOOT, SV_EXPLODE, SV_SUICIDE, SV_AKIMBO, SV_RELOAD, SV_AUTHT, SV_AUTHREQ, SV_AUTHTRY, SV_AUTHANS, SV_AUTHCHAL,
		SV_GIBDIED, SV_DIED, SV_GIBDAMAGE, SV_DAMAGE, SV_HITPUSH, SV_SHOTFX, SV_THROWNADE,
		SV_TRYSPAWN, SV_SPAWNSTATE, SV_SPAWN, SV_SPAWNDENY, SV_FORCEDEATH, SV_RESUME,
		SV_DISCSCORES, SV_TIMEUP, SV_EDITENT, SV_ITEMACC,
		SV_MAPCHANGE, SV_ITEMSPAWN, SV_ITEMPICKUP,
		SV_PING, SV_PONG, SV_CLIENTPING, SV_GAMEMODE,
		SV_EDITMODE, SV_EDITH, SV_EDITT, SV_EDITS, SV_EDITD, SV_EDITE, SV_NEWMAP,
		SV_SENDMAP, SV_RECVMAP, SV_REMOVEMAP,
		SV_SERVMSG, SV_ITEMLIST, SV_WEAPCHANGE, SV_PRIMARYWEAP,
		SV_FLAGACTION, SV_FLAGINFO, SV_FLAGMSG, SV_FLAGCNT,
		SV_ARENAWIN,
		SV_SETADMIN, SV_SERVOPINFO,
		SV_CALLVOTE, SV_CALLVOTESUC, SV_CALLVOTEERR, SV_VOTE, SV_VOTERESULT,
		SV_SETTEAM, SV_TEAMDENY, SV_SERVERMODE,
		SV_IPLIST,
		SV_LISTDEMOS, SV_SENDDEMOLIST, SV_GETDEMO, SV_SENDDEMO, SV_DEMOPLAYBACK,
		SV_CONNECT,
		SV_SWITCHNAME, SV_SWITCHSKIN, SV_SWITCHTEAM,
		SV_CLIENT,
		SV_EXTENSION,
		SV_MAPIDENT, SV_HUDEXTRAS, SV_POINTS,
		SV_NUM
	};

	enum
	{
		GMODE_DEMO = -1,
		GMODE_TEAMDEATHMATCH = 0,
		GMODE_COOPEDIT,
		GMODE_DEATHMATCH,
		GMODE_SURVIVOR,
		GMODE_TEAMSURVIVOR,
		GMODE_CTF,
		GMODE_PISTOLFRENZY,
		GMODE_BOTTEAMDEATHMATCH,
		GMODE_BOTDEATHMATCH,
		GMODE_LASTSWISSSTANDING,
		GMODE_ONESHOTONEKILL,
		GMODE_TEAMONESHOTONEKILL,
		GMODE_BOTONESHOTONEKILL,
		GMODE_HUNTTHEFLAG,
		GMODE_TEAMKEEPTHEFLAG,
		GMODE_KEEPTHEFLAG,
		GMODE_TEAMPF,
		GMODE_TEAMLSS,
		GMODE_BOTPISTOLFRENZY,
		GMODE_BOTLSS,
		GMODE_BOTTEAMSURVIVOR,
		GMODE_BOTTEAMONESHOTONKILL,
		GMODE_NUM
	};

	enum
	{
		S_JUMP = 0,
		S_SOFTLAND, S_HARDLAND,
		S_BULLETAIR1, S_BULLETAIR2, S_BULLETHIT, S_BULLETWATERHIT,
		S_KNIFE,
		S_PISTOL, S_RPISTOL,
		S_CARBINE, S_RCARBINE,
		S_SHOTGUN, S_RSHOTGUN,
		S_SUBGUN, S_RSUBGUN,
		S_SNIPER, S_RSNIPER,
		S_ASSAULT, S_RASSAULT,
		S_ITEMAMMO, S_ITEMHEALTH,
		S_ITEMARMOUR, S_ITEMAKIMBO,
		S_NOAMMO, S_AKIMBOOUT,
		S_PAIN1, S_PAIN2, S_PAIN3, S_PAIN4, S_PAIN5, S_PAIN6,
		S_DIE1, S_DIE2,
		S_FEXPLODE,
		S_SPLASH1, S_SPLASH2,
		S_FLAGDROP, S_FLAGPICKUP, S_FLAGRETURN, S_FLAGSCORE,
		S_GRENADEPULL, S_GRENADETHROW, S_GRENADEBOUNCE1, S_GRENADEBOUNCE2, S_RAKIMBO,
		S_GUNCHANGE,
		S_HITSOUND,
		S_GIB, S_HEADSHOT,
		S_CALLVOTE, S_VOTEPASS, S_VOTEFAIL,
		S_FOOTSTEPS, S_FOOTSTEPSCROUCH, S_WATERFOOTSTEPS, S_WATERFOOTSTEPSCROUCH,
		S_CROUCH, S_UNCROUCH,
		S_MENUSELECT, S_MENUENTER,
		S_UNDERWATER,
		S_TINNITUS,

		S_AFFIRMATIVE,
		S_ALLRIGHTSIR,
		S_COMEONMOVE,
		S_COMINGINWITHTHEFLAG,
		S_COVERME,
		S_DEFENDTHEFLAG,
		S_ENEMYDOWN,
		S_GOGETEMBOYS,
		S_GOODJOBTEAM,
		S_IGOTONE,
		S_IMADECONTACT,
		S_IMATTACKING,
		S_IMONDEFENSE,
		S_IMONYOURTEAMMAN,
		S_NEGATIVE,
		S_NOCANDO,
		S_RECOVERTHEFLAG,
		S_SORRY,
		S_SPREADOUT,
		S_STAYHERE,
		S_STAYTOGETHER,
		S_THERESNOWAYSIR,
		S_WEDIDIT,
		S_YES,
		S_ONTHEMOVE1,
		S_ONTHEMOVE2,
		S_GOTURBACK,
		S_GOTUCOVERED,
		S_INPOSITION1,
		S_INPOSITION2,
		S_REPORTIN,
		S_NICESHOT,
		S_THANKS1,
		S_THANKS2,
		S_AWESOME1,
		S_AWESOME2,
		S_ITEMHELMET, 
		S_HEARTBEAT,
		S_KTFSCORE,
		S_NULL
	};

	enum                           
	{
		NOTUSED = 0,             
		LIGHT,                 
		PLAYERSTART,                
		I_CLIPS, I_AMMO, I_GRENADE,
		I_HEALTH, I_HELMET, I_ARMOUR, I_AKIMBO,
		MAPMODEL,                  
		CARROT,                     
		LADDER,
		CTF_FLAG,                  
		SOUND,
		CLIP,
		PLCLIP,
		MAXENTTYPES
	};

}

#endif