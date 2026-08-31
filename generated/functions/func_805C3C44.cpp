#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805C3C44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805C3C44;

loc_805C3C44:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r4 = -1;
    r0 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C3C58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C3CC0;
    }
}

loc_805C3C5C:
{
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 13088));
    f0.d = PPC_Fctiwz(f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    f0.d = PPC_Fctiwz(f1.d);
    r4 = fctiwzword0;
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
}

loc_805C3C8C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_805C3C9C;
    }
}

loc_805C3C90:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_805C3C9C:
{
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 13084));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805C3CAC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C3CC0;
    }
}

loc_805C3CB4:
{
    r0 = 0;
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_805C3CC0:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x00000013 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805C3C44 func_805C3C44 preserves=true fpr_mask=0x00000000
