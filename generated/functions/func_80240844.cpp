#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80240844(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80240844;

loc_80240844:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80380000u;
    r30 = (r30 + 17536);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = (r3 * 12);
    r30_addr_0 = (r30 + r29);
    r3 = MemoryInline::FlatRead32(r30_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80240870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802408A0;
    }
}

loc_80240874:
{
    r31 = (r30 + r29);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80240880:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802408A0;
    }
}

loc_80240884:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80242F90u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = 0;
    r30_addr_1 = (r30 + r29);
    MemoryInline::FlatWrite32(r30_addr_1, r0);
    r3 = 1;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_802408A4;
}

loc_802408A0:
{
    r3 = 0;
}

loc_802408A4:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000207B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80240844 func_80240844 preserves=true fpr_mask=0x00000000
