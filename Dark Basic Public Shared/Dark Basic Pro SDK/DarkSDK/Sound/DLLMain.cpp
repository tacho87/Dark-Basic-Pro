#define WIN32_LEAN_AND_MEAN 
#include <windows.h>

extern void Constructor ( void );
extern void Destructor  ( void );

BOOL WINAPI DLLMain ( HINSTANCE hInstDLL, DWORD dwReason, LPVOID lpvReserved )
{
	switch ( dwReason )
	{
		case DLL_PROCESS_ATTACH:
		{
	
		}
        break;

        case DLL_THREAD_ATTACH:
		{

		}
        break;

        case DLL_THREAD_DETACH:
		{

		}
        break;

        case DLL_PROCESS_DETACH:
		{

		}
        break;
    }

	return true;
}