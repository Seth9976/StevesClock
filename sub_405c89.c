// 函数: sub_405c89
// 地址: 0x405c89
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

data_42dc84 = 0
LRESULT eax = sub_402423(data_41fbac)
HWND var_10 = data_42171c
data_42dc80 = eax
_strcpy(0x42d480, sub_401cbe(var_10))
sub_40226d(0x42d480, &data_421f2c, &data_420f0c, &data_421720)

if (data_42dc80 s> 0)
    int32_t eax_2 = data_420f0c
    int32_t ecx_1 = data_41fdc4
    int32_t edx_1 = data_421f2c
    bool cond:0_1
    
    if (data_420f08 != 0)
        if (edx_1 != data_41eb94)
            goto label_405da2
        
        if (eax_2 != ecx_1)
            data_42d479 = 0
        else
            cond:0_1 = data_420f10 != 0
        label_405d15:
            
            if (cond:0_1 || data_42d479 != 0)
                goto label_405da2
            
            data_42dc84 = 1
            sub_403e57()
            _strcpy(0x41bb10, *(data_41bae4 + (data_42dc80 << 2)))
            data_42d479 = 1
            sub_4054e2(0x41bb10, nullptr, "announcement")
            sub_4056c0(0x41bb10, data_42dc80)
            sub_4054e2(0x41bb10, nullptr, "alarm")
            sub_402d2f()
    else if (edx_1 != data_41eb94)
    label_405da2:
        
        if (eax_2 != ecx_1)
            data_42d479 = 0
    else
        if (eax_2 == ecx_1)
            if (data_420f10 != 0)
                goto label_405da2
            
            cond:0_1 = data_41cb84 != data_421720
            goto label_405d15
        
        data_42d479 = 0

return zx.d(data_42dc84)
