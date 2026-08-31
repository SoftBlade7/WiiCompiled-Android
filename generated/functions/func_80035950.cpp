#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80035950(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80035950;

loc_80035950:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = MemoryInline::FlatRead32(r3);
    r6 = (r3 + r0);
    r7 = (r6 + 8);
    goto loc_80035A9C;
}

loc_8003596C:
{
    r4 = MemoryInline::FlatRead8(r7);
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r7 + 1));
    r7 = (r7 + 2);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r0 = (r4 + r0);
    r11 = r7;
    r7 = (r7 + r0);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    r0 = MemoryInline::FlatRead8((r7 + 1));
    r4 = MemoryInline::FlatRead8(r7);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r9 = (r9_rot_2 & -256);
    r10 = MemoryInline::FlatRead8((r7 + 3));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r5 = (r5_rot_2 & -16777216);
    r7 = (r7 + 8);
    r4 = (r10 + r9);
    r0 = (r5 + r0);
    r0 = (r4 + r0);
    r6_addr_2 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_2, r11);
    r9 = (r6 + r0);
    r4 = MemoryInline::FlatRead32((r9 + 4));
    r0 = (r4 + 8);
    r4 = (r9 + r0);
    r9_addr_2 = (r9 + r0);
    r0 = MemoryInline::FlatRead32(r9_addr_2);
    r10 = (r0 + r4);
    r10 = (r10 + 4);
    r0 = MemoryInline::FlatRead16(r10);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_3 & -8);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = (r4 + r10);
    r12 = (r10 + 4);
    r10 = (r10 + r0);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r4 = (r5 + 4);
    r5 = (r5 + 8);
    r31 = (r10 + 4);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r10 = (r10_rot_2 & -8);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r11 = (r10 + r4);
    r10 = (r4 + r0);
    r4 = (r11 + 4);
    r11 = (r10 + 4);
    goto loc_80035A30;
}

loc_80035A18:
{
    MemoryInline::FlatWrite32(r12, r4);
    r12 = (r12 + 4);
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead32(r31);
    r31 = (r31 + 4);
    r4 = (r4 + r0);
}

loc_80035A30:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
    r10 = (r0 + r9);
    r10 = (r10 + 8);
    r0 = MemoryInline::FlatRead32(r10);
    r10 = (r0 + r10);
    r0 = MemoryInline::FlatRead16((r10 + 4));
}

loc_80035A48:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80035A18;
    }
}

loc_80035A4C:
{
    r10 = 0;
    goto loc_80035A70;
}

loc_80035A58:
{
    MemoryInline::FlatWrite32(r5, r4);
    r5 = (r5 + 4);
    r10 = (r10 + 1);
    r0 = MemoryInline::FlatRead32(r11);
    r11 = (r11 + 4);
    r4 = (r4 + r0);
}

loc_80035A70:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
    r3 = (r0 + r9);
    r3 = (r3 + 8);
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 + r3);
    r3 = (r3 + 4);
    r0 = MemoryInline::FlatRead16(r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_80035A94:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r0))) {
        goto loc_80035A58;
    }
}

loc_80035A98:
{
    r8 = (r8 + 1);
}

loc_80035A9C:
{
    r0 = MemoryInline::FlatRead16((r6 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_80035AA4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8003596C;
    }
}

loc_80035AA8:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80035950 func_80035950 preserves=true fpr_mask=0x00000000
