#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800989D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800989D0;

loc_800989D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead8((r13 + -27168));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80098A44;
    }
}

loc_800989F4:
{
    r3 = 0x802D0000u;
    r0 = 0;
    r30 = (r3 + 22704);
    MemoryInline::FlatWriteRam8((r3 + 22704), static_cast<uint8_t>(r0));
    r29 = (r30 + 56);
    r31 = (r30 + 728);
}

loc_80098A0C:
{
    r3 = r29;
    ctx->lr = 0x80098A14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80098020u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    r29 = (r29 + 168);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r31));
}

loc_80098A1C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80098A0C;
    }
}

loc_80098A20:
{
    r4 = 1;
    r5 = 0;
    r3 = 2;
    r0 = 3;
    MemoryInline::FlatWriteRam32((r30 + 108), r5);
    MemoryInline::FlatWriteRam32((r30 + 276), r4);
    MemoryInline::FlatWriteRam32((r30 + 444), r3);
    MemoryInline::FlatWriteRam32((r30 + 612), r0);
    MemoryInline::FlatWrite8((r13 + -27168), static_cast<uint8_t>(r4));
}

loc_80098A44:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = 0x802D0000u;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r3 = (r3 + 22704);
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000203A gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800989D0 func_800989D0 preserves=true fpr_mask=0x00000000
