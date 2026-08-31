#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_800BC3E0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800BC3E0_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_800C7740(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C7740;

loc_800C7740:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    // inline leaf 0x800BC370 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800BC370
}

loc_800C7758:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C7764;
    }
}

loc_800C775C:
{
    r31 = 0;
    goto loc_800C7798;
}

loc_800C7764:
{
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl1_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl1_0x800BC3E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800BC3F4;
    }
}

loc_inl1_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl1_cont_800BC3E0;
}

loc_inl1_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl1_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
}

loc_800C776C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C7778;
    }
}

loc_800C7770:
{
    r31 = 0;
    goto loc_800C7798;
}

loc_800C7778:
{
    r31 = 0;
    // inline leaf 0x800BC6C0 (8 guest instruction(s))
}

loc_inl2_0x800BC6C0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r4 = (r13 + -26976);
}

loc_inl2_0x800BC6CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x800BC6D4;
    }
}

loc_inl2_0x800BC6D0:
{
    r4 = (r3 + 6972);
}

loc_inl2_0x800BC6D4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_800BC6C0:
{
    // end of inlined leaf 0x800BC6C0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800C7784:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C7798;
    }
}

loc_800C7788:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BC6A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800C7790:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C7798;
    }
}

loc_800C7794:
{
    r31 = 1;
}

loc_800C7798:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800C779C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C77A8;
    }
}

loc_800C77A0:
{
    r3 = 1;
    goto loc_800C77B8;
}

loc_800C77A8:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800BC3E0u) && KnownTranslatedCpuCall<0x800BC3E0u>::kAvailable && !KnownTranslatedCpuCall<0x800BC3E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800BC3E0u>()) {
        const auto state_free_result_800BC3E0_F8C = func_800BC3E0_statefree_v0(r13, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_800BC3E0_F8C[0]);
        cr = static_cast<uint32_t>(state_free_result_800BC3E0_F8C[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800BC3E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 7404));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
}

loc_800C77B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
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

// RECOMP_GUEST_ABI gpr_read=0x8000201B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C7740 func_800C7740 preserves=true fpr_mask=0x00000000
