#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80510BF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;

    goto loc_80510BF0;

loc_80510BF0:
{
    r8 = MemoryInline::FlatRead32(r4);
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32(r5);
    r0 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r8 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32(r6);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -1840));
    f3.d = (-(f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    MemoryInline::FlatWriteFloat32(r7, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80510C4C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80510C6C;
    }
}

loc_80510C54:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -1836));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80510C60:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80510C6C;
    }
}

loc_80510C68:
{
    r0 = 1;
}

loc_80510C6C:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x00000119 gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80510BF0 func_80510BF0 preserves=true fpr_mask=0x00000000
