// 函数: sub_40f677
// 地址: 0x40f677
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* ecx_1 = arg6
int32_t* ebx
int32_t* var_c = ebx
*arg3 = 0
char* esi = arg2
char* edx = arg5
*ecx_1 = 1

if (arg4 != 0)
    ebx = arg4
    arg4 += 4
    *ebx = edx

void* var_8_1 = nullptr
void* eax

while (true)
    if (*esi != 0x22)
        *arg3 += 1
        
        if (edx != 0)
            eax.b = *esi
            *edx = eax.b
            arg5 = &edx[1]
        
        ebx.b = *esi
        esi = &esi[1]
        
        if (__ismbblead(ebx.b) != 0)
            *arg3 += 1
            
            if (arg5 != 0)
                char* ecx_3 = arg5
                eax.b = *esi
                arg5 = &arg5[1]
                *ecx_3 = eax.b
            
            esi = &esi[1]
        
        edx = arg5
        ecx_1 = arg6
        
        if (ebx.b == 0)
            esi -= 1
            break
    else
        ebx.b = 0x22
        eax.b = var_8_1 == 0
        esi = &esi[1]
        var_8_1 = eax
    
    if (var_8_1 == 0)
        if (ebx.b != 0x20 && ebx.b != 9)
            continue
        
        if (edx == 0)
            break
        
        edx[0xffffffff] = 0
        break

void* var_8_2 = nullptr

while (*esi != 0)
    while (true)
        eax.b = *esi
        
        if (eax.b != 0x20 && eax.b != 9)
            break
        
        esi = &esi[1]
    
    if (*esi == 0)
        break
    
    if (arg4 != 0)
        eax = arg4
        arg4 += 4
        *eax = edx
    
    *ecx_1 += 1
    
    while (true)
        int32_t ebx_1 = 1
        uint32_t i = 0
        
        while (*esi == 0x5c)
            esi = &esi[1]
            i += 1
        
        if (*esi == 0x22)
            if ((i.b & 1) == 0)
                if (var_8_2 == 0 || esi[1] != 0x22)
                    ebx_1 = 0
                    eax.b = var_8_2 == 0
                    var_8_2 = eax
                else
                    esi = &esi[1]
            
            i u>>= 1
        
        if (i != 0)
            do
                i -= 1
                
                if (edx != 0)
                    *edx = 0x5c
                    edx = &edx[1]
                
                *arg3 += 1
            while (i != 0)
            
            arg5 = edx
        
        eax.b = *esi
        
        if (eax.b == 0)
            break
        
        if (var_8_2 == 0)
            if (eax.b == 0x20)
                break
            
            if (eax.b == 9)
                break
        
        if (ebx_1 != 0)
            int32_t eax_2 = sx.d(eax.b)
            
            if (edx == 0)
                if (__ismbblead(eax_2.b) != 0)
                    esi = &esi[1]
                    *arg3 += 1
            else
                if (__ismbblead(eax_2.b) != 0)
                    eax.b = *esi
                    char* ecx_5 = arg5
                    arg5 = &arg5[1]
                    *ecx_5 = eax.b
                    esi = &esi[1]
                    *arg3 += 1
                
                char* ecx_6 = arg5
                eax.b = *esi
                arg5 = &arg5[1]
                *ecx_6 = eax.b
            
            *arg3 += 1
            edx = arg5
        
        esi = &esi[1]
    
    if (edx != 0)
        *edx = 0
        edx = &edx[1]
        arg5 = edx
    
    *arg3 += 1
    ecx_1 = arg6

if (arg4 != 0)
    *arg4 = 0

*ecx_1 += 1
return arg4
