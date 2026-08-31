#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A1424(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A1424;

loc_805A1424:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r5 = 0;
}

loc_805A1430:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_805A1444;
    }
}

loc_805A1434:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_805A143C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_805A1444;
    }
}

loc_805A1440:
{
    r5 = 1;
}

loc_805A1444:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805A1448:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A1470;
    }
}

loc_805A144C:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A1454:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A1470;
    }
}

loc_805A1458:
{
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8304));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A1468:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A1470;
    }
}

loc_805A146C:
{
    r5 = 1;
}

loc_805A1470:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A1424 func_805A1424 preserves=true fpr_mask=0x00000000
