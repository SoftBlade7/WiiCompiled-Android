#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80590A04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80590A04;

loc_80590A04:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x8057EFF8 (11 guest instruction(s))
}

loc_inl0_0x8057EFF8:
{
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 23324));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_inl0_0x8057F010:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl0_0x8057F01C;
    }
}

loc_inl0_0x8057F014:
{
    r3 = 0;
    goto loc_inl0_cont_8057EFF8;
}

loc_inl0_0x8057F01C:
{
    r3 = MemoryInline::FlatRead32((r3 + 204));
}

loc_inl0_cont_8057EFF8:
{
    // end of inlined leaf 0x8057EFF8
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80590A04 func_80590A04 preserves=true fpr_mask=0x00000000
