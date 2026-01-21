// 函数: sub_40f811
// 地址: 0x40f811
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_1c = edi

if (data_42eb14 == 0)
    ___initmbctable()

data_42e9a4 = 0
void* ecx = GetModuleFileNameA(nullptr, &data_42e8a0, 0x104)
char* eax = data_42eb00
data_42dcb8 = &data_42e8a0
char* var_8_1

if (eax != 0)
    var_8_1 = eax

if (eax == 0 || *eax == 0)
    var_8_1 = &data_42e8a0

int32_t var_c
int32_t* var_20 = &var_c
int32_t var_10
sub_40f677(&var_c, var_8_1, &var_10, ecx, nullptr, nullptr)
int32_t eax_2 = var_c

if (eax_2 u< 0x3fffffff)
    int32_t ecx_1 = var_10
    
    if (ecx_1 u< 0xffffffff)
        int32_t edi_3 = eax_2 << 2
        uint32_t eax_3 = edi_3 + ecx_1
        
        if (eax_3 u>= ecx_1)
            char* eax_4 = sub_40ce55(eax_3)
            
            if (eax_4 != 0)
                int32_t* var_20_2 = &var_c
                sub_40f677(&var_c, var_8_1, &var_10, eax_3, eax_4, &eax_4[edi_3])
                data_42dc9c = var_c - 1
                data_42dca0 = eax_4
                return 0

return 0xffffffff
