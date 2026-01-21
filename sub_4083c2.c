// 函数: sub_4083c2
// 地址: 0x4083c2
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t eax = data_42fb20

if (eax == 0)
    eax = 0x200
    data_42fb20 = eax
else if (eax s< 0x14)
    eax = 0x14
    data_42fb20 = eax

int32_t eax_1 = __calloc_crt(eax, 4)
data_42eb1c = eax_1

if (eax_1 == 0)
    data_42fb20 = 0x14
    eax_1 = __calloc_crt(0x14, 4)
    data_42eb1c = eax_1
    
    if (eax_1 == 0)
        return 0x1a

void*** edx = nullptr
void** ecx_2 = &data_41a010

while (true)
    *(edx + eax_1) = ecx_2
    ecx_2 = &ecx_2[8]
    edx = &edx[1]
    
    if (ecx_2 s>= &data_41a290)
        break
    
    eax_1 = data_42eb1c

int32_t edx_1 = 0

for (void* i = &data_41a020; i s< 0x41a080; )
    int32_t eax_6 = *(((edx_1 & 0x1f) << 6) + (&data_42ea00)[edx_1 s>> 5])
    
    if (eax_6 == 0xffffffff || eax_6 == 0xfffffffe || eax_6 == 0)
        *i = 0xfffffffe
    
    i += 0x20
    edx_1 += 1

return 0
