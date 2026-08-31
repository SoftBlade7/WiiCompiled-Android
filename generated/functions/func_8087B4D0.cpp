#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80538344_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_8087B4D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8087B4D0;

loc_8087B4D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80880000u;
    r5 = 0x80880000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r4 + -17888);
    r5 = (r5 + -17884);
    r6 = 20;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r7 = 255;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = (r3 + 2816);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    ctx->lr = 0x8087B510u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r5 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    r0 = MemoryInline::FlatRead8((r3 + 36));
    MemoryInline::FlatWrite8((r29 + 7916), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 37));
    MemoryInline::FlatWrite8((r29 + 8100), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r4 = MemoryInline::FlatRead32((r3 + 2928));
    MemoryInline::FlatWrite32((r29 + 17272), r4);
}

loc_8087B540:
{
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r31 = MemoryInline::FlatRead32((r3 + 2920));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_8087B558;
    }
}

loc_8087B54C:
{
    r0 = (r4 + -9);
}

loc_8087B554:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8087B6B0;
    }
}

loc_8087B558:
{
    r0 = 3;
    r6 = 75;
    r5 = 10;
    r4 = 50;
    guest_range_4 = MemoryInline::ResolveRangeHost((r29 + 1), 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r29 + 1), static_cast<uint8_t>(r6));
    r3 = 0x809C0000u;
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r29 + 2), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r29 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r29 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 9u, (r29 + 10), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r29 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r29 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r29 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r29 + 8), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r30 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8087B59C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087B6E8;
    }
}

loc_8087B5A0:
{
    r28 = MemoryInline::FlatRead8((r29 + 7916));
    r3 = r30;
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80538344u) && KnownTranslatedCpuCall<0x80538344u>::kAvailable && !KnownTranslatedCpuCall<0x80538344u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80538344u>()) {
        const auto state_free_result_80538344_148E = func_80538344_statefree(r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80538344_148E[0]);
        cr = static_cast<uint32_t>(state_free_result_80538344_148E[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80538344u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r28 + -2);
    r4 = (r3 * 22);
    r5 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r28 = MemoryInline::FlatRead8((r29 + 7916));
    r3 = r30;
    r4 = (r5 + r4);
    r5 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r5 + 1136));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = r31;
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80538344u) && KnownTranslatedCpuCall<0x80538344u>::kAvailable && !KnownTranslatedCpuCall<0x80538344u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80538344u>()) {
        const auto state_free_result_80538344_1BF6 = func_80538344_statefree(r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80538344_1BF6[0]);
        cr = static_cast<uint32_t>(state_free_result_80538344_1BF6[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80538344u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r28 + -2);
    r4 = (r3 * 22);
    r5 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r28 = MemoryInline::FlatRead8((r29 + 7916));
    r3 = r30;
    r4 = (r5 + r4);
    r5 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r5 + 916));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = r31;
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80538344u) && KnownTranslatedCpuCall<0x80538344u>::kAvailable && !KnownTranslatedCpuCall<0x80538344u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80538344u>()) {
        const auto state_free_result_80538344_235D = func_80538344_statefree(r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80538344_235D[0]);
        cr = static_cast<uint32_t>(state_free_result_80538344_235D[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80538344u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r28 + -2);
    r4 = (r3 * 22);
    r5 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r28 = MemoryInline::FlatRead8((r29 + 7916));
    r3 = r30;
    r4 = (r5 + r4);
    r5 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r5 + 1576));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = r31;
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80538344u) && KnownTranslatedCpuCall<0x80538344u>::kAvailable && !KnownTranslatedCpuCall<0x80538344u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80538344u>()) {
        const auto state_free_result_80538344_2AC5 = func_80538344_statefree(r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80538344_2AC5[0]);
        cr = static_cast<uint32_t>(state_free_result_80538344_2AC5[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80538344u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r28 + -2);
    r3 = (r3 * 22);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r4 + r3);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 1356));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r29 + 3), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 1814));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 1810));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 1812));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r29 + 7), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 1812));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 1812));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r0));
    goto loc_8087B6E8;
}

