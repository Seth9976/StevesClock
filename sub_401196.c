// 函数: sub_401196
// 地址: 0x401196
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

char* result = arg1

if (*result == 0)
    return result

while (true)
    char eax = *result
    
    if (eax != 0x20 && (eax s< 9 || eax s> 0xd))
        void* i
        
        for (i = _strlen(result); i s> 0; i -= 1)
            void* eax_2
            eax_2.b = *(result + i - 1)
            
            if (eax_2.b != 0x20)
                if (eax_2.b s< 9)
                    break
                
                if (eax_2.b s> 0xd)
                    break
        
        int32_t var_c_1 = 1
        return sub_406a80(sub_401000(i, 0x80), result, i)
    
    result = &result[1]
