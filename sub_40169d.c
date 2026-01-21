// 函数: sub_40169d
// 地址: 0x40169d
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(arg1, &findFileData)
int32_t result

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    result = 1
else
    result = 0

sub_407fad(eax_1 ^ &__saved_ebp)
return result
