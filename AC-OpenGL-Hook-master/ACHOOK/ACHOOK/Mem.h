#ifndef MEM
#define MEM

namespace Mem {
    #define M_PI 3.141592653589793F 
	bool IsLinked(void* pPointer);
	void* DetourFunction(void* pLocation, void* pDetour, DWORD dwLength);
}
#endif 
