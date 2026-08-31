#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016F4DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016F4DC;

loc_8016F4DC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r7 = MemoryInline::FlatRead32((r2 + -26840));
}

loc_8016F4EC:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0;
    r9 = r3;
    r8 = r4;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = (r5 & 15);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r6;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    MemoryInline::FlatWrite8((r7 + 592), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(19))) {
        goto loc_8016F520;
    }
}

loc_8016F51C:
{
    r31 = 11;
}

loc_8016F520:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(38));
}

loc_8016F524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016F540;
    }
}

loc_8016F528:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8016F558;
    }
}

loc_8016F52C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_8016F530:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8016F558;
    }
}

loc_8016F534:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8016F538:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8016F540;
    }
}

loc_8016F53C:
{
    goto loc_8016F558;
}

loc_8016F540:
{
    r0 = 3;
    r3 = MemoryInline::FlatRead32((r7 + 588));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r3_mrot_1 = (r3_rot_1 & 98304);
    r3_mdest_1 = (r3 & -98305);
    r3 = (r3_mdest_1 | r3_mrot_1);
    r29 = (r7 + 588);
    MemoryInline::FlatWrite32((r7 + 588), r3);
    goto loc_8016F56C;
}

loc_8016F558:
{
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r7 + 588));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r3_mrot_0 = (r3_rot_0 & 98304);
    r3_mdest_0 = (r3 & -98305);
    r3 = (r3_mdest_0 | r3_mrot_0);
    r29 = (r7 + 588);
    MemoryInline::FlatWrite32((r7 + 588), r3);
}

loc_8016F56C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r0 = (r0_rot_0 & 1);
    r3 = r5;
    MemoryInline::FlatWrite8((r7 + 592), static_cast<uint8_t>(r0));
    r5 = r8;
    r28 = MemoryInline::FlatRead32((r2 + -26840));
    r4 = r9;
    r0 = MemoryInline::FlatRead32(r29);
    r0_mrot_0 = (r31 & 8);
    r0_mdest_0 = (r0 & -9);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r6 = (r1 + 16);
    r7 = (r1 + 12);
    MemoryInline::FlatWrite32(r29, r0);
    r8 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x80170738u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    r3 = 0;
    MemoryInline::FlatWrite32((r28 + 584), r0);
    r0 = 77;
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r5 * r4);
    r3_mrot_3 = (r4 & 1023);
    r3_mdest_3 = (r3 & -1024);
    r3 = (r3_mdest_3 | r3_mrot_3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3_mrot_4 = (r3_rot_3 & -16777216);
    r3_mdest_4 = (r3 & 16777215);
    r3 = (r3_mdest_4 | r3_mrot_4);
    MemoryInline::FlatWrite32((r28 + 584), r3);
    r0 = MemoryInline::FlatRead32(r29);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(9));
    r0_mrot_1 = (r0_rot_1 & 512);
    r0_mdest_1 = (r0 & -513);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r0_mrot_2 = (r0_rot_2 & 112);
    r0_mdest_2 = (r0 & -113);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32(r29, r0);
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0001FFF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8016F4DC func_8016F4DC preserves=true fpr_mask=0x00000000
