#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F5220(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
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
    uint32_t xer = ctx->xer;

    goto loc_801F5220;

loc_801F5220:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    r0 = 0;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r23 = r4;
    MemoryInline::FlatWrite32(r8, r0);
    r22 = r3;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    ctx->lr = 0x801F5268u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    InvokeDirectCpu<0x801F071Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F526C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5274;
    }
}

loc_801F5270:
{
    goto loc_801F545C;
}

loc_801F5274:
{
    r31 = MemoryInline::FlatRead32(r27);
    r29 = 0;
    r28 = r31;
    r30 = (r25 + r31);
}

loc_801F5284:
{
}

loc_801F5288:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801F5294;
    }
}

loc_801F528C:
{
    r29 = MemoryInline::FlatRead32(r23);
    goto loc_801F52D0;
}

loc_801F5294:
{
    r29 = MemoryInline::FlatRead32((r29 + 32));
    r0 = MemoryInline::FlatRead32(r23);
}

loc_801F52A0:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_801F52D0;
    }
}

loc_801F52A4:
{
    r29 = 0;
    goto loc_801F52E0;
}

loc_801F52B0:
{
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r3 + 65536);
}

loc_801F52BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801F52CC;
    }
}

loc_801F52C0:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32((r29 + 8), r0);
    goto loc_801F52E0;
}

loc_801F52CC:
{
    r29 = MemoryInline::FlatRead32((r29 + 32));
}

loc_801F52D0:
{
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 & 1);
}

loc_801F52D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F52B0;
    }
}

loc_801F52DC:
{
    r29 = 0;
}

loc_801F52E0:
{
}

loc_801F52E4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801F5424;
    }
}

loc_801F52E8:
{
    r7 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r7 + 65536);
}

loc_801F52F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_801F5424;
    }
}

loc_801F52F8:
{
}

loc_801F52FC:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(r25))) {
        goto loc_801F5338;
    }
}

loc_801F5300:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r0 = (r7 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_801F530C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801F5338;
    }
}

loc_801F5310:
{
    r5 = MemoryInline::FlatRead8((r22 + 32));
    r0 = (r25 - r7);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = r24;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r5));
    r4 = (r4 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r28 = (r28 - r31);
    goto loc_801F5424;
}

loc_801F5338:
{
}

loc_801F533C:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r25))) {
        goto loc_801F5378;
    }
}

loc_801F5340:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r0 = (r7 + r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_801F534C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801F5378;
    }
}

loc_801F5350:
{
    r5 = MemoryInline::FlatRead8((r22 + 32));
    r0 = (r7 - r25);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r3 = (r24 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r28 = (r28 - r0);
    goto loc_801F5424;
}

loc_801F5378:
{
}

loc_801F537C:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r25))) {
        goto loc_801F53CC;
    }
}

loc_801F5380:
{
}

loc_801F5384:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r30))) {
        goto loc_801F53CC;
    }
}

loc_801F5388:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r0 = (r7 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_801F5394:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801F53CC;
    }
}

loc_801F5398:
{
    r5 = MemoryInline::FlatRead8((r22 + 32));
    r0 = (r7 - r25);
    r21 = (r31 + r25);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = (r21 - r7);
    r3 = (r24 + r3);
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r21 - r0);
    r28 = (r28 - r0);
    goto loc_801F5424;
}

loc_801F53CC:
{
}

loc_801F53D0:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r25))) {
        goto loc_801F5424;
    }
}

loc_801F53D4:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r3 = (r7 + r0);
}

loc_801F53E0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r25))) {
        goto loc_801F5424;
    }
}

loc_801F53E4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r30));
}

loc_801F53E8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801F5424;
    }
}

loc_801F53EC:
{
    r6 = MemoryInline::FlatRead8((r22 + 32));
    r3 = (r25 - r7);
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r0 - r3);
    r4 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r6));
    r3 = r24;
    r4 = (r5 + r4);
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r3 = (r25 - r3);
    r0 = (r0 - r3);
    r28 = (r28 - r0);
}

loc_801F5424:
{
}

loc_801F5428:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801F5434;
    }
}

loc_801F542C:
{
}

loc_801F5430:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_801F5284;
    }
}

loc_801F5434:
{
    r0 = MemoryInline::FlatRead32(r27);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_801F543C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5458;
    }
}

loc_801F5440:
{
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r0 = (r25 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801F544C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5458;
    }
}

loc_801F5450:
{
    r3 = 17;
    goto loc_801F545C;
}

loc_801F5458:
{
    r3 = 0;
}

loc_801F545C:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F5220 func_801F5220 preserves=true fpr_mask=0x00000000
