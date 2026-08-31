#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800077C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800077C8;

loc_800077C8:
{
    MemoryInline::FlatWriteRam32((r1 + -2192), r1);
    r1 = (r1 + -2192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 2196), r0);
    MemoryInline::FlatWriteRam32((r1 + 2188), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 2184), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 2180), r29);
    r29 = 0;
    goto loc_80007864;
}

loc_800077F0:
{
    r3 = r29;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801C0990u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80007800:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80007860;
    }
}

loc_80007804:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8000780C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(253))) {
        goto loc_80007860;
    }
}

loc_80007810:
{
    r3 = r29;
    r4 = (r1 + 64);
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80197380u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80007824:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80007860;
    }
}

loc_80007828:
{
    r0 = MemoryInline::FlatRead8((r1 + 157));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80007860;
    }
}

loc_80007834:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r0 = (r0 & -32769);
}

loc_8000783C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80007844;
    }
}

loc_80007840:
{
    r31 = 1;
}

loc_80007844:
{
    r0 = MemoryInline::FlatRead8((r1 + 156));
}

loc_8000784C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80007860;
    }
}

loc_80007850:
{
    r0 = MemoryInline::FlatRead32((r1 + 164));
    r0 = (r0 & -2049);
}

loc_80007858:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80007860;
    }
}

loc_8000785C:
{
    r31 = 1;
}

loc_80007860:
{
    r29 = (r29 + 1);
}

loc_80007864:
{
}

loc_80007868:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(4))) {
        goto loc_80007874;
    }
}

loc_8000786C:
{
}

loc_80007870:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800077F0;
    }
}

loc_80007874:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80007878:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800079B0;
    }
}

loc_8000787C:
{
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801AF44Cu>(ctx);
    r3 = ctx->gpr[3];
    r6 = 0x80240000u;
    r0 = 2;
    r6 = (r6 + 20432);
    r3 = 0;
    r8 = 0;
    r5 = 255;
    ctr = r0;
}

loc_800078A0:
{
    r0 = (r8 & 255);
    r4 = (r1 + 16);
    r0 = (r0 * 12);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 10));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800078BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_800078CC;
    }
}

loc_800078C0:
{
}

loc_800078C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800078E8;
    }
}

loc_800078C8:
{
    goto loc_80007910;
}

loc_800078CC:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 510);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & 1020);
    r4 = (r30 + r0);
    r6_addr_2 = (r6 + r7);
    r0 = MemoryInline::FlatRead32(r6_addr_2);
    MemoryInline::FlatWrite16((r4 + 3278), static_cast<uint16_t>(r5));
    r3 = (r3 | r0);
    goto loc_8000791C;
}

loc_800078E8:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 510);
    r4 = MemoryInline::FlatRead16(r4);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 3278));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite16((r7 + 3278), static_cast<uint16_t>(r4));
    r0 = (r0 & 65535);
}

loc_80007904:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000791C;
    }
}

loc_80007908:
{
    r31 = 1;
    goto loc_8000791C;
}

loc_80007910:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 510);
    r4 = (r30 + r0);
    MemoryInline::FlatWrite16((r4 + 3278), static_cast<uint16_t>(r5));
}

loc_8000791C:
{
    r8 = (r8 + 1);
    r4 = (r1 + 16);
    r0 = (r8 & 255);
    r0 = (r0 * 12);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 10));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8000793C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8000794C;
    }
}

loc_80007940:
{
}

loc_80007944:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80007968;
    }
}

loc_80007948:
{
    goto loc_80007990;
}

loc_8000794C:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 510);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r7 = (r7_rot_4 & 1020);
    r4 = (r30 + r0);
    r6_addr_4 = (r6 + r7);
    r0 = MemoryInline::FlatRead32(r6_addr_4);
    MemoryInline::FlatWrite16((r4 + 3278), static_cast<uint16_t>(r5));
    r3 = (r3 | r0);
    goto loc_8000799C;
}

loc_80007968:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 510);
    r4 = MemoryInline::FlatRead16(r4);
    r7 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r7 + 3278));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite16((r7 + 3278), static_cast<uint16_t>(r4));
    r0 = (r0 & 65535);
}

loc_80007984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000799C;
    }
}

loc_80007988:
{
    r31 = 1;
    goto loc_8000799C;
}

loc_80007990:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 510);
    r4 = (r30 + r0);
    MemoryInline::FlatWrite16((r4 + 3278), static_cast<uint16_t>(r5));
}

loc_8000799C:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800078A0;
    }
}

loc_800079A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800079A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800079B0;
    }
}

loc_800079AC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801AF0DCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800079B0:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 2188));
    r30 = MemoryInline::FlatRead32((r1 + 2184));
    r29 = MemoryInline::FlatRead32((r1 + 2180));
    r0 = MemoryInline::FlatRead32((r1 + 2196));
    ctx->lr = r0;
    r1 = (r1 + 2192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00001FB gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800077C8 func_800077C8 preserves=true fpr_mask=0x00000000
