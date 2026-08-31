#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008F650(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_8008F650;

loc_8008F650:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28712));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F658:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8008F660;
    }
}

loc_8008F65C:
{
    goto loc_8008F674;
}

loc_8008F660:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28708));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F668:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8008F670;
    }
}

loc_8008F66C:
{
    goto loc_8008F674;
}

loc_8008F670:
{
    f0.d = f1.d;
}

loc_8008F674:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 208), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008F650 func_8008F650 preserves=true fpr_mask=0x00000000
