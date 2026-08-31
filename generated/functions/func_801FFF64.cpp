#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801F6390_statefree(uint32_t);

extern "C" void func_801FFF64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_801FFF64;

loc_801FFF64:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r0 = 0;
    r25 = r6;
    MemoryInline::FlatWrite32(r6, r0);
    r22 = r3;
    r23 = r4;
    r24 = r5;
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r6 = (-1 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_801FFF9C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5))) {
        goto loc_801FFFC4;
    }
}

loc_801FFFA0:
{
    r4 = 0x80360000u;
    r0 = 37;
    r4 = (r4 + -20912);
    r24 = r6;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r4 + 6228), r0);
    MemoryInline::FlatWrite32((r3 + 28), r0);
}

loc_801FFFC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FFFC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FFFD4;
    }
}

loc_801FFFCC:
{
    r29 = 0;
    goto loc_801FFFDC;
}

loc_801FFFD4:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r29 = MemoryInline::FlatRead32((r3 + 612));
}

loc_801FFFDC:
{
    r3 = r22;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x801F6390u) && KnownTranslatedCpuCall<0x801F6390u>::kAvailable && !KnownTranslatedCpuCall<0x801F6390u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801F6390u>()) {
        const auto state_free_result_801F6390_1223 = func_801F6390_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_801F6390_1223);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x801F6390u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
    }
    r3 = r29;
    r4 = r22;
    r5 = r23;
    r6 = r24;
    r7 = (r1 + 24);
    ctx->lr = 0x801FFFFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x801FF7C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
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
    r4 = MemoryInline::FlatRead32(r25);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80200004:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r25, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200018;
    }
}

loc_80200014:
{
    goto loc_802002EC;
}

loc_80200018:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r24));
}

loc_80200020:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8020002C;
    }
}

loc_80200024:
{
    r3 = 0;
    goto loc_802002EC;
}

loc_8020002C:
{
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r24 = (r24 - r0);
    r0 = MemoryInline::FlatRead32((r22 + 32));
    r5 = (r1 + 20);
    r3 = (r3 + 4);
    r4 = (r0 + r24);
    ctx->lr = 0x80200048u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x801FC58Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
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

loc_8020004C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200054;
    }
}

loc_80200050:
{
    goto loc_802002EC;
}

loc_80200054:
{
    r4 = MemoryInline::FlatRead8((r29 + 32));
    r3 = MemoryInline::FlatRead8((r29 + 33));
    r0 = MemoryInline::FlatRead32((r22 + 32));
    r3 = (r4 + r3);
    r5 = MemoryInline::FlatRead32((r1 + 20));
    r4 = (r0 + r24);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_80200074:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_80200084;
    }
}

loc_80200078:
{
    r26 = (r4 - r0);
    r27 = (r24 - r26);
    goto loc_802000D4;
}

loc_80200084:
{
    r27 = r24;
    r26 = 0;
    goto loc_802000D4;
}

loc_80200090:
{
    r0 = MemoryInline::FlatRead32(r25);
    r3 = r29;
    r4 = r22;
    r6 = r27;
    r5 = (r23 + r0);
    r7 = (r1 + 24);
    ctx->lr = 0x802000ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x801FFCF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
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
    r4 = MemoryInline::FlatRead32(r25);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802000B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r25, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802000C8;
    }
}

loc_802000C4:
{
    goto loc_802002EC;
}

loc_802000C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r27 = (r27 - r0);
    r24 = (r24 - r0);
}

loc_802000D4:
{
}

loc_802000D8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_802000E8;
    }
}

loc_802000DC:
{
    r0 = MemoryInline::FlatRead16(r29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
}

loc_802000E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80200090;
    }
}

loc_802000E8:
{
    r30 = 0;
    r31 = -1;
    goto loc_80200298;
}

loc_802000F4:
{
    r0 = MemoryInline::FlatRead32(r25);
    r3 = r22;
    r4 = r26;
    r5 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r28 = (r23 + r0);
    r6 = (r1 + 8);
    r27 = 0;
    ctx->lr = 0x80200118u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x801F63A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
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
}

loc_8020011C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80200124;
    }
}

