#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_807E9724(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807E9724;

loc_807E9724:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRam32((r1 + 220), r31);
    r31 = -1;
    MemoryInline::FlatWriteRam32((r1 + 216), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 372));
    r0 = (r0 & 1);
}

loc_807E9748:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E9770;
    }
}

loc_807E974C:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl0_0x8061B358:
{
}

loc_inl0_0x8061B35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl0_0x8061B368;
    }
}

loc_inl0_0x8061B360:
{
    r3 = 0;
    goto loc_inl0_cont_8061B358;
}

loc_inl0_0x8061B368:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
}

loc_807E9764:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807E9770;
    }
}

loc_807E9768:
{
    r31 = 0;
    goto loc_807E982C;
}

loc_807E9770:
{
    r0 = MemoryInline::FlatRead32((r30 + 372));
    r0 = (r0 & 2);
}

loc_807E9778:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E97A0;
    }
}

loc_807E977C:
{
    r3 = 0x809C0000u;
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl1_0x8061B358:
{
}

loc_inl1_0x8061B35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl1_0x8061B368;
    }
}

loc_inl1_0x8061B360:
{
    r3 = 0;
    goto loc_inl1_cont_8061B358;
}

loc_inl1_0x8061B368:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
}

loc_807E9794:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807E97A0;
    }
}

loc_807E9798:
{
    r31 = 1;
    goto loc_807E982C;
}

loc_807E97A0:
{
    r0 = MemoryInline::FlatRead32((r30 + 372));
    r0 = (r0 & 4);
}

loc_807E97A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E97D0;
    }
}

loc_807E97AC:
{
    r3 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl2_0x8061B358:
{
}

loc_inl2_0x8061B35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl2_0x8061B368;
    }
}

loc_inl2_0x8061B360:
{
    r3 = 0;
    goto loc_inl2_cont_8061B358;
}

loc_inl2_0x8061B368:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_7 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
}

loc_807E97C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807E97D0;
    }
}

loc_807E97C8:
{
    r31 = 2;
    goto loc_807E982C;
}

loc_807E97D0:
{
    r0 = MemoryInline::FlatRead32((r30 + 372));
    r0 = (r0 & 8);
}

loc_807E97D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E9800;
    }
}

loc_807E97DC:
{
    r3 = 0x809C0000u;
    r4 = 3;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl3_0x8061B358:
{
}

loc_inl3_0x8061B35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl3_0x8061B368;
    }
}

loc_inl3_0x8061B360:
{
    r3 = 0;
    goto loc_inl3_cont_8061B358;
}

loc_inl3_0x8061B368:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
}

loc_807E97F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807E9800;
    }
}

loc_807E97F8:
{
    r31 = 3;
    goto loc_807E982C;
}

loc_807E9800:
{
    r0 = MemoryInline::FlatRead32((r30 + 372));
    r0 = (r0 & 16);
}

loc_807E9808:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E982C;
    }
}

loc_807E980C:
{
    r3 = 0x809C0000u;
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl4_0x8061B358:
{
}

loc_inl4_0x8061B35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl4_0x8061B368;
    }
}

loc_inl4_0x8061B360:
{
    r3 = 0;
    goto loc_inl4_cont_8061B358;
}

loc_inl4_0x8061B368:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_13 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl4_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
}

loc_807E9824:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807E982C;
    }
}

loc_807E9828:
{
    r31 = 4;
}

loc_807E982C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(-1));
}

loc_807E9830:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E985C;
    }
}

loc_807E9834:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_1CD2 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_1CD2[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_1CD2[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
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
    MemoryInline::FlatWriteRam32((r1 + 128), r31);
    r3 = r30;
    r5 = (r1 + 8);
    r4 = 2001;
    ctx->lr = 0x807E9850u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 128), static_cast<uint8_t>(r0));
    goto loc_807E9864;
}

loc_807E985C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 128), static_cast<uint8_t>(r0));
}

loc_807E9864:
{
    r0 = MemoryInline::FlatRead32((r1 + 228));
    r31 = MemoryInline::FlatRead32((r1 + 220));
    r30 = MemoryInline::FlatRead32((r1 + 216));
    ctx->lr = r0;
    r1 = (r1 + 224);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEF9F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807E9724 func_807E9724 preserves=true fpr_mask=0x00000000
