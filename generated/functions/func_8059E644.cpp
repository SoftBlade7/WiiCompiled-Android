#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059E644(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059E644;

loc_8059E644:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059E660:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059E684;
    }
}

loc_8059E664:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // inline leaf 0x80833474 (11 guest instruction(s))
}

loc_inl0_0x80833474:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 4080);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 17));
}

loc_inl0_0x80833484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80833498;
    }
}

loc_inl0_0x80833488:
{
    r0 = (r5 * 44);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + r0);
    goto loc_inl0_cont_80833474;
}

loc_inl0_0x80833498:
{
    r3 = 0;
}

loc_inl0_cont_80833474:
{
    // end of inlined leaf 0x80833474
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8059E670:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059E684;
    }
}

loc_8059E674:
{
    r0 = MemoryInline::FlatRead16((r3 + 36));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059E67C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059E684;
    }
}

loc_8059E680:
{
    r31 = MemoryInline::FlatRead32((r3 + 32));
}

loc_8059E684:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8059E644 func_8059E644 preserves=true fpr_mask=0x00000000
