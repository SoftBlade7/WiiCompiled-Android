#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C7344(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_addr_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C7344;

loc_801C7344:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80350000u;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & 1020);
    r4 = (r4 + 2352);
    r0 = 2;
    r4_addr_0 = (r4 + r5);
    r6 = MemoryInline::FlatRead32(r4_addr_0);
    r8 = 0;
    r4 = 0;
    r5 = MemoryInline::FlatRead8((r6 + 2248));
    r5 = (r5 * 96);
    r5 = (r6 + r5);
    r7 = (r5 + 160);
    ctr = r0;
}

loc_801C7394:
{
    r7_addr_2 = (r7 + r8);
    MemoryInline::FlatWrite8(r7_addr_2, static_cast<uint8_t>(r4));
    r5 = (r7 + r8);
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r4));
    r5 = (r7 + r8);
    r7_addr_3 = (r7 + r8);
    MemoryInline::FlatWrite8(r7_addr_3, static_cast<uint8_t>(r4));
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r4));
    r5 = (r7 + r8);
    r7_addr_4 = (r7 + r8);
    MemoryInline::FlatWrite8(r7_addr_4, static_cast<uint8_t>(r4));
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r4));
    r5 = (r7 + r8);
    r7_addr_5 = (r7 + r8);
    MemoryInline::FlatWrite8(r7_addr_5, static_cast<uint8_t>(r4));
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r4));
    r5 = (r7 + r8);
    r7_addr_6 = (r7 + r8);
    MemoryInline::FlatWrite8(r7_addr_6, static_cast<uint8_t>(r4));
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r4));
    r5 = (r7 + r8);
    r7_addr_7 = (r7 + r8);
    MemoryInline::FlatWrite8(r7_addr_7, static_cast<uint8_t>(r4));
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C7394;
    }
}

loc_801C7488:
{
    r4 = MemoryInline::FlatRead8((r31 + 2));
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0 = (r0 & 40735);
}

loc_801C7498:
{
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r6 + 2232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C74A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C74B4;
    }
}

loc_801C74A8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r7 + 41), static_cast<uint8_t>(r0));
    goto loc_801C74BC;
}

loc_801C74B4:
{
    r0 = -4;
    MemoryInline::FlatWrite8((r7 + 41), static_cast<uint8_t>(r0));
}

loc_801C74BC:
{
    r0 = MemoryInline::FlatRead8((r6 + 2241));
    MemoryInline::FlatWrite8((r7 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite32((r6 + 2120), r0);
    r0 = MemoryInline::FlatRead8((r6 + 2248));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 255);
    MemoryInline::FlatWrite8((r6 + 2248), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000DB gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801C7344 func_801C7344 preserves=true fpr_mask=0x00000000
