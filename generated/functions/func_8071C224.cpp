#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071C224(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_8071C224;

loc_8071C224:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = 0x808A0000u;
    r4 = (r4 + 8272);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071C23C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071C248;
    }
}

loc_8071C240:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 16));
    goto loc_8071C24C;
}

loc_8071C248:
{
    f3.d = MemoryInline::FlatReadFloat32(r4);
}

loc_8071C24C:
{
    r3 = 0x808D0000u;
    f1.d = std::fabs(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + -27572));
    r3 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -27576));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8071C264:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C270;
    }
}

loc_8071C268:
{
    f1.d = f2.d;
    goto loc_8071C27C;
}

loc_8071C270:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071C274:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071C27C;
    }
}

loc_8071C278:
{
    f1.d = f0.d;
}

loc_8071C27C:
{
    r4 = 0x808D0000u;
    r3 = 0x808D0000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + -27576));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -27572));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = PpcFmulsInline(f3.d, f0.d);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071C224 func_8071C224 preserves=true fpr_mask=0x00000000
