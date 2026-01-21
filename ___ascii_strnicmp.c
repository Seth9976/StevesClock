// 函数: ___ascii_strnicmp
// 地址: 0x4157f0
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t result = arg3

if (result != 0)
    char* esi_1 = arg1
    char* edi_1 = arg2
    int32_t result_1 = result
    
    while (true)
        int16_t eax
        eax:1.b = *esi_1
        eax:1.b = eax:1.b
        bool cond:1_1 = eax:1.b == 0
        eax.b = *edi_1
        bool cond:0_1
        
        if (cond:1_1)
        label_41583b:
            result = 0
            cond:0_1 = eax:1.b u< eax.b
            
            if (eax:1.b == eax.b)
                break
        else
            eax.b = eax.b
            
            if (eax.b == 0)
                goto label_41583b
            
            esi_1 = &esi_1[1]
            edi_1 = &edi_1[1]
            
            if (eax:1.b u>= 0x41 && eax:1.b u<= 0x5a)
                eax:1.b += 0x20
            
            if (eax.b u>= 0x41 && eax.b u<= 0x5a)
                eax.b += 0x20
            
            cond:0_1 = eax:1.b u< eax.b
            
            if (eax:1.b == eax.b)
                int32_t result_2 = result_1
                result_1 -= 1
                
                if (result_2 != 1)
                    continue
                
                goto label_41583b
        
        result = 0xffffffff
        
        if (not(cond:0_1))
            return 1
        
        break

return result
