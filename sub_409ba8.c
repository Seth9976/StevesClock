// 函数: sub_409ba8
// 地址: 0x409ba8
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

data_42dc94 += 1
int32_t eax = sub_40ce55(0x1000)
arg1[2] = eax

if (eax == 0)
    arg1[3] |= 4
    arg1[2] = &arg1[5]
    arg1[6] = 2
else
    arg1[3] |= 8
    arg1[6] = 0x1000

int32_t result = arg1[2]
arg1[1] = 0
*arg1 = result
return result
