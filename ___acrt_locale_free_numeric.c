// 函数: ___acrt_locale_free_numeric
// 地址: 0x410810
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg1 == 0)
    return 

int32_t eax_1 = *arg1

if (eax_1 != data_41af38)
    __free_base(eax_1)

int32_t eax_2 = arg1[1]

if (eax_2 != data_41af3c)
    __free_base(eax_2)

int32_t eax_3 = arg1[2]

if (eax_3 != data_41af40)
    __free_base(eax_3)

int32_t eax = arg1[0xc]

if (eax != data_41af68)
    __free_base(eax)

int32_t esi_1 = arg1[0xd]

if (esi_1 != data_41af6c)
    __free_base(esi_1)
