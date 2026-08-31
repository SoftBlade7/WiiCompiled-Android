#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807DB004(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807DB004;

loc_807DB004:
{
    // inline leaf 0x8078DDB4 (12 guest instruction(s))
}

loc_inl0_0x8078DDB4:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r4 + 12092));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x8078DDC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x8078DDDC;
    }
}

loc_inl0_0x8078DDC8:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10504));
    r0 = MemoryInline::FlatRead8((r4 + 76));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x8078DDD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8078DDDC:
{
    r3 = 1;
    goto loc_inl0_cont_8078DDB4;
}

loc_inl0_return:
{
}

loc_inl0_cont_8078DDB4:
{
    // end of inlined leaf 0x8078DDB4
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807DB004 func_807DB004 preserves=true fpr_mask=0x00000000
