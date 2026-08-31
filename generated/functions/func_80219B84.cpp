#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80219B84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80219B84;

loc_80219B84:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r11 = (r11_rot_0 & -4);
    r9 = (r13 + -24080);
    r8 = (r13 + -24056);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r10 = (r13 + -24064);
    r9_addr_0 = (r9 + r11);
    r4 = MemoryInline::FlatRead32(r9_addr_0);
    r8_addr_0 = (r8 + r11);
    r0 = MemoryInline::FlatRead32(r8_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(31));
}

loc_80219BA8:
{
    r10_addr_0 = (r10 + r11);
    r12 = MemoryInline::FlatRead32(r10_addr_0);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r31 = (r31_rot_0 & 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80219BF0;
    }
}

loc_80219BB4:
{
    r6 = (r12 + r3);
    r4 = (r12 + 4);
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r0 = 0;
    r7 = MemoryInline::FlatRead8((r6 + 2));
    r6 = MemoryInline::FlatRead8((r6 + 3));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r5 = (r5_rot_0 & -65536);
    r3_addr_0 = (r3 + r12);
    r3 = MemoryInline::FlatRead8(r3_addr_0);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r6_mrot_0 = (r6_rot_0 & 65280);
    r6_mdest_0 = (r6 & -65281);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r10_addr_1 = (r10 + r11);
    MemoryInline::FlatWrite32(r10_addr_1, r4);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r5_mrot_0 = (r5_rot_1 & -16777216);
    r5_mdest_0 = (r5 & 16777215);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r3 = (r6 | r5);
    r8_addr_1 = (r8 + r11);
    MemoryInline::FlatWrite32(r8_addr_1, r3);
    r9_addr_1 = (r9 + r11);
    MemoryInline::FlatWrite32(r9_addr_1, r0);
    goto loc_80219C00;
}

loc_80219BF0:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0 = (r4 + 1);
    r8_addr_2 = (r8 + r11);
    MemoryInline::FlatWrite32(r8_addr_2, r3);
    r9_addr_2 = (r9 + r11);
    MemoryInline::FlatWrite32(r9_addr_2, r0);
}

loc_80219C00:
{
    r3 = r31;
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

// RECOMP_GUEST_ABI gpr_read=0x80002F1B gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80219B84 func_80219B84 preserves=true fpr_mask=0x00000000
