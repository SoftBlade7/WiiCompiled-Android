#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8073F4D4_statefree(uint32_t);

extern "C" void func_80741998(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80741998;

loc_80741998:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r3 = MemoryInline::FlatRead32((r3 + 332));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807419B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807419F4;
    }
}

loc_807419B8:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8073F4D4u) && KnownTranslatedCpuCall<0x8073F4D4u>::kAvailable && !KnownTranslatedCpuCall<0x8073F4D4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8073F4D4u>()) {
        const auto state_free_result_8073F4D4_628 = func_8073F4D4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8073F4D4_628);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8073F4D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = 0x809C0000u;
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r31 + -10448));
    // inline leaf 0x805336A4 (13 guest instruction(s))
}

loc_inl0_0x805336A4:
{
    r4 = 0x809C0000u;
    r3 = 3;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2960));
    r0 = (r0 & 4);
}

loc_inl0_0x805336B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805336BC:
{
    r3 = MemoryInline::FlatRead8((r4 + 2957));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_inl0_0x805336CC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805336D0:
{
    r3 = 3;
    goto loc_inl0_cont_805336A4;
}

loc_inl0_return:
{
}

loc_inl0_cont_805336A4:
{
    // end of inlined leaf 0x805336A4
    r5 = MemoryInline::FlatRead32((r31 + -10448));
    r0 = (r3 & 255);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3_addr_1 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = MemoryInline::FlatRead8((r3 + 38));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_807419E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807419F4;
    }
}

loc_807419EC:
{
    r3 = 1;
    goto loc_807419F8;
}

loc_807419F4:
{
    r3 = 0;
}

loc_807419F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80741998 func_80741998 preserves=true fpr_mask=0x00000000