loc_8087B6B0:
{
    r0 = 3;
    r5 = 0;
    r6 = 100;
    r4 = 5;
    r3 = 50;
    guest_range_5 = MemoryInline::ResolveRangeHost((r29 + 1), 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r29 + 1), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r29 + 2), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r29 + 4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r29 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 9u, (r29 + 10), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r29 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r29 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_5, 8u, (r29 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r29 + 8), static_cast<uint8_t>(r0));
}

loc_8087B6E8:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_8087B6FC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_8087B70C;
    }
}

loc_8087B700:
{
}

loc_8087B704:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_8087B70C;
    }
}

loc_8087B708:
{
    r3 = 1;
}

loc_8087B70C:
{
}

loc_8087B710:
{
    MemoryInline::FlatWrite8((r29 + 17277), static_cast<uint8_t>(r3));
    r4 = 100;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8087B720;
    }
}

loc_8087B71C:
{
    r4 = 3;
}

loc_8087B720:
{
    r0 = MemoryInline::FlatRead8((r29 + 17277));
    r3 = -1;
    MemoryInline::FlatWrite8((r29 + 17248), static_cast<uint8_t>(r4));
}

loc_8087B730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087B73C;
    }
}

loc_8087B734:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_8087B73C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 8432), r3);
    r6 = 0;
    r5 = 0x809C0000u;
    MemoryInline::FlatWrite8((r29 + 7917), static_cast<uint8_t>(r0));
    goto loc_8087B79C;
}

loc_8087B754:
{
    r3 = (r6 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 17277));
    r3 = (r3 * 240);
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087B768:
{
    r3 = (r4 + r3);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_7 & 134217727);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087B784;
    }
}

loc_8087B77C:
{
}

loc_8087B780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087B798;
    }
}

loc_8087B784:
{
    r4 = MemoryInline::FlatRead8((r29 + 7917));
    r3 = (r29 + r4);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 7918), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r29 + 7917), static_cast<uint8_t>(r0));
}

loc_8087B798:
{
    r6 = (r6 + 1);
}

loc_8087B79C:
{
    r0 = MemoryInline::FlatRead8((r29 + 7916));
    r3 = (r6 & 255);
}

loc_8087B7A8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087B754;
    }
}

loc_8087B7AC:
{
    r0 = MemoryInline::FlatRead8((r29 + 7917));
    r5 = 0;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_8 & 134217727);
    MemoryInline::FlatWrite8((r29 + 17278), static_cast<uint8_t>(r0));
    goto loc_8087B7D8;
}

loc_8087B7C4:
{
    r0 = (r5 & 255);
    r4 = MemoryInline::FlatRead8((r29 + 7917));
    r3 = (r29 + r0);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 7930), static_cast<uint8_t>(r4));
}

loc_8087B7D8:
{
    r0 = MemoryInline::FlatRead8((r29 + 7916));
    r3 = (r5 & 255);
}

loc_8087B7E4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087B7C4;
    }
}

loc_8087B7E8:
{
    r4 = 0;
    goto loc_8087B808;
}

loc_8087B7F0:
{
    r0 = (r4 & 255);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 7918));
    r3 = (r29 + r0);
    MemoryInline::FlatWrite8((r3 + 7930), static_cast<uint8_t>(r4));
    r4 = (r4 + 1);
}

loc_8087B808:
{
    r5 = MemoryInline::FlatRead8((r29 + 7917));
    r0 = (r4 & 255);
}

loc_8087B814:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_8087B7F0;
    }
}

loc_8087B818:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r29 + 17278));
    r4 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = 2;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087B82C:
{
    r4 = MemoryInline::FlatRead32((r4 + 2932));
    r4 = (r4 + -2);
    r0 = (2 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(2) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = (r3 | ~r4);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_9 & 2147483647);
    r0 = (r3 - r0);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 1);
    MemoryInline::FlatWrite8((r29 + 17279), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087B884;
    }
}

loc_8087B850:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 8456), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    goto loc_8087B878;
}

loc_8087B860:
{
    r3 = MemoryInline::FlatRead8((r29 + 7917));
    r4 = MemoryInline::FlatRead8((r29 + 8456));
    r0 = (r3 + 1);
    r5 = (r5 * r0);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r29 + 8456), static_cast<uint8_t>(r0));
}

loc_8087B878:
{
}

loc_8087B87C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(256))) {
        goto loc_8087B860;
    }
}

loc_8087B880:
{
    goto loc_8087B88C;
}

