// 函数: sub_40f59b
// 地址: 0x40f59b
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

if (data_42eb14 == 0)
    ___initmbctable()

char* esi = data_42dccc
int32_t edi = 0

if (esi != 0)
    while (true)
        void* eax
        eax.b = *esi
        
        if (eax.b == 0)
            break
        
        if (eax.b != 0x3d)
            edi += 1
        
        esi = esi + _strlen(esi) + 1
    
    int32_t* edi_2 = __calloc_crt(edi + 1, 4)
    data_42dca8 = edi_2
    
    if (edi_2 != 0)
        char* esi_1 = data_42dccc
        int32_t result
        
        while (true)
            if (*esi_1 == 0)
                __free_base(data_42dccc)
                data_42dccc = 0
                *edi_2 = 0
                data_42eb08 = 1
                result = 0
                break
            
            void* eax_2 = _strlen(esi_1)
            
            if (*esi_1 != 0x3d)
                char* eax_3 = __calloc_crt(eax_2 + 1, 1)
                *edi_2 = eax_3
                
                if (eax_3 == 0)
                    __free_base(data_42dca8)
                    data_42dca8 = 0
                    result = 0xffffffff
                    break
                
                if (sub_40b1cd(eax_3, eax_2 + 1, esi_1) != 0)
                    int32_t var_20
                    __builtin_memset(&var_20, 0, 0x14)
                    sub_408fb2()
                    noreturn
                
                edi_2 = &edi_2[1]
            
            esi_1 += eax_2 + 1
        
        return result

return 0xffffffff
