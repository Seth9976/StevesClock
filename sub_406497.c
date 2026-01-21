// 函数: sub_406497
// 地址: 0x406497
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void* result = ___getgmtimebuf()
int128_t* result_1 = result

if (result_1 == 0)
    return result

int32_t eax = sub_40625e(result_1, arg1)
int32_t eax_1 = neg.d(eax)
return not.d(sbb.d(eax_1, eax_1, eax != 0)) & result_1
