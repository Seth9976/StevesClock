// 函数: sub_40f3f2
// 地址: 0x40f3f2
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

uint32_t* result = sub_40add8()

if (result != 0)
    int32_t* ecx_1 = result[0x17]
    int32_t* eax = ecx_1
    int32_t edi
    int32_t var_c_1 = edi
    
    while (*eax != arg1)
        eax = &eax[3]
        
        if (eax u>= &ecx_1[0x24])
            break
    
    if (eax u>= &ecx_1[0x24] || *eax != arg1)
        eax = nullptr
    
    int32_t edx_2
    
    if (eax != 0)
        edx_2 = eax[2]
    
    if (eax == 0 || edx_2 == 0)
        result = nullptr
    else if (edx_2 != 5)
        if (edx_2 != 1)
            int32_t ebx_1 = result[0x18]
            result[0x18] = arg2
            int32_t ecx_4 = eax[1]
            
            if (ecx_4 != 8)
                eax[2] = 0
                edx_2(ecx_4)
            else
                for (int32_t i = 0x24; i s< 0x90; i += 0xc)
                    *(i + result[0x17] + 8) = 0
                
                int32_t edi_3 = result[0x19]
                
                switch (*eax)
                    case 0xc000008d
                        result[0x19] = 0x82
                    case 0xc000008e
                        result[0x19] = 0x83
                    case 0xc000008f
                        result[0x19] = 0x86
                    case 0xc0000090
                        result[0x19] = 0x81
                    case 0xc0000091
                        result[0x19] = 0x84
                    case 0xc0000092
                        result[0x19] = 0x8a
                    case 0xc0000093
                        result[0x19] = 0x85
                    case 0xc00002b4
                        result[0x19] = 0x8e
                    case 0xc00002b5
                        result[0x19] = 0x8d
                
                edx_2(8, result[0x19])
                result[0x19] = edi_3
            
            result[0x18] = ebx_1
        
        result = 0xffffffff
    else
        eax[2] = 0
        result = 1

return result
