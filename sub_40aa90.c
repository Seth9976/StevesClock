// 函数: sub_40aa90
// 地址: 0x40aa90
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void* esi = arg1
int32_t eax = *(esi + 0xbc)
int32_t edi
int32_t var_10 = edi

if (eax != 0 && eax != &data_41af38)
    int32_t* eax_1 = *(esi + 0xb0)
    
    if (eax_1 != 0 && *eax_1 == 0)
        int32_t* eax_2 = *(esi + 0xb8)
        
        if (eax_2 != 0 && *eax_2 == 0)
            __free_base(eax_2)
            ___acrt_locale_free_monetary(*(esi + 0xbc))
        
        int32_t* eax_3 = *(esi + 0xb4)
        
        if (eax_3 != 0 && *eax_3 == 0)
            __free_base(eax_3)
            ___acrt_locale_free_numeric(*(esi + 0xbc))
        
        __free_base(*(esi + 0xb0))
        __free_base(*(esi + 0xbc))

int32_t* eax_4 = *(esi + 0xc0)

if (eax_4 != 0 && *eax_4 == 0)
    __free_base(*(esi + 0xc4) - 0xfe)
    __free_base(*(esi + 0xcc) - 0x80)
    __free_base(*(esi + 0xd0) - 0x80)
    __free_base(*(esi + 0xc0))

int32_t* eax_11 = *(esi + 0xd4)

if (eax_11 != &data_41aa88 && eax_11[0x2d] == 0)
    sub_410499(eax_11)
    __free_base(*(esi + 0xd4))

void* edi_1 = esi + 0x50
arg1 = 6
void* i

do
    if (*(edi_1 - 8) != &data_41aa84)
        int32_t* eax_12 = *edi_1
        
        if (eax_12 != 0 && *eax_12 == 0)
            __free_base(eax_12)
    
    if (*(edi_1 - 4) != 0)
        int32_t* eax_13 = *(edi_1 + 4)
        
        if (eax_13 != 0 && *eax_13 == 0)
            __free_base(eax_13)
    
    edi_1 += 0x10
    i = arg1
    arg1 -= 1
while (i != 1)
return __free_base(esi)
