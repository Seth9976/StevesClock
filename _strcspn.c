// 函数: _strcspn
// 地址: 0x410980
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

int32_t var_28_1
__builtin_memset(&var_28_1, 0, 0x20)
char* edx = arg2
int32_t eax

while (true)
    eax.b = *edx
    eax.b = eax.b
    
    if (eax.b == 0)
        break
    
    edx = &edx[1]
    var_28_1 |= 1 << (eax u% 0x20)

char* esi = arg1
int32_t result = 0xffffffff

do
    result += 1
    eax.b = *esi
    eax.b = eax.b
    
    if (eax.b == 0)
        break
    
    esi = &esi[1]
while (not(test_bit(var_28_1, eax)))

return result
