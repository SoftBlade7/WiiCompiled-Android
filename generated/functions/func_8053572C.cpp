#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053572C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8053572C;

loc_8053572C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
}

loc_80535730:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053575C;
    }
}

loc_80535734:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 10));
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

loc_8053575C:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + -10448));
    r6 = MemoryInline::FlatRead32((r6 + 20));
    r0 = MemoryInline::FlatRead8((r6 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80535770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80535798;
    }
}

loc_80535774:
{
    r6 = 1;
    r4 = 99;
    r3 = 59;
    r0 = 999;
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

loc_80535798:
{
    r6 = (r4 + -2);
    r0 = (r4 + -1);
    r12 = (r6 * 12);
    r6 = MemoryInline::FlatRead32((r3 + 60));
    r10 = 0;
    r9 = 0;
    r7 = (r6 + r12);
    r11 = (r0 * 12);
    r4 = MemoryInline::FlatRead16((r7 + 8));
    r6 = (r6 + r11);
    r0 = MemoryInline::FlatRead16((r6 + 8));
    r8 = (r0 - r4);
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_805357D4;
    }
}

loc_805357CC:
{
    r9 = -1;
    r8 = (r8 + 1000);
}

loc_805357D4:
{
    r4 = MemoryInline::FlatRead8((r7 + 6));
    r0 = MemoryInline::FlatRead8((r6 + 6));
    r0 = (r0 - r4);
    r9 = (r9 + r0);
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(0))) {
        goto loc_805357F0;
    }
}

loc_805357E8:
{
    r10 = -1;
    r9 = (r9 + 60);
}

loc_805357F0:
{
    r4 = MemoryInline::FlatRead16((r7 + 4));
    r0 = MemoryInline::FlatRead16((r6 + 4));
    r0 = (r0 - r4);
    r10 = (r10 + r0);
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(0))) {
        goto loc_80535810;
    }
}

loc_80535804:
{
    r10 = 0;
    r9 = 0;
    r8 = 0;
}

loc_80535810:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r8));
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r3 = (r4 + r11);
    r0 = MemoryInline::FlatRead8((r3 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80535834:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80535848;
    }
}

loc_80535838:
{
    r3 = (r4 + r12);
    r0 = MemoryInline::FlatRead8((r3 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80535844:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80535848:
{
    r3 = 65536;
    r0 = 0;
    r3 = (r3 + -1);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001039 gpr_write=0x00001FD9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8053572C func_8053572C preserves=true fpr_mask=0x00000000
