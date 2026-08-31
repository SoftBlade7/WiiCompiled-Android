#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071C818(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071C818;

loc_8071C818:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8071C81C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C864;
    }
}

loc_8071C820:
{
    r4 = 0x808A0000u;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8276));
    r5 = 1;
    MemoryInline::FlatWriteFloat32((r6 + 20), f0.d);
    r0 = -1;
    MemoryInline::FlatWrite32((r6 + 24), r5);
    MemoryInline::FlatWrite8((r6 + 40), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r6 + 32));
    MemoryInline::FlatWrite32((r6 + 28), r4);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_8071C864:
{
    r4 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8276));
    r0 = -1;
    MemoryInline::FlatWriteFloat32((r5 + 20), f0.d);
    r4 = 1;
    MemoryInline::FlatWrite32((r5 + 24), r0);
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r5 + 36));
    MemoryInline::FlatWrite32((r5 + 28), r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071C818 func_8071C818 preserves=true fpr_mask=0x00000000
