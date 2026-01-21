// 函数: sub_40a968
// 地址: 0x40a968
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_10 = edi
void* edi_1 = arg1
InterlockedIncrement(edi_1)
int32_t eax = *(edi_1 + 0xb0)

if (eax != 0)
    InterlockedIncrement(eax)

int32_t eax_1 = *(edi_1 + 0xb8)

if (eax_1 != 0)
    InterlockedIncrement(eax_1)

int32_t eax_2 = *(edi_1 + 0xb4)

if (eax_2 != 0)
    InterlockedIncrement(eax_2)

int32_t eax_3 = *(edi_1 + 0xc0)

if (eax_3 != 0)
    InterlockedIncrement(eax_3)

void* ebx = edi_1 + 0x50
arg1 = 6
void* i

do
    if (*(ebx - 8) != &data_41aa84)
        int32_t eax_4 = *ebx
        
        if (eax_4 != 0)
            InterlockedIncrement(eax_4)
    
    if (*(ebx - 4) != 0)
        int32_t eax_5 = *(ebx + 4)
        
        if (eax_5 != 0)
            InterlockedIncrement(eax_5)
    
    ebx += 0x10
    i = arg1
    arg1 -= 1
while (i != 1)
return InterlockedIncrement(*(edi_1 + 0xd4) + 0xb4)
