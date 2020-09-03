#include "Include.h"

namespace Mem
{
	bool IsLinked(void* pPointer)
	{
		if (pPointer && HIWORD(pPointer))
		{
			if (!IsBadReadPtr(pPointer, sizeof(DWORD_PTR)))
				return true;
		}
		return false;
	}

	void* DetourFunction(void* pLocation, void* pDetour, DWORD dwLength)
	{
		void* pTrampoline = VirtualAlloc(nullptr, dwLength + 5, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

		memcpy(pTrampoline, pLocation, dwLength);

		*reinterpret_cast<BYTE*>(reinterpret_cast<DWORD>(pTrampoline) + dwLength) = 0xE9;
		*reinterpret_cast<DWORD*>(reinterpret_cast<DWORD>(pTrampoline) + dwLength + 1) = reinterpret_cast<DWORD>(pLocation) - (reinterpret_cast<DWORD>(pTrampoline) + dwLength);

		DWORD dwOldProtection = NULL;
		VirtualProtect(pLocation, dwLength, PAGE_EXECUTE_READWRITE, &dwOldProtection);

		*reinterpret_cast<BYTE*>(reinterpret_cast<DWORD>(pLocation)) = 0xE9;
		*reinterpret_cast<DWORD*>(reinterpret_cast<DWORD>(pLocation) + 1) = reinterpret_cast<DWORD>(pDetour) - (reinterpret_cast<DWORD>(pLocation) + 5);

		for (int i = 5; i < dwLength; i++)
			*reinterpret_cast<BYTE*>(reinterpret_cast<DWORD>(pLocation) + i) = 0x90;

		VirtualProtect(pLocation, dwLength, dwOldProtection, NULL);

		return pTrampoline;
	}
}