#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071C39C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071C39C;

loc_8071C39C:
{
    r5 = 0x808A0000u;
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8276));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8071C3AC:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C3C4;
    }
}

loc_8071C3BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    goto loc_8071C3C8;
}

loc_8071C3C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
}

loc_8071C3C8:
{
    MemoryInline::FlatWrite32((r3 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071C39C func_8071C39C preserves=true fpr_mask=0x00000000
