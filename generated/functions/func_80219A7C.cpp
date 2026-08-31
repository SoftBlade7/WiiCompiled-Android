#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80219A7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mdest_2 = 0;
    uint32_t r10_mdest_3 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_mrot_2 = 0;
    uint32_t r10_mrot_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r12_mdest_0 = 0;
    uint32_t r12_mdest_1 = 0;
    uint32_t r12_mdest_2 = 0;
    uint32_t r12_mdest_3 = 0;
    uint32_t r12_mrot_0 = 0;
    uint32_t r12_mrot_1 = 0;
    uint32_t r12_mrot_2 = 0;
    uint32_t r12_mrot_3 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_subfic_ra_0 = 0;
    uint32_t r4_subfic_ra_1 = 0;
    uint32_t r4_subfic_ra_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80219A7C;

loc_80219A7C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = (r13 + -24080);
    r7 = (r13 + -24064);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r5 = (r13 + -24056);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r6_addr_0 = (r6 + r0);
    r28 = MemoryInline::FlatRead32(r6_addr_0);
    r7_addr_0 = (r7 + r0);
    r29 = MemoryInline::FlatRead32(r7_addr_0);
    r31 = (r28 + r4);
    r5_addr_0 = (r5 + r0);
    r8 = MemoryInline::FlatRead32(r5_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(32));
}

loc_80219AB4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80219B10;
    }
}

loc_80219AB8:
{
    r11 = (r29 + r3);
    r9 = (32 - r4);
    r10 = MemoryInline::FlatRead8((r11 + 1));
    r4_subfic_ra_0 = r4;
    r4 = (64 - r4_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(64) >= static_cast<uint32_t>(r4_subfic_ra_0) ? 1u : 0u) << 29);
    r30 = MemoryInline::FlatRead8((r11 + 2));
    r4 = (r4 - r28);
    r12 = MemoryInline::FlatRead8((r11 + 3));
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r10 = (r10_rot_0 & -65536);
    r3_addr_0 = (r3 + r29);
    r11 = MemoryInline::FlatRead8(r3_addr_0);
    r28 = (r31 + -32);
    r3 = (r29 + 4);
    r6_addr_1 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_1, r28);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(8));
    r12_mrot_0 = (r12_rot_0 & 65280);
    r12_mdest_0 = (r12 & -65281);
    r12 = (r12_mdest_0 | r12_mrot_0);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r10_mrot_0 = (r10_rot_1 & -16777216);
    r10_mdest_0 = (r10 & 16777215);
    r10 = (r10_mdest_0 | r10_mrot_0);
    r10 = (r12 | r10);
    r7_addr_1 = (r7 + r0);
    MemoryInline::FlatWrite32(r7_addr_1, r3);
    r3 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r28));
    r6 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r9));
    r4 = PPC_Srw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r4));
    r5_addr_1 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_1, r3);
    r3 = (r6 | r4);
    goto loc_80219B6C;
}

loc_80219B10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80219B58;
    }
}

loc_80219B14:
{
    r11 = (r29 + r3);
    r30 = (32 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r10 = MemoryInline::FlatRead8((r11 + 1));
    r9 = (r29 + 4);
    r31 = MemoryInline::FlatRead8((r11 + 2));
    r4 = 0;
    r12 = MemoryInline::FlatRead8((r11 + 3));
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(16));
    r10 = (r10_rot_2 & -65536);
    r3_addr_1 = (r3 + r29);
    r11 = MemoryInline::FlatRead8(r3_addr_1);
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(8));
    r12_mrot_1 = (r12_rot_1 & 65280);
    r12_mdest_1 = (r12 & -65281);
    r12 = (r12_mdest_1 | r12_mrot_1);
    r7_addr_2 = (r7 + r0);
    MemoryInline::FlatWrite32(r7_addr_2, r9);
    r3 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r30));
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r10_mrot_1 = (r10_rot_3 & -16777216);
    r10_mdest_1 = (r10 & 16777215);
    r10 = (r10_mdest_1 | r10_mrot_1);
    r7 = (r12 | r10);
    r5_addr_2 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_2, r7);
    r6_addr_2 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_2, r4);
    goto loc_80219B6C;
}

loc_80219B58:
{
    r3 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r4));
    r7 = (32 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r5_addr_3 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_3, r3);
    r3 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r7));
    r6_addr_3 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_3, r31);
}

loc_80219B6C:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r1 = (r1 + 32);
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00021FB gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80219A7C func_80219A7C preserves=true fpr_mask=0x00000000
