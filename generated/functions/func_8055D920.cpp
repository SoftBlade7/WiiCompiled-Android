#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_8004EA50_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8004EA50_statefree_v1(uint32_t, uint32_t);

extern "C" void func_8055D920(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8055D920;

loc_8055D920:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r27);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r27 = r4;
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8055D940:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8055D94C;
    }
}

loc_8055D944:
{
    r0 = MemoryInline::FlatRead32(r5);
    goto loc_8055D950;
}

loc_8055D94C:
{
    r0 = 0;
}

loc_8055D950:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8055D954:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055D978;
    }
}

loc_8055D958:
{
}

loc_8055D95C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8055D968;
    }
}

loc_8055D960:
{
    r3 = MemoryInline::FlatRead32(r5);
    goto loc_8055D96C;
}

loc_8055D968:
{
    r3 = 0;
}

loc_8055D96C:
{
    r4 = r27;
    // inline leaf 0x802443AC (7 guest instruction(s))
}

loc_inl0_0x802443AC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(127));
}

loc_inl0_0x802443B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl0_0x802443C0;
    }
}

loc_inl0_0x802443B4:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_802443AC;
}

loc_inl0_0x802443C0:
{
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r4));
}

loc_inl0_cont_802443AC:
{
    // end of inlined leaf 0x802443AC
    goto loc_8055D9DC;
}

loc_8055D978:
{
    r31 = r3;
    r30 = 0;
}

loc_8055D980:
{
    r29 = MemoryInline::FlatRead32((r31 + 20));
    r28 = 0;
    goto loc_8055D9AC;
}

loc_8055D98C:
{
    r3 = r29;
    r4 = (r28 & 65535);
    ctx->lr = 0x8055D998u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023112Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r4 = r27;
    r3 = (r1 + 12);
    // inline leaf 0x80050BB0 (10 guest instruction(s))
}

loc_inl1_0x80050BB0:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x80050BB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80050BBC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(127));
}

loc_inl1_0x80050BC0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl1_0x80050BD0;
    }
}

loc_inl1_0x80050BC4:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80050BB0;
}

loc_inl1_0x80050BD0:
{
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    goto loc_inl1_cont_80050BB0;
}

loc_inl1_return:
{
}

loc_inl1_cont_80050BB0:
{
    // end of inlined leaf 0x80050BB0
    r28 = (r28 + 1);
}

loc_8055D9AC:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80230FD4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004EA50u) && KnownTranslatedCpuCall<0x8004EA50u>::kAvailable && !KnownTranslatedCpuCall<0x8004EA50u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004EA50u>()) {
        const auto state_free_result_8004EA50_13D4 = func_8004EA50_statefree_v1(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8004EA50_13D4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004EA50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r28 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8055D9C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8055D98C;
    }
}

loc_8055D9CC:
{
    r30 = (r30 + 1);
    r31 = (r31 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_8055D9D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8055D980;
    }
}

loc_8055D9DC:
{
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800007B gpr_write=0xF800007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055D920 func_8055D920 preserves=true fpr_mask=0x00000000
