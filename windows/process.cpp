#include <stdio.h>
#include <windows.h>

int main (VOID){
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    printf("Pai chama o filho para exec \n\n\r");
    if (!CreateProcess(NULL,
        "C:\\WINDOWS\\system32\\mspaint.exe",
        NULL, 
        NULL, 
        FALSE, 
        0, 
        NULL, 
        NULL, 
        &si, 
        &pi))
    {
            fprintf(stderr, "Erro ao criar o processo \n\r");
            return -1;
    }

    WaitForSingleObject(pi.hProcess, INFINITE);
    printf("\n\rFilho completou a exec \n\r");

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
}
