#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071C8A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_8071C8A8;

loc_8071C8A8:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_8071C8C0:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 12));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071C8E0;
    }
}

loc_8071C8D0:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8071C8D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071C8E0;
    }
}

loc_8071C8D8:
{
    r0 = -1;
    goto loc_8071C8F8;
}

loc_8071C8E0:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8071C8E4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071C8F8;
    }
}

loc_8071C8EC:
{
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_8071C8F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071C8F8;
    }
}

loc_8071C8F4:
{
    r0 = 1;
}

loc_8071C8F8:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x00000019 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071C8A8 func_8071C8A8 preserves=true fpr_mask=0x00000000
