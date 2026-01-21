// 函数: sub_40af9a
// 地址: 0x40af9a
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_4 = edi
HMODULE hModule = GetModuleHandleW(u"KERNEL32.DLL")

if (hModule == 0)
    sub_40ace7()
    return 0

data_42ddb8 = GetProcAddress(hModule, "FlsAlloc")
data_42ddbc = GetProcAddress(hModule, "FlsGetValue")
data_42ddc0 = GetProcAddress(hModule, "FlsSetValue")
int32_t eax_4 = GetProcAddress(hModule, "FlsFree")
bool cond:0 = data_42ddb8 == 0
data_42ddc4 = eax_4

if (cond:0 || data_42ddbc == 0 || data_42ddc0 == 0 || eax_4 == 0)
    data_42ddbc = TlsGetValue
    data_42ddb8 = sub_40acaa
    data_42ddc0 = TlsSetValue
    data_42ddc4 = TlsFree

uint32_t dwTlsIndex = TlsAlloc()
data_41acd8 = dwTlsIndex

if (dwTlsIndex != 0xffffffff && TlsSetValue(dwTlsIndex, data_42ddbc) != 0)
    sub_4087df()
    int32_t eax_6 = EncodePointer(data_42ddb8)
    int32_t var_c_3 = data_42ddbc
    data_42ddb8 = eax_6
    int32_t eax_7 = EncodePointer(var_c_3)
    int32_t var_c_4 = data_42ddc0
    data_42ddbc = eax_7
    int32_t eax_8 = EncodePointer(var_c_4)
    int32_t var_c_5 = data_42ddc4
    data_42ddc0 = eax_8
    data_42ddc4 = EncodePointer(var_c_5)
    
    if (sub_40e27b() != 0)
        int32_t eax_12 = DecodePointer(data_42ddb8)(sub_40ae6b)
        data_41acd4 = eax_12
        
        if (eax_12 != 0xffffffff)
            uint32_t* eax_13 = __calloc_crt(1, 0x214)
            
            if (eax_13 != 0 && DecodePointer(data_42ddc0)(data_41acd4, eax_13) != 0)
                sub_40ad24(eax_13, 0)
                uint32_t eax_16 = GetCurrentThreadId()
                eax_13[1] = 0xffffffff
                *eax_13 = eax_16
                return 1
    
    sub_40ace7()

return 0
