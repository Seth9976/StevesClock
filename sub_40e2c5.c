// 函数: sub_40e2c5
// 地址: 0x40e2c5
// 来自: E:/torrent/Tools/StevesClock/StevesClock.exe.bndb

void* i = &data_41ad10
int32_t edi
int32_t var_c = edi

do
    CRITICAL_SECTION* lpCriticalSection_1 = *i
    
    if (lpCriticalSection_1 != 0 && *(i + 4) != 1)
        DeleteCriticalSection(lpCriticalSection_1)
        __free_base(lpCriticalSection_1)
        *i = 0
    
    i += 8
while (i s< 0x41ae30)

CRITICAL_SECTION* lpCriticalSection

for (void* i_1 = &data_41ad10; i_1 s< 0x41ae30; i_1 += 8)
    lpCriticalSection = *i_1
    
    if (lpCriticalSection != 0 && *(i_1 + 4) == 1)
        lpCriticalSection = DeleteCriticalSection(lpCriticalSection)

return lpCriticalSection
