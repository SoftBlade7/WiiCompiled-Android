#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079ACC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079ACC0;

loc_8079ACC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079ACCC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = MemoryInline::FlatRead8((r3 + 108));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079ACE4;
    }
}

loc_8079ACDC:
{
    r3 = 128;
    goto loc_8079AD10;
}

loc_8079ACE4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(14));
}

loc_8079ACEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079ACF8;
    }
}

loc_8079ACF0:
{
    r3 = 0;
    goto loc_8079AD10;
}

loc_8079ACF8:
{
    r3 = 0x809C0000u;
    r0 = (r0 * 36);
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r3 = (r3 + r0);
    r3 = (r3 + 72);
    // inline leaf 0x80797524 (10 guest instruction(s))
}

loc_inl0_0x80797524:
{
    r4 = MemoryInline::FlatRead16((r3 + 32));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(128));
}

loc_inl0_0x80797538:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl0_0x80797544;
    }
}

loc_inl0_0x8079753C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r0));
}

loc_inl0_0x80797544:
{
    r3 = r4;
}

loc_inl0_cont_80797524:
{
    // end of inlined leaf 0x80797524
}

loc_8079AD10:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 16776960);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 | r3);
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079ACC0 func_8079ACC0 preserves=true fpr_mask=0x00000000
