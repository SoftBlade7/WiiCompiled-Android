#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054E03C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_8054E03C;

loc_8054E03C:
{
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 3748));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8054E04C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8054E06C;
    }
}

loc_8054E050:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 3928));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8054E064:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8054E06C;
    }
}

loc_8054E068:
{
    MemoryInline::FlatWriteFloat32((r3 + 36), f1.d);
}

loc_8054E06C:
{
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 3748));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8054E07C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8054E084:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = 0;
    // inline leaf 0x80565654 (4 guest instruction(s))
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 6224));
    MemoryInline::FlatWrite8((r4 + 136), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x80565654
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
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
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054E03C func_8054E03C preserves=true fpr_mask=0x00000000
