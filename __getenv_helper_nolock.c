// 函数: __getenv_helper_nolock
// 地址: 0x40fc18
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t* esi = data_42dca8

if (data_42eb08 == 0)
    return nullptr

int32_t edi
int32_t var_c_1 = edi
void* result

if (esi != 0)
    if (arg1 == 0)
    labelid_3:
        result = nullptr
    else
    label_40fc5a:
        void* eax_2 = _strlen(arg1)
        
        while (true)
            char* eax_6 = *esi
            
            if (eax_6 == 0)
                goto label_40fc91_2
            
            if (_strlen(eax_6) u> eax_2)
                char* eax_4 = *esi
                
                if (*(eax_4 + eax_2) == 0x3d && __mbsnbset(eax_4, arg1, eax_2) == 0)
                    result = *esi + eax_2 + 1
                    break
            
            esi = &esi[1]
else
    PSTR ecx
    
    if (data_42dcb0 == esi)
    label_40fc91:
        result = nullptr
    else if (sub_413f10(ecx) != 0)
    label_40fc91_1:
        result = nullptr
    else
        esi = data_42dca8
        
        if (esi != 0 && arg1 != 0)
            goto label_40fc5a
        
    label_40fc91_2:
        result = nullptr

return result
