#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EEE0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805EEE0C;

loc_805EEE0C:
{
    r5 = 0x809C0000u;
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B398 (13 guest instruction(s))
}

loc_inl0_0x8061B398:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x8061B3A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x8061B3C4;
    }
}

loc_inl0_0x8061B3AC:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_inl0_0x8061B3B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x8061B3C4;
    }
}

loc_inl0_0x8061B3BC:
{
    r3 = MemoryInline::FlatRead32((r4 + 16));
    goto loc_inl0_cont_8061B398;
}

loc_inl0_0x8061B3C4:
{
    r3 = 0;
}

loc_inl0_cont_8061B398:
{
    // end of inlined leaf 0x8061B398
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805EEE0C func_805EEE0C preserves=true fpr_mask=0x00000000
