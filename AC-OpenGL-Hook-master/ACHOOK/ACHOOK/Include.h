#pragma once

#ifndef INCLUDE
#define INCLUDE

#include <Windows.h>
#include <ostream>
#include <iostream>
#include <Psapi.h>
#include <math.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <string>
#include <tlhelp32.h>
#include <GL/GL.h>
#include "..\GL\glut.h"
#include "Mem.h"
#include "Hack.h"
#include "Offsets.h"
#include "Menu.h"
#include "Hook.h"
#include "Game.h"
#include "Render.h"
#include "Hotkey.h"
#include "Class.h"

#pragma comment (lib, "psapi.lib")
#pragma comment (lib, "OpenGL32.lib")
#pragma comment (lib, "GLu32.lib")
#pragma comment (lib, "freeglut.lib")

using namespace std;
using namespace AssaultCube;
#endif