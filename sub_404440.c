// 函数: sub_404440
// 地址: 0x404440
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t i = sub_401046(arg1, "hour")

if (i == 0)
    if (sub_401046(arg1, "30") == 0)
        char const* const var_4_1 = "30.wav"
        int32_t var_8_2 = 0x41ff08
        return sub_403db7(sub_40158a(2))
    
    bool cond:0_1 = data_420f08 != 0
    i = data_41eb94
    data_428bb8 = i
    
    if (not(cond:0_1))
        if (i s>= 0xc)
            i -= 0xc
            data_428bb8 = i
        
        if (i == 0)
            i = 0xc
            data_428bb8 = 0xc
    
    data_428bb4 = 1
    
    if (i s>= 1)
        do
            char const* const var_4_2 = "cuckoo.wav"
            int32_t var_8_3 = 0x41ff08
            sub_403db7(sub_40158a(2))
            data_428bb4 += 1
            i = data_428bb4
        while (i s<= data_428bb8)

return i