loc_80200120:
{
    goto loc_80200260;
}

loc_80200124:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r22 + 36), r5);
    r6 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80200134:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200140;
    }
}

loc_80200138:
{
    r3 = 0;
    goto loc_80200260;
}

loc_80200140:
{
    r4 = MemoryInline::FlatRead32((r22 + 8));
    r27 = r6;
    r8 = MemoryInline::FlatRead32((r22 + 32));
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r4 + 608));
    r9 = 1;
    r7 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r0 - r8);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4 = (r28 + r7);
    r7 = (r1 + 16);
    r28 = 0;
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r8 = (r8_rot_2 & 134217727);
    ctx->lr = 0x80200178u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8020551Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
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
}

loc_8020017C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80200190;
    }
}

loc_80200180:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_80200188:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80200190;
    }
}

loc_8020018C:
{
    goto loc_80200244;
}

loc_80200190:
{
}

loc_80200194:
{
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r5 = MemoryInline::FlatRead32((r22 + 36));
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_802001A8;
    }
}

loc_802001A0:
{
    r4 = 0;
    goto loc_802001B0;
}

loc_802001A8:
{
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_802001B0:
{
    r0 = MemoryInline::FlatRead16((r22 + 44));
    r3 = MemoryInline::FlatRead16(r4);
    r6 = (r0 + r28);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r0 = (r3 + -1);
    r0 = (r0 & r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
    r4 = (r5 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802001DC;
    }
}

loc_802001D4:
{
    MemoryInline::FlatWrite32((r22 + 36), r4);
    goto loc_802001E0;
}

loc_802001DC:
{
    MemoryInline::FlatWrite32((r22 + 36), r31);
}

loc_802001E0:
{
    r0 = MemoryInline::FlatRead32((r22 + 32));
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r5 = (r0 + r28);
    MemoryInline::FlatWrite32((r22 + 32), r5);
    r0 = MemoryInline::FlatRead32((r3 + 608));
}

loc_802001F8:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_80200200;
    }
}

loc_802001FC:
{
    MemoryInline::FlatWrite32((r3 + 608), r5);
}

loc_80200200:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_80200204:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200210;
    }
}

loc_80200208:
{
    r5 = 0;
    goto loc_80200218;
}

loc_80200210:
{
    r3 = MemoryInline::FlatRead32((r22 + 8));
    r5 = MemoryInline::FlatRead32((r3 + 612));
}

loc_80200218:
{
    r6 = MemoryInline::FlatRead32((r22 + 32));
    r3 = r22;
    r0 = MemoryInline::FlatRead8((r5 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r22 + 40), r0);
    r5 = MemoryInline::FlatRead16(r5);
    r0 = (r5 + -1);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite16((r22 + 44), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F62D4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = 0;
}

loc_80200244:
{
    r4 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r4 = (r4 + r28);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    r3 = (r3 & r0);
}

loc_80200260:
{
    r4 = MemoryInline::FlatRead32(r25);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80200268:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r25, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020027C;
    }
}

loc_80200278:
{
    goto loc_802002EC;
}

loc_8020027C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80200280:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020028C;
    }
}

loc_80200284:
{
    r3 = 0;
    goto loc_802002EC;
}

loc_8020028C:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r26 = (r26 - r27);
    r24 = (r24 - r0);
}

loc_80200298:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_8020029C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802002AC;
    }
}

loc_802002A0:
{
    r0 = MemoryInline::FlatRead16(r29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(r0));
}

loc_802002A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802000F4;
    }
}

loc_802002AC:
{
    r0 = MemoryInline::FlatRead32(r25);
    r3 = r29;
    r4 = r22;
    r6 = r24;
    r7 = r26;
    r5 = (r23 + r0);
    r8 = (r1 + 24);
    ctx->lr = 0x802002CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x801FFA1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
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
    r4 = MemoryInline::FlatRead32(r25);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802002D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r25, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802002E8;
    }
}

loc_802002E4:
{
    goto loc_802002EC;
}

loc_802002E8:
{
    r3 = 0;
}

loc_802002EC:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FFF64 func_801FFF64 preserves=true fpr_mask=0x00000000
