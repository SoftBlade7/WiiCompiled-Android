#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80095850(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80095850;

loc_80095850:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r6;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r28 + 3);
    r4 = (r30 + 3);
    r6 = (r0 & -4);
    r7 = 0;
    r0 = (r6 - r28);
    r4 = (r4 & -4);
    r0 = (r29 - r0);
    r30 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009596C;
    }
}

loc_800958A4:
{
}

loc_800958A8:
{
    r5 = (r30 + -8);
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(8))) {
        goto loc_80095948;
    }
}

loc_800958B0:
{
    r0 = (r5 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_800958C0:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_80095948;
    }
}

loc_800958C4:
{
    r0 = MemoryInline::FlatRead32(r31);
    r8 = r6;
    MemoryInline::FlatWrite32(r6, r0);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite32(r31, r6);
    r6 = (r6 + r4);
    r5 = r6;
    MemoryInline::FlatWrite32(r6, r8);
    MemoryInline::FlatWrite32(r31, r6);
    r6 = (r6 + r4);
    r0 = r6;
    MemoryInline::FlatWrite32(r6, r5);
    MemoryInline::FlatWrite32(r31, r6);
    r6 = (r6 + r4);
    r5 = r6;
    MemoryInline::FlatWrite32(r6, r0);
    MemoryInline::FlatWrite32(r31, r6);
    r6 = (r6 + r4);
    r0 = r6;
    MemoryInline::FlatWrite32(r6, r5);
    MemoryInline::FlatWrite32(r31, r6);
    r6 = (r6 + r4);
    r5 = r6;
    MemoryInline::FlatWrite32(r6, r0);
    MemoryInline::FlatWrite32(r31, r6);
    r6 = (r6 + r4);
    r0 = r6;
    MemoryInline::FlatWrite32(r6, r5);
    MemoryInline::FlatWrite32(r31, r6);
    r6_addr_2 = (r6 + r4);
    MemoryInline::FlatWrite32(r6_addr_2, r0);
    r6 = r6_addr_2;
    MemoryInline::FlatWrite32(r31, r6);
    r6 = (r6 + r4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800958C4;
    }
}

loc_80095948:
{
    r0 = (r30 - r7);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r30));
}

loc_80095954:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009596C;
    }
}

loc_80095958:
{
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32(r6, r0);
    MemoryInline::FlatWrite32(r31, r6);
    r6 = (r6 + r4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80095958;
    }
}

loc_8009596C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001FB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80095850 func_80095850 preserves=true fpr_mask=0x00000000
