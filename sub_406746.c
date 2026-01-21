// 函数: sub_406746
// 地址: 0x406746
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void* result = ___getgmtimebuf()
int128_t* result_1 = result

if (result_1 == 0)
    return result

int32_t eax = sub_4064be(result_1, arg1)
int32_t eax_1 = neg.d(eax)
return not.d(sbb.d(eax_1, eax_1, eax != 0)) & result_1
