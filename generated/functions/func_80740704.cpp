#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80740704(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80740704;

loc_80740704:
{
    r4 = 0x808A0000u;
    r6 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10448));
    r5 = 0;
    goto loc_80740728;
}

loc_80740718:
{
    r4 = MemoryInline::FlatRead32((r6 + 12));
    r6 = (r6 + 4);
    r5 = (r5 + 1);
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
}

loc_80740728:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80740730:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80740718;
    }
}

loc_80740734:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000069 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80740704 func_80740704 preserves=true fpr_mask=0x00000000
