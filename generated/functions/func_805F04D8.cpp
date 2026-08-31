#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F04D8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805F04D8;

loc_805F04D8:
{
    r0 = 5;
    r11 = MemoryInline::FlatRead32((r3 + 112));
    r10 = 0;
    r9 = 0;
    r5 = 0;
    r7 = 1;
    ctr = r0;
}

loc_805F04F4:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r9));
    r0 = (r11 & r8);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F0524;
    }
}

loc_805F0500:
{
    r6 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r0 = (r8 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F0524;
    }
}

loc_805F0510:
{
    r6 = (r6 + r5);
    r0 = MemoryInline::FlatRead32((r6 + 84));
}

loc_805F051C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_805F0524;
    }
}

loc_805F0520:
{
    r10 = (r10 | r8);
}

loc_805F0524:
{
    r9 = (r9 + 1);
    r5 = (r5 + 92);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F04F4;
    }
}

loc_805F0530:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_805F0534:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F0554;
    }
}

loc_805F0538:
{
    r3 = 0;
    r0 = 70;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805F0554:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r3 = 0x80890000u;
    r3 = (r3 + 23744);
    r0 = (r0 * 24);
    r7 = (r3 + r0);
    r6 = MemoryInline::FlatRead16((r7 + 16));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = MemoryInline::FlatRead16((r7 + 18));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = MemoryInline::FlatRead16((r7 + 20));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r7 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FE9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F04D8 func_805F04D8 preserves=true fpr_mask=0x00000000
