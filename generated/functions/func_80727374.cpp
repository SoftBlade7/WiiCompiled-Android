#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80727374(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80727374;

loc_80727374:
{
    r5 = MemoryInline::FlatRead32((r3 + 336));
    r4 = MemoryInline::FlatRead32((r3 + 332));
}

loc_80727380:
{
    r6 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 332), r6);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80727398;
    }
}

loc_8072738C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_80727390:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807273BC;
    }
}

loc_80727394:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_80727398:
{
    r4 = 0x808D0000u;
    r0 = MemoryInline::FlatRead16((r4 + -26364));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_807273A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_807273A8:
{
    r4 = (r5 + 1);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 336), r4);
    MemoryInline::FlatWrite32((r3 + 332), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_807273BC:
{
    r5 = 0x808A0000u;
    r4 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 9152));
    MemoryInline::FlatWriteFloat32((r3 + 348), f0.d);
    r0 = MemoryInline::FlatRead16((r4 + -26362));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_807273D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_807273D8:
{
    r4 = (r3 + 56);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
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

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80727374 func_80727374 preserves=true fpr_mask=0x00000000
