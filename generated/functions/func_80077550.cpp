#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80077550(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80077550;

loc_80077550:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80077554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007759C;
    }
}

loc_80077558:
{
    r5 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80077560:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007759C;
    }
}

loc_80077564:
{
    f0.d = MemoryInline::FlatReadFloat64(r5);
    r3 = r4;
    MemoryInline::FlatWriteFloat64(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 8));
    MemoryInline::FlatWriteFloat64((r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 16));
    MemoryInline::FlatWriteFloat64((r4 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 24));
    MemoryInline::FlatWriteFloat64((r4 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 32));
    MemoryInline::FlatWriteFloat64((r4 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 40));
    MemoryInline::FlatWriteFloat64((r4 + 40), f0.d);
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_8007759C:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000028 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80077550 func_80077550 preserves=true fpr_mask=0x00000000
