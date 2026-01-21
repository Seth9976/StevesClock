// 函数: sub_40a317
// 地址: 0x40a317
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_528 = edi
CPINFO cPInfo
void* i_2

if (GetCPInfo(*(arg1 + 4), &cPInfo) == 0)
    for (int32_t i = 0; i u< 0x100; i += 1)
        i_2 = arg1 + i + 0x11d
        void* edx_3 = 0xffffff9f - (arg1 + 0x11d) + i_2
        
        if (edx_3 + 0x20 u<= 0x19)
            *(arg1 + i + 0x1d) |= 0x10
            *i_2 = i.b + 0x20
        else if (edx_3 u> 0x19)
            *i_2 = 0
        else
            *(arg1 + i + 0x1d) |= 0x20
            *i_2 = i.b - 0x20
else
    char var_108[0x100]
    uint32_t i_1
    
    for (i_1 = 0; i_1 u< 0x100; i_1 += 1)
        var_108[i_1] = i_1.b
    
    i_1.b = cPInfo.LeadByte[0]
    var_108[0] = 0x20
    
    if (i_1.b != 0)
        var_515
        void* ebx_1 = &var_515
        
        do
            uint32_t ecx_1 = zx.d(i_1.b)
            i_1 = zx.d(*ebx_1)
            
            if (ecx_1 u<= i_1)
                sub_408e00(&__saved_ebp + ecx_1 - 0x104, 0x20, i_1 - ecx_1 + 1)
            
            i_1.b = *(ebx_1 + 1)
            ebx_1 += 2
        while (i_1.b != 0)
    
    int32_t var_52c_2 = 0
    uint16_t var_508[0x100]
    sub_410459(nullptr, 1, &var_108, 0x100, &var_508, *(arg1 + 4), *(arg1 + 0xc))
    char var_208[0x100]
    sub_40b4a7(nullptr, *(arg1 + 0xc), 0x100, &var_108, 0x100, &var_208, 0x100, *(arg1 + 4), 0)
    char var_308[0x100]
    sub_40b4a7(nullptr, *(arg1 + 0xc), 0x200, &var_108, 0x100, &var_308, 0x100, *(arg1 + 4), 0)
    
    for (i_2 = nullptr; i_2 u< 0x100; i_2 += 1)
        char ecx_2 = (var_508[i_2]).b
        
        if ((ecx_2 & 1) != 0)
            *(arg1 + i_2 + 0x1d) |= 0x10
            *(arg1 + i_2 + 0x11d) = *(&var_208 + i_2)
        else if ((ecx_2 & 2) == 0)
            *(arg1 + i_2 + 0x11d) = 0
        else
            *(arg1 + i_2 + 0x1d) |= 0x20
            *(arg1 + i_2 + 0x11d) = *(&var_308 + i_2)

sub_407fad(eax_1 ^ &__saved_ebp)
return i_2
