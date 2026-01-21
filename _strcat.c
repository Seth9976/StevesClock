// 函数: _strcat
// 地址: 0x406e90
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

char* ecx = arg1
int32_t edi
int32_t var_4 = edi
void* edi_2

while ((ecx & 3) != 0)
    char eax = *ecx
    ecx = &ecx[1]
    
    if (eax == 0)
    label_406ee3:
        edi_2 = &ecx[0xffffffff]
        goto label_406ef5

while (true)
    int32_t eax_1 = *ecx
    ecx = &ecx[4]
    
    if (((eax_1 ^ 0xffffffff ^ (0x7efefeff + eax_1)) & 0x81010100) != 0)
        int32_t eax_4 = *(ecx - 4)
        
        if (eax_4.b == 0)
            edi_2 = &ecx[0xfffffffc]
            break
        
        if (eax_4:1.b == 0)
            edi_2 = &ecx[0xfffffffd]
            break
        
        if ((eax_4 & 0xff0000) == 0)
            edi_2 = &ecx[0xfffffffe]
            break
        
        if ((eax_4 & 0xff000000) == 0)
            goto label_406ee3

label_406ef5:
char* ecx_1 = arg2
int32_t edx

while ((ecx_1 & 3) != 0)
    edx.b = *ecx_1
    ecx_1 = &ecx_1[1]
    
    if (edx.b == 0)
        goto label_406f70
    
    *edi_2 = edx.b
    edi_2 += 1

while (true)
    int32_t eax_5 = *ecx_1
    edx = *ecx_1
    ecx_1 = &ecx_1[4]
    
    if (((eax_5 ^ 0xffffffff ^ (0x7efefeff + eax_5)) & 0x81010100) != 0)
        if (edx.b == 0)
            break
        
        if (edx:1.b == 0)
            *edi_2 = edx.w
            return arg1
        
        if ((edx & 0xff0000) == 0)
            *edi_2 = edx.w
            *(edi_2 + 2) = 0
            return arg1
        
        if ((edx & 0xff000000) == 0)
            *edi_2 = edx
            return arg1
    
    *edi_2 = edx
    edi_2 += 4

label_406f70:
*edi_2 = edx.b
return arg1
