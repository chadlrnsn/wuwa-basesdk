#define WIN32_LEAN_AND_MEAN
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <SDK.hpp>

DWORD WINAPI MainThread(HMODULE hMod, LPVOID lp) {
    std::cout << "hi from dll!" << std::endl;

    SDK::UWorld* World = SDK::UWorld::GetWorld();
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();

    // Will print 0x00000000 because both will initialized immeadeately after game open
    // you can make while cycle

    printf("UWorld -> 0x%p\n", &World);
    printf("UEngine -> 0x%p\n", &Engine);

    return FALSE;
}

BOOL WINAPI MyHandlerRoutine(DWORD dwCtrlType) {
    TerminateProcess(GetCurrentProcess(), 2);
    return TRUE;
}

FILE* f1 = NULL, * f2 = NULL, * f3 = NULL;
BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    switch (dwReason) {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        AllocConsole();
        SetConsoleCtrlHandler(MyHandlerRoutine, TRUE);
        f1 = freopen("CONIN$", "r", stdin);
        f2 = freopen("CONOUT$", "w", stdout);
        f3 = freopen("CONOUT$", "w", stderr);
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, 0, 0, 0);
        break;
    case DLL_PROCESS_DETACH:
        fclose(f1);
        fclose(f2);
        fclose(f3);
        FreeConsole();
        break;
    }
    return TRUE;
}