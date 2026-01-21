// 函数: __wincmdln
// 地址: 0x40f53c
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t edi
int32_t var_8 = edi
int32_t edi_1 = 0

if (data_42eb14 == 0)
    ___initmbctable()

void* const result = data_42eb00

if (result == 0)
    result = &data_4162eb

while (true)
    int32_t eax
    eax.b = *result
    
    if (eax.b u<= 0x20)
        if (eax.b == 0)
            return result
        
        if (edi_1 == 0)
            while (true)
                eax.b = *result
                
                if (eax.b == 0)
                    break
                
                if (eax.b u> 0x20)
                    break
                
                result += 1
            
            return result
    
    if (eax.b == 0x22)
        int32_t ecx_1
        ecx_1.b = edi_1 == 0
        edi_1 = ecx_1
    
    if (__ismbblead(eax.b) != 0)
        result += 1
    
    result += 1
