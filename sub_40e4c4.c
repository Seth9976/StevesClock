// 函数: sub_40e4c4
// 地址: 0x40e4c4
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_c = edi
enum WIN32_ERROR edi_2

if (sub_4127e4(arg1) == 0xffffffff)
    edi_2 = NO_ERROR
else
    void* eax_1 = data_42ea00
    
    if ((arg1 != 1 || (*(eax_1 + 0x84) & 1) == 0) && (arg1 != 2 || (*(eax_1 + 0x44) & 1) == 0))
    label_40e516:
        
        if (CloseHandle(sub_4127e4(arg1)) != 0)
            edi_2 = NO_ERROR
        else
            edi_2 = GetLastError()
    else
        int32_t eax_2 = sub_4127e4(2)
        
        if (sub_4127e4(1) != eax_2)
            goto label_40e516
        
        edi_2 = NO_ERROR

sub_41275e(arg1)
*((&data_42ea00)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 4) = 0

if (edi_2 == NO_ERROR)
    return 0

___acrt_errno_map_os_error(edi_2)
return 0xffffffff
