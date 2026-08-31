#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054D2CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_8054D2CC;

loc_8054D2CC:
{
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 3748));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8054D2DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_8054D2E0:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 3904));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8054D2F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8054D2FC;
    }
}

loc_8054D2F8:
{
    MemoryInline::FlatWriteFloat32((r3 + 32), f1.d);
}

loc_8054D2FC:
{
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 3748));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8054D30C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8054D314:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054D2CC func_8054D2CC preserves=true fpr_mask=0x00000000
