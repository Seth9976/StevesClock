// 函数: sub_4127e4
// 地址: 0x4127e4
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (arg1 != 0xfffffffe)
    if (arg1 s>= 0 && arg1 u< data_42e9e0)
        int32_t ecx_3 = (&data_42ea00)[arg1 s>> 5]
        int32_t eax_7 = (arg1 & 0x1f) << 6
        
        if ((*(eax_7 + ecx_3 + 4) & 1) != 0)
            return *(eax_7 + ecx_3)
    
    *___doserrno() = 0
    *__errno() = 9
    __invalid_parameter_noinfo()
else
    *___doserrno() = 0
    *__errno() = 9

return 0xffffffff
