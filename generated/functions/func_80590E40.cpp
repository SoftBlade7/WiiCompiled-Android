#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80590E40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80590E40;

loc_80590E40:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80590E4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80590E50:
{
    // inline leaf 0x805A4DBC (8 guest instruction(s))
}

loc_inl0_0x805A4DBC:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 288));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 9172));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl0_0x805A4DD0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805A4DD4:
{
    MemoryInline::FlatWriteFloat32((r3 + 288), f1.d);
    goto loc_inl0_cont_805A4DBC;
}

loc_inl0_return:
{
}

loc_inl0_cont_805A4DBC:
{
    // end of inlined leaf 0x805A4DBC
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
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80590E40 func_80590E40 preserves=true fpr_mask=0x00000000
