#include <sysinfoapi.h>
#include <windows.h>
#include <iostream>
#include<conio.h>
using namespace std;

extern "C" __declspec(dllimport)
BOOL __stdcall GetPhysicallyInstalledSystemMemory(PULONGLONG);

int main()
{
    ULONGLONG TotalMemoryInKilobytes;
    GetPhysicallyInstalledSystemMemory(&TotalMemoryInKilobytes);
    cout <<"Total Memory In Kilobytes: " << TotalMemoryInKilobytes << " kB" << endl;
    return 0;
}
