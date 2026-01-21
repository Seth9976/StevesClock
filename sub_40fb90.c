// 函数: sub_40fb90
// 地址: 0x40fb90
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t* edx = arg1
char* ecx = arg2
uint32_t eax

if ((edx & 3) != 0)
    if ((edx & 1) == 0)
    label_40fbfc:
        eax.w = *edx
        edx += 2
        char temp1_1 = *ecx
        
        if (eax.b != temp1_1)
            return (sbb.d(eax, eax, eax.b u< temp1_1) << 1) + 1
        
        eax.b = eax.b
        
        if (eax.b == 0)
            return 0
        
        char temp4_1 = ecx[1]
        
        if (eax:1.b != temp4_1)
            return (sbb.d(eax, eax, eax:1.b u< temp4_1) << 1) + 1
        
        eax:1.b = eax:1.b
        
        if (eax:1.b == 0)
            return 0
        
        ecx = &ecx[2]
    else
        eax.b = *edx
        edx += 1
        char temp2_1 = *ecx
        
        if (eax.b != temp2_1)
            return (sbb.d(eax, eax, eax.b u< temp2_1) << 1) + 1
        
        ecx = &ecx[1]
        eax.b = eax.b
        
        if (eax.b == 0)
            return 0
        
        if ((edx & 2) != 0)
            goto label_40fbfc

while (true)
    eax = *edx
    char temp0_1 = *ecx
    
    if (eax.b != temp0_1)
        return (sbb.d(eax, eax, eax.b u< temp0_1) << 1) + 1
    
    eax.b = eax.b
    
    if (eax.b == 0)
        return 0
    
    char temp3_1 = ecx[1]
    
    if (eax:1.b != temp3_1)
        return (sbb.d(eax, eax, eax:1.b u< temp3_1) << 1) + 1
    
    eax:1.b = eax:1.b
    
    if (eax:1.b == 0)
        return 0
    
    eax u>>= 0x10
    char temp5_1 = ecx[2]
    
    if (eax.b != temp5_1)
        return (sbb.d(eax, eax, eax.b u< temp5_1) << 1) + 1
    
    eax.b = eax.b
    
    if (eax.b == 0)
        return 0
    
    char temp6_1 = ecx[3]
    
    if (eax:1.b != temp6_1)
        return (sbb.d(eax, eax, eax:1.b u< temp6_1) << 1) + 1
    
    ecx = &ecx[4]
    edx = &edx[1]
    eax:1.b = eax:1.b
    
    if (eax:1.b == 0)
        return 0
