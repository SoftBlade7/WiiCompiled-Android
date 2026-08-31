#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_805CA250(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805CA250;

loc_805CA250:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -432), 0, 440u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -432), r1);
    r1 = (r1 + -432);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 436u, (r1 + 436), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 408u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 408u, (r1 + 408), r26);
        MemoryInline::WriteResolved32(guest_range_0, 412u, (r1 + 412), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 416u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 416u, (r1 + 416), r28);
        MemoryInline::WriteResolved32(guest_range_0, 420u, (r1 + 420), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 424u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 424u, (r1 + 424), r30);
        MemoryInline::WriteResolved32(guest_range_0, 428u, (r1 + 428), r31);
    }
    r31 = r3;
    r26 = MemoryInline::FlatRead32((r3 + 480));
}

loc_805CA26C:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(0))) {
        goto loc_805CA36C;
    }
}

loc_805CA270:
{
    r28 = (r26 * 376);
    r30 = -1;
    goto loc_805CA2DC;
}

loc_805CA27C:
{
    r4 = MemoryInline::FlatRead32((r31 + 624));
    r3 = (r4 + r28);
    r27 = MemoryInline::FlatRead32((r3 + 372));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805CA28C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CA2C0;
    }
}

loc_805CA290:
{
    r0 = (r26 + -1);
    r3 = (r1 + 204);
    r0 = (r0 * 376);
    r29 = (r4 + r0);
    MemoryInline::FlatWrite32((r29 + 372), r27);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_BDE = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_BDE[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_BDE[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWriteRam32((r1 + 204), r27);
    r3 = r29;
    r5 = (r1 + 204);
    r4 = 5105;
    ctx->lr = 0x805CA2BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805CA2D4;
}

loc_805CA2C0:
{
    r0 = (r26 + -1);
    r0 = (r0 * 376);
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 372), r30);
    ctx->lr = 0x805CA2D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DFC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805CA2D4:
{
    r28 = (r28 + 376);
    r26 = (r26 + 1);
}

loc_805CA2DC:
{
    r3 = MemoryInline::FlatRead32((r31 + 476));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r3));
}

loc_805CA2E4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CA27C;
    }
}

loc_805CA2E8:
{
    r0 = (r3 + -1);
    r4 = MemoryInline::FlatRead32((r31 + 624));
    r3 = (r0 * 376);
    r0 = -1;
    r3 = (r4 + r3);
    MemoryInline::FlatWrite32((r3 + 372), r0);
    ctx->lr = 0x805CA304u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DFC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 480));
    r30 = 0x80890000u;
    r30 = (r30 + 14560);
    r3 = MemoryInline::FlatRead32((r31 + 624));
    r0 = (r0 * 376);
    r4 = (r30 + 94);
    r3 = (r3 + r0);
    r3 = (r3 + 168);
    ctx->lr = 0x805CA328u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E8368u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r4 = (r30 + 103);
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r31 + 480));
    r3 = MemoryInline::FlatRead32((r31 + 624));
    r0 = (r5 + -1);
    MemoryInline::FlatWrite32((r31 + 480), r0);
    r0 = (r0 * 376);
    r3 = (r3 + r0);
    r3 = (r3 + 168);
    ctx->lr = 0x805CA358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E8368u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 187), static_cast<uint8_t>(r0));
    goto loc_805CA414;
}

loc_805CA36C:
{
    r3 = MemoryInline::FlatRead32((r3 + 624));
    r0 = MemoryInline::FlatRead32((r3 + 372));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805CA378:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CA414;
    }
}

loc_805CA37C:
{
    r26 = 1;
    r28 = 376;
    r30 = -1;
    goto loc_805CA3EC;
}

loc_805CA38C:
{
    r4 = MemoryInline::FlatRead32((r31 + 624));
    r3 = (r4 + r28);
    r27 = MemoryInline::FlatRead32((r3 + 372));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_805CA39C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CA3D0;
    }
}

loc_805CA3A0:
{
    r0 = (r26 + -1);
    r3 = (r1 + 8);
    r0 = (r0 * 376);
    r29 = (r4 + r0);
    MemoryInline::FlatWrite32((r29 + 372), r27);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_2724 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_2724[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_2724[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r27);
    r3 = r29;
    r5 = (r1 + 8);
    r4 = 5105;
    ctx->lr = 0x805CA3CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805CA3E4;
}

loc_805CA3D0:
{
    r0 = (r26 + -1);
    r0 = (r0 * 376);
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 372), r30);
    ctx->lr = 0x805CA3E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DFC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805CA3E4:
{
    r28 = (r28 + 376);
    r26 = (r26 + 1);
}

loc_805CA3EC:
{
    r3 = MemoryInline::FlatRead32((r31 + 476));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r3));
}

loc_805CA3F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CA38C;
    }
}

loc_805CA3F8:
{
    r0 = (r3 + -1);
    r4 = MemoryInline::FlatRead32((r31 + 624));
    r3 = (r0 * 376);
    r0 = -1;
    r3 = (r4 + r3);
    MemoryInline::FlatWrite32((r3 + 372), r0);
    ctx->lr = 0x805CA414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DFC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805CA414:
{
    r3 = r31;
    r4 = 24;
    r5 = -1;
    ctx->lr = 0x805CA424u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063D74Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r26 = MemoryInline::FlatRead32((r1 + 408));
    r27 = MemoryInline::FlatRead32((r1 + 412));
    r28 = MemoryInline::FlatRead32((r1 + 416));
    r29 = MemoryInline::FlatRead32((r1 + 420));
    r30 = MemoryInline::FlatRead32((r1 + 424));
    r31 = MemoryInline::FlatRead32((r1 + 428));
    r0 = MemoryInline::FlatRead32((r1 + 436));
    ctx->lr = r0;
    r1 = (r1 + 432);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805CA250 func_805CA250 preserves=true fpr_mask=0x00000000