loc_8087B884:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r29 + 8456), static_cast<uint8_t>(r0));
}

loc_8087B88C:
{
    r0 = MemoryInline::FlatRead8((r29 + 17277));
    r3 = 256;
}

loc_8087B898:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087B8A0;
    }
}

loc_8087B89C:
{
    r3 = 40;
}

loc_8087B8A0:
{
    r0 = 3;
    r4 = 0;
    MemoryInline::FlatWrite32((r29 + 8380), r3);
    r6 = 0;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r29 + 2812), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r29 + 17276), static_cast<uint8_t>(r4));
    ctr = r0;
}

loc_8087B8C0:
{
    r0 = (r6 & 255);
    r6 = (r6 + 8);
    r3 = (r0 * 28);
    r0 = (r6 & 255);
    r6 = (r6 + 8);
    r5 = (r29 + r3);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 12), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r5 + 12), r4);
    r3 = (r0 * 28);
    r0 = (r6 & 255);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 40), r4);
    r6 = (r6 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r5 + 68), r4);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r5 + 96), r4);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r5 + 124), r4);
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r5 + 152), r4);
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r5 + 180), r4);
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r5 + 208), r4);
    r5 = (r29 + r3);
    r3 = (r0 * 28);
    r0 = (r6 & 255);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 12), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r5 + 12), r4);
    r6 = (r6 + 8);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 40), r4);
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r5 + 68), r4);
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r5 + 96), r4);
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r5 + 124), r4);
    MemoryInline::WriteResolved32(guest_range_1, 140u, (r5 + 152), r4);
    MemoryInline::WriteResolved32(guest_range_1, 168u, (r5 + 180), r4);
    MemoryInline::WriteResolved32(guest_range_1, 196u, (r5 + 208), r4);
    r5 = (r29 + r3);
    r3 = (r0 * 28);
    r0 = (r6 & 255);
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 12), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r5 + 12), r4);
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r5 + 40), r4);
    MemoryInline::WriteResolved32(guest_range_2, 56u, (r5 + 68), r4);
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r5 + 96), r4);
    MemoryInline::WriteResolved32(guest_range_2, 112u, (r5 + 124), r4);
    MemoryInline::WriteResolved32(guest_range_2, 140u, (r5 + 152), r4);
    MemoryInline::WriteResolved32(guest_range_2, 168u, (r5 + 180), r4);
    MemoryInline::WriteResolved32(guest_range_2, 196u, (r5 + 208), r4);
    r5 = (r29 + r3);
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 12), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r5 + 12), r4);
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r5 + 40), r4);
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r5 + 68), r4);
    MemoryInline::WriteResolved32(guest_range_3, 84u, (r5 + 96), r4);
    MemoryInline::WriteResolved32(guest_range_3, 112u, (r5 + 124), r4);
    MemoryInline::WriteResolved32(guest_range_3, 140u, (r5 + 152), r4);
    MemoryInline::WriteResolved32(guest_range_3, 168u, (r5 + 180), r4);
    MemoryInline::WriteResolved32(guest_range_3, 196u, (r5 + 208), r4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087B8C0;
    }
}

loc_8087B988:
{
    r0 = (r0 * 28);
    r4 = 0;
    r5 = 0;
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite32((r3 + 40), r4);
    MemoryInline::FlatWrite32((r3 + 68), r4);
    MemoryInline::FlatWrite32((r3 + 96), r4);
    goto loc_8087B9BC;
}

loc_8087B9AC:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & 1020);
    r5 = (r5 + 1);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 8052), r4);
}

loc_8087B9BC:
{
    r0 = MemoryInline::FlatRead8((r29 + 7916));
    r3 = (r5 & 255);
}

loc_8087B9C8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087B9AC;
    }
}

loc_8087B9CC:
{
    r5 = 0;
    r4 = 0;
    goto loc_8087B9E8;
}

loc_8087B9D8:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & 1020);
    r5 = (r5 + 1);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 8104), r4);
}

loc_8087B9E8:
{
    r0 = MemoryInline::FlatRead8((r29 + 8100));
    r3 = (r5 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8087B9F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087B9D8;
    }
}

loc_8087B9FC:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = r29;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF7F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8087B4D0 func_8087B4D0 preserves=true fpr_mask=0x00000000
