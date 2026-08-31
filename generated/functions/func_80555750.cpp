#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_8055F2C4_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8055F2C4_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_80555750(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80555750;

loc_80555750:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + 17592);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 58u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r4);
    r4 = 16;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r31);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r31);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r31);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 56u, (r3 + 56), static_cast<uint16_t>(r31));
    r3 = (r3 + 4);
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r3 = (r30 + 16);
    r4 = 16;
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r3 = MemoryInline::FlatRead32((r30 + 28));
    // inline leaf 0x8055F2C4 (14 guest instruction(s))
}

loc_inl2_0x8055F2C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x8055F2D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x8055F2E0;
    }
}

loc_inl2_0x8055F2D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl2_0x8055F2D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x8055F2EC;
    }
}

loc_inl2_0x8055F2DC:
{
    goto loc_inl2_cont_8055F2C4;
}

loc_inl2_0x8055F2E0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6224));
    goto loc_inl2_cont_8055F2C4;
}

loc_inl2_0x8055F2EC:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 6224);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_8055F2C4:
{
    // end of inlined leaf 0x8055F2C4
    r4 = r3;
    r3 = 20;
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r5 = 4;
    ctx->lr = 0x805557D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229E04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 36), r3);
    r3 = MemoryInline::FlatRead32((r30 + 28));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8055F2C4u) && KnownTranslatedCpuCall<0x8055F2C4u>::kAvailable && !KnownTranslatedCpuCall<0x8055F2C4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8055F2C4u>()) {
        const auto state_free_result_8055F2C4_16F3 = func_8055F2C4_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_8055F2C4_16F3[0]);
        cr = static_cast<uint32_t>(state_free_result_8055F2C4_16F3[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8055F2C4u>(ctx);
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
    r4 = r3;
    r3 = 20;
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r5 = 4;
    ctx->lr = 0x805557F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229E04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 40), r3);
    MemoryInline::FlatWriteRam32(r3, r31);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r30 + 36));
    MemoryInline::FlatWrite32(r4, r31);
    r4 = MemoryInline::FlatRead32((r30 + 40));
    MemoryInline::FlatWrite32((r4 + 4), r31);
    r4 = MemoryInline::FlatRead32((r30 + 36));
    MemoryInline::FlatWrite32((r4 + 4), r31);
    r4 = MemoryInline::FlatRead32((r30 + 40));
    MemoryInline::FlatWrite32((r4 + 8), r31);
    r4 = MemoryInline::FlatRead32((r30 + 36));
    MemoryInline::FlatWrite32((r4 + 8), r31);
    r4 = MemoryInline::FlatRead32((r30 + 40));
    MemoryInline::FlatWrite32((r4 + 12), r31);
    r4 = MemoryInline::FlatRead32((r30 + 36));
    MemoryInline::FlatWrite32((r4 + 12), r31);
    r4 = MemoryInline::FlatRead32((r30 + 40));
    MemoryInline::FlatWrite32((r4 + 16), r31);
    r4 = MemoryInline::FlatRead32((r30 + 36));
    MemoryInline::FlatWrite32((r4 + 16), r31);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80555750 func_80555750 preserves=true fpr_mask=0x00000000
