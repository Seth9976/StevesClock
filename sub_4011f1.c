// 函数: sub_4011f1
// 地址: 0x4011f1
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

PSTR esi = GetCommandLineA()

if (arg1 s< 0)
    while (true)
        char* eax_1
        eax_1.b = *esi
        
        if (eax_1.b == 0)
            break
        
        if (eax_1.b == 0x20)
            break
        
        if (eax_1.b == 0x22)
            do
                esi = &esi[1]
                eax_1.b = *esi
                
                if (eax_1.b == 0)
                    break
            while (eax_1.b != 0x22)
        
        esi = &esi[1]
    
    while (sub_4071fb(zx.d(*esi)) != 0)
        esi = &esi[1]
    
    int32_t __saved_ebx_2 = 1
    char* eax_6 = sub_401000(_strlen(esi) + 1, 0x80)
    _strcpy(eax_6, esi)
    
    if (*(_strlen(eax_6) + eax_6 - 1) == 0x14)
        *eax_6 = 0
    
    return eax_6

void* edi = &arg1[1]

while (true)
    if (sub_4071fb(zx.d(*esi)) != 0)
        esi = &esi[1]
    else
        int32_t eax_10
        eax_10.b = *esi
        arg1 = esi
        
        if (eax_10.b != 0x22)
            while (eax_10.b != 0)
                if (eax_10.b == 0x20)
                    break
                
                esi = &esi[1]
                eax_10.b = *esi
        else
            while (true)
                esi = &esi[1]
                eax_10.b = *esi
                
                if (eax_10.b == 0)
                    break
                
                if (eax_10.b == 0x22)
                    if (eax_10.b != 0)
                        esi = &esi[1]
                    
                    break
        
        void* temp0_1 = edi
        edi -= 1
        
        if (temp0_1 == 1)
            break

if (*arg1 == 0x22)
    arg1 = &arg1[1]
    
    if (esi[0xffffffff] == 0x22)
        esi -= 1

void* edi_3 = esi - arg1
int32_t var_14_1 = 1
char* eax_13 = sub_401000(edi_3 + 1, 0x80)
_strncpy(eax_13, arg1, edi_3)
*(eax_13 - arg1 + esi) = 0
return eax_13
