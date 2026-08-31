#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80621410_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80621410_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_8064F93C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8064F93C;

loc_8064F93C:
{
    r0 = (r26 & 255);
    r4 = MemoryInline::FlatRead32((r29 + -10456));
    r0 = (r0 * 240);
    r4 = (r4 + 40);
    r5 = (r4 + r27);
    r4 = (r4 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 204));
    r7 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8064F960:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r7))) {
        goto loc_8064F988;
    }
}

loc_8064F964:
{
    r4 = MemoryInline::FlatRead32((r6 + 152));
    r0 = MemoryInline::FlatRead32((r4 + 112));
}

loc_8064F970:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_8064F97C;
    }
}

loc_8064F974:
{
    // inline leaf 0x805199E8 (6 guest instruction(s))
}

loc_inl0_0x805199E8:
{
    r4 = MemoryInline::FlatRead16((r3 + 28));
}

loc_inl0_0x805199F0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(65535))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805199F4:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_805199E8;
}

loc_inl0_return:
{
}

loc_inl0_cont_805199E8:
{
    // end of inlined leaf 0x805199E8
    goto loc_8064F988;
}

loc_8064F97C:
{
}

loc_8064F980:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_8064F988;
    }
}

loc_8064F984:
{
    // inline leaf 0x805199D0 (6 guest instruction(s))
}

loc_inl1_0x805199D0:
{
    r4 = MemoryInline::FlatRead16((r3 + 26));
}

loc_inl1_0x805199D8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(65535))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x805199DC:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_805199D0;
}

loc_inl1_return:
{
}

loc_inl1_cont_805199D0:
{
    // end of inlined leaf 0x805199D0
}

loc_8064F988:
{
    r6 = 1;
    r26 = (r26 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(12));
}

loc_8064F994:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8064F7EC;
    }
}

loc_8064F998:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8064F99C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064F9B4;
    }
}

loc_8064F9A0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    ctx->lr = 0x8064F9B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D21B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8064F9B4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80621410u) && KnownTranslatedCpuCall<0x80621410u>::kAvailable && !KnownTranslatedCpuCall<0x80621410u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80621410u>()) {
        const auto state_free_result_80621410_1150 = func_80621410_statefree_v0(r3, cr, xer);
        cr = static_cast<uint32_t>(state_free_result_80621410_1150);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80621410u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r26 = MemoryInline::FlatRead32((r1 + 24));
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

loc_8064F7EC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8064F7ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFC0000FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8064F93C func_8064F93C preserves=true fpr_mask=0x00000000
