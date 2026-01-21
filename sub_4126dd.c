// 函数: sub_4126dd
// 地址: 0x4126dd
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_c = edi

if (arg1 s>= 0 && arg1 u< data_42e9e0)
    int32_t esi_3 = (arg1 & 0x1f) << 6
    
    if (*(esi_3 + (&data_42ea00)[arg1 s>> 5]) == 0xffffffff)
        if (data_41a290 == 1)
            if (arg1 == 0)
                SetStdHandle(STD_INPUT_HANDLE, arg2)
            else if (arg1 == 1)
                SetStdHandle(STD_OUTPUT_HANDLE, arg2)
            else if (arg1 == 2)
                SetStdHandle(STD_ERROR_HANDLE, arg2)
        
        *(esi_3 + (&data_42ea00)[arg1 s>> 5]) = arg2
        return 0

*__errno() = 9
*___doserrno() = 0
return 0xffffffff
