// 函数: sub_40878a
// 地址: 0x40878a
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

HMODULE hModule = GetModuleHandleW(u"mscoree.dll")

if (hModule != 0)
    hModule = GetProcAddress(hModule, "CorExitProcess")
    
    if (hModule != 0)
        return hModule(arg1)

return hModule
