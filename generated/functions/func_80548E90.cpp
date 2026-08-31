#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80548E90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;

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

    goto loc_80548E90;

loc_80548E90:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(-1));
}

loc_80548E9C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80548F68;
    }
}

loc_80548EBC:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80548F68;
    }
}

loc_80548ECC:
{
    r8 = (r29 * 3200);
    r0 = 38;
    r5 = (r31 + -1);
    r7 = (r4 * 100);
    r4 = (r30 + r8);
    r4 = (r4 + r7);
    r6 = (r4 + 3615);
    ctr = r0;
}

loc_80548EEC:
{
    r4 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    r6_stbu_ea_2 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80548EEC;
    }
}

loc_80548F00:
{
    r0 = (r30 + r8);
    r5 = MemoryInline::FlatRead16((r31 + 80));
    r4 = (r0 + r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80548F10:
{
    MemoryInline::FlatWrite16((r4 + 3696), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead8((r31 + 82));
    MemoryInline::FlatWrite8((r4 + 3698), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 84));
    MemoryInline::FlatWrite16((r4 + 3700), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 86));
    MemoryInline::FlatWrite8((r4 + 3702), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 88));
    MemoryInline::FlatWrite32((r4 + 3704), r0);
    r0 = MemoryInline::FlatRead32((r31 + 92));
    MemoryInline::FlatWrite32((r4 + 3708), r0);
    r0 = MemoryInline::FlatRead32((r31 + 96));
    MemoryInline::FlatWrite32((r4 + 3712), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80548F68;
    }
}

loc_80548F48:
{
    r5 = (r30 + 65536);
    r4 = 1;
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r5 + -28656));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite8((r5 + -27751), static_cast<uint8_t>(r4));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r5 + -28656), r0);
}

loc_80548F68:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00001FB gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80548E90 func_80548E90 preserves=true fpr_mask=0x00000000
