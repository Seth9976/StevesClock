// 函数: sub_4017a3
// 地址: 0x4017a3
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HWND hWnd = FindWindowA(arg1, nullptr)
int32_t result

if (hWnd == 0)
    result = 0
else if (IsIconic(hWnd) == 0)
    SetForegroundWindow(hWnd)
    result = 1
else
    char name[0x800]
    _strcpy(&name, arg1)
    _strcat(&name, "_EnFI")
    CreateMutexA(nullptr, 1, &name)
    
    if (GetLastError() != ERROR_ALREADY_EXISTS)
        uint32_t eax_4 = GetVersion()
        int32_t var_80c
        
        if (eax_4 u< 0x80000000 && eax_4.b u>= 5)
            var_80c = 1
        
        if (GetForegroundWindow() != hWnd)
            HWND eax_6
            
            do
                FlashWindow(hWnd, 1)
                Sleep(0x1c2)
                
                if (var_80c == 1)
                    FlashWindow(hWnd, 0)
                
                eax_6 = GetForegroundWindow()
            while (eax_6 != hWnd)
        
        SetForegroundWindow(hWnd)
        result = 1
    else
        result = 1

sub_407fad(eax_1 ^ &__saved_ebp)
return result
