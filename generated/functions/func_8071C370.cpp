#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071C370(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_8071C370;

loc_8071C370:
{
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    r4 = (r4 + 8272);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071C384:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C390;
    }
}

loc_8071C388:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    goto loc_8071C394;
}

loc_8071C390:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
}

loc_8071C394:
{
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071C370 func_8071C370 preserves=true fpr_mask=0x00000000
