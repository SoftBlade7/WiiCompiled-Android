#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_80644430(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80644430;

loc_80644430:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -256), 0, 264u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r1 + 260), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r1 + 220), r23);
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r1 + 224), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 228u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r1 + 228), r25);
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r1 + 232), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r1 + 236), r27);
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r1 + 240), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r1 + 244), r29);
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r1 + 248), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 252u, (r1 + 252), r31);
    r25 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r31 = MemoryInline::FlatRead32((r3 + 584));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80644458:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80644464;
    }
}

loc_8064445C:
{
    r31 = 0;
    goto loc_806444B8;
}

loc_80644464:
{
    r23 = 0x809C0000u;
    r23 = (r23 + 7968);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806444B4;
    }
}

loc_80644470:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80644484u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8064449C;
}

loc_80644488:
{
}

loc_8064448C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r23))) {
        goto loc_80644498;
    }
}

loc_80644490:
{
    r0 = 1;
    goto loc_806444A8;
}

loc_80644498:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8064449C:
{
}

loc_806444A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80644488;
    }
}

loc_806444A4:
{
    r0 = 0;
}

loc_806444A8:
{
}

loc_806444AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806444B4;
    }
}

loc_806444B0:
{
    goto loc_806444B8;
}

loc_806444B4:
{
    r31 = 0;
}

loc_806444B8:
{
    r30 = r25;
    r29 = r31;
    r28 = 0;
    r27 = 0;
    r26 = 0;
    r23 = 0x809C0000u;
    r24 = 1;
}

loc_806444D4:
{
}

loc_806444D8:
{
    r3 = 0;
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(0))) {
        goto loc_806444F0;
    }
}

loc_806444E0:
{
    r0 = MemoryInline::FlatRead32((r31 + 644));
}

loc_806444E8:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r0))) {
        goto loc_806444F0;
    }
}

loc_806444EC:
{
    r3 = 1;
}

loc_806444F0:
{
}

loc_806444F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8064455C;
    }
}

loc_806444F8:
{
    r0 = MemoryInline::FlatRead32((r30 + 5736));
}

loc_80644500:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80644534;
    }
}

loc_80644504:
{
    r0 = (r0 * 376);
    r4 = 1;
    r3 = (r25 + r0);
    r3 = (r3 + 1376);
    // inline leaf 0x8063C830 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C830
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_80644520:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8064452C;
    }
}

loc_80644524:
{
    r28 = (r28 + 1);
    goto loc_8064455C;
}

loc_8064452C:
{
    r27 = (r27 + 1);
    goto loc_8064455C;
}

loc_80644534:
{
    r5 = MemoryInline::FlatRead32((r23 + 8408));
    r3 = MemoryInline::FlatRead8((r29 + 500));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r4 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r3));
    r0 = (r0 * 88);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8064455C;
    }
}

loc_80644558:
{
    r27 = (r27 + 1);
}

loc_8064455C:
{
    r26 = (r26 + 1);
    r29 = (r29 + 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(12));
}

loc_80644568:
{
    r30 = (r30 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806444D4;
    }
}

loc_80644570:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_1D2B = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_1D2B[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_1D2B[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r28 + r27);
    MemoryInline::FlatWriteRam32((r1 + 8), r28);
    r3 = (r25 + 852);
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 2009;
    ctx->lr = 0x80644594u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 220), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 220));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 224));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 228));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 232));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 236));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 240));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 244));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 248));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 252));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80644430 func_80644430 preserves=true fpr_mask=0x00000000
