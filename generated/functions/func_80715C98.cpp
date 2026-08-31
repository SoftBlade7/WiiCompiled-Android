#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80631EF8_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_80715C98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80715C98;

loc_80715C98:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = 0x808A0000u;
    r29 = (r29 + 7968);
    r4 = MemoryInline::FlatRead32((r4 + 9000));
    r0 = MemoryInline::FlatRead8((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80715CC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80715D88;
    }
}

loc_80715CCC:
{
    f5.d = MemoryInline::FlatReadFloat32((r29 + 36));
    r30 = 5;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    r31 = 0;
    f4.d = MemoryInline::FlatReadFloat32((r29 + 40));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 48));
    f0.d = MemoryInline::FlatReadFloat32(r29);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r1 + 8), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r1 + 12), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 16), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 20), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 24), f1.d);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 28), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 32), f5.d);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 36), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r1 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r1 + 44), f1.d);
    }
    r3 = MemoryInline::FlatRead32((r3 + 16));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80631EF8u) && KnownTranslatedCpuCall<0x80631EF8u>::kAvailable && !KnownTranslatedCpuCall<0x80631EF8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631EF8u>()) {
        const auto state_free_result_80631EF8_FF7 = func_80631EF8_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631EF8_FF7[0]);
        cr = static_cast<uint32_t>(state_free_result_80631EF8_FF7[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80631EF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80715D24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80715D70;
    }
}

loc_80715D28:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_80715D2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80715D78;
    }
}

loc_80715D30:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 52));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 56));
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r30);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 32), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 8), f4.d);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 12), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 16), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 20), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 40), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 44), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 24), f0.d);
    goto loc_80715D78;
}

loc_80715D70:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 60));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
}

loc_80715D78:
{
    r3 = 0x809C0000u;
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 9048));
    ctx->lr = 0x80715D88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FE8ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80715D88:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF9F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80715C98 func_80715C98 preserves=true fpr_mask=0x00000000
