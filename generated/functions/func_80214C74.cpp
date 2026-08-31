#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80214C74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r10_mdest_0 = 0;
    uint32_t r10_mdest_1 = 0;
    uint32_t r10_mdest_2 = 0;
    uint32_t r10_mrot_0 = 0;
    uint32_t r10_mrot_1 = 0;
    uint32_t r10_mrot_2 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80214C74;

loc_80214C74:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
}

loc_80214C80:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r26);
    MemoryInline::FlatWriteRam32((r1 + 28), r27);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    r26 = r6;
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(-1))) {
        goto loc_80214C9C;
    }
}

loc_80214C94:
{
    r27 = MemoryInline::FlatRead8((r3 + 5));
    goto loc_80214CA0;
}

loc_80214C9C:
{
    r27 = r7;
}

loc_80214CA0:
{
}

loc_80214CA4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80214CB4;
    }
}

loc_80214CA8:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    goto loc_80214CB8;
}

loc_80214CB4:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_80214CB8:
{
}

loc_80214CBC:
{
    r3 = r4;
    r4 = r5;
    r5 = (r0 & 65535);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80214CD8;
    }
}

loc_80214CCC:
{
    r0 = MemoryInline::FlatRead16((r31 + 2));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    goto loc_80214CDC;
}

loc_80214CD8:
{
    r0 = MemoryInline::FlatRead16((r31 + 2));
}

loc_80214CDC:
{
    r6 = (r0 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8016F478u>(ctx);
    r3 = MemoryInline::FlatRead16(r31);
    r5 = r27;
    r4 = MemoryInline::FlatRead16((r31 + 2));
    r6 = (r26 & 255);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8016F4DCu>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r3 = (r0 & 8);
}

loc_80214D00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80214D0C;
    }
}

loc_80214D04:
{
    r6 = (r31 + 32);
    goto loc_80214D10;
}

loc_80214D0C:
{
    r6 = (r2 + -25824);
}

loc_80214D10:
{
    r0 = (0 - r3);
    r29 = 0x80250000u;
    r0 = (r0 | r3);
    r3 = 0;
    r4 = (r29 + 29760);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8016FA40u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r30 = 0x80380000u;
    r30 = (r30 + 17696);
    r27 = (r0 & 1);
    r28 = MemoryInline::FlatRead8((r30 + 12));
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801727CCu>(ctx);
    MemoryInline::FlatWriteRam8((r30 + 12), static_cast<uint8_t>(r27));
    r27 = MemoryInline::FlatRead8((r30 + 13));
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r26_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r26 = (r26_rot_0 & 1);
    r3 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801727F8u>(ctx);
    MemoryInline::FlatWriteRam8((r30 + 13), static_cast<uint8_t>(r26));
    r3 = 1;
    r4 = 7;
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r5 = (r5_rot_1 & 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80172824u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 21));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 22));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 23));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 24));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r31 + 28));
    // inline leaf 0x8016F9C8 (30 guest instruction(s))
    r6 = MemoryInline::FlatRead8(r3);
    r7 = -872349696;
    r8 = 97;
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r10 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    r10_mrot_0 = (r6 & 255);
    r10_mdest_0 = (r10 & -256);
    r10 = (r10_mdest_0 | r10_mrot_0);
    r9 = 79;
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r10_mrot_1 = (r10_rot_0 & 65280);
    r10_mdest_1 = (r10 & -65281);
    r10 = (r10_mdest_1 | r10_mrot_1);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(24));
    r10_mrot_2 = (r10_rot_1 & -16777216);
    r10_mdest_2 = (r10 & 16777215);
    r10 = (r10_mdest_2 | r10_mrot_2);
    r6 = 0;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r10));
    r6_mrot_0 = (r0 & 255);
    r6_mdest_0 = (r6 & -256);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r3 = MemoryInline::FlatRead8((r3 + 1));
    r0 = 80;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    r5 = 0;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r6_mrot_1 = (r6_rot_0 & 65280);
    r6_mdest_1 = (r6 & -65281);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6_mrot_2 = (r6_rot_1 & -16777216);
    r6_mdest_2 = (r6 & 16777215);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r0 = 81;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r5_mrot_0 = (r4 & 16777215);
    r5_mdest_0 = (r5 & -16777216);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5_mrot_1 = (r5_rot_2 & -16777216);
    r5_mdest_1 = (r5 & 16777215);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r0 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r5));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8016F9C8
    r3 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016F618u>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016FD74u>(ctx);
    r4 = (r29 + 29760);
    r3 = 0;
    r5 = 0;
    r6 = (r2 + -25824);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8016FA40u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80214DD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80214DDC;
    }
}

loc_80214DD8:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8016EB70u>(ctx);
}

loc_80214DDC:
{
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801727F8u>(ctx);
    r31 = 0x80380000u;
    r3 = r28;
    r31 = (r31 + 17696);
    MemoryInline::FlatWriteRam8((r31 + 13), static_cast<uint8_t>(r27));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801727CCu>(ctx);
    MemoryInline::FlatWriteRam8((r31 + 12), static_cast<uint8_t>(r28));
    r26 = MemoryInline::FlatRead32((r1 + 24));
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0000FF gpr_write=0xFC0007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80214C74 func_80214C74 preserves=true fpr_mask=0x00000000
