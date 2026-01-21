// 函数: sub_404152
// 地址: 0x404152
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (sub_401046(arg1, "hour") != 0)
    char const* const var_c_1 = ".wav"
    char* var_10_1 = arg1
    int32_t var_14_1 = 0x41ff08
    return sub_403db7(sub_40158a(3))

char* i = sub_401046(arg1, "hour")

if (i == 0)
    bool cond:0_1 = data_420f08 != 0
    int32_t eax_2 = data_41eb94
    data_4283a0 = eax_2
    
    if (not(cond:0_1))
        if (eax_2 s>= 0xc)
            eax_2 -= 0xc
            data_4283a0 = eax_2
        
        if (eax_2 == 0)
            data_4283a0 = 0xc
    
    char const* const var_c_2 = "00.wav"
    int32_t var_10_3 = 0x41ff08
    sub_403db7(sub_40158a(2))
    i = 1
    data_42839c = 1
    
    if (data_4283a0 s>= 1)
        do
            char const* const var_c_3 = "chime.wav"
            int32_t var_10_4 = 0x41ff08
            sub_403db7(sub_40158a(2))
            data_42839c += 1
            i = data_42839c
        while (i s<= data_4283a0)

return i
