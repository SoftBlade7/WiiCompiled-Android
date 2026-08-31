#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_801DA140_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_801DA140_statefree_v0(uint32_t, uint32_t);

extern "C" void func_801E108C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r28_rot_5 = 0;
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
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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

    goto loc_801E108C;

loc_801E108C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021580 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -4), r31);
    // end of inlined leaf 0x80021580
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E10A4:
{
    r19 = r4;
    r20 = r5;
    r21 = r7;
    r22 = r8;
    r23 = r9;
    r29 = 0;
    r28 = 0;
    r25 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E10D0;
    }
}

loc_801E10C8:
{
    r3 = -3;
    goto loc_801E12BC;
}

loc_801E10D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801E10D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E10E0;
    }
}

loc_801E10D8:
{
    r3 = -3;
    goto loc_801E12BC;
}

loc_801E10E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801E10E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E10F0;
    }
}

loc_801E10E8:
{
    r3 = -8;
    goto loc_801E12BC;
}

loc_801E10F0:
{
}

loc_801E10F4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801E1100;
    }
}

loc_801E10F8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
}

loc_801E1100:
{
}

loc_801E1104:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801E1110;
    }
}

loc_801E1108:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r8, r0);
}

loc_801E1110:
{
    r27 = r6;
    r26 = r3;
    r30 = 0;
    r31 = 32;
    goto loc_801E1298;
}

loc_801E1124:
{
}

loc_801E1128:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r19))) {
        goto loc_801E1134;
    }
}

loc_801E112C:
{
    r25 = -8;
    goto loc_801E12A0;
}

loc_801E1134:
{
}

loc_801E1138:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_801E115C;
    }
}

loc_801E113C:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_801E1144:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(95))) {
        goto loc_801E115C;
    }
}

loc_801E1148:
{
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r31));
    r26 = (r26 + 1);
    r27 = (r27 + 1);
    r29 = (r29 + 1);
    goto loc_801E1294;
}

loc_801E115C:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_801E1164:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(61))) {
        goto loc_801E1280;
    }
}

loc_801E1168:
{
    r0 = (r30 + 2);
}

loc_801E1170:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r21))) {
        goto loc_801E1280;
    }
}

loc_801E1174:
{
    r27 = (r27 + 1);
    r0 = MemoryInline::FlatRead8(r27);
    r24 = 1;
    r30 = (r30 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801E1188:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_801E1194;
    }
}

loc_801E118C:
{
}

loc_801E1190:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_801E11F0;
    }
}

loc_801E1194:
{
    r4 = (r27 + 1);
    r5 = 1;
    goto loc_801E11E0;
}

loc_801E11A0:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_801E11A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(13))) {
        goto loc_801E11C4;
    }
}

loc_801E11AC:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_801E11B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_801E11C4;
    }
}

loc_801E11B8:
{
    r27 = r4;
    r30 = (r30 + r5);
    goto loc_801E11F0;
}

loc_801E11C4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801E11CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_801E11D8;
    }
}

loc_801E11D0:
{
}

loc_801E11D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_801E11F0;
    }
}

loc_801E11D8:
{
    r4 = (r4 + 1);
    r5 = (r5 + 1);
}

loc_801E11E0:
{
    r3 = (r30 + r5);
    r0 = (r3 + 1);
}

loc_801E11EC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r21))) {
        goto loc_801E11A0;
    }
}

loc_801E11F0:
{
    r3 = MemoryInline::FlatRead8(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(13));
}

loc_801E11F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E1214;
    }
}

loc_801E11FC:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_801E1204:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E1214;
    }
}

loc_801E1208:
{
    r27 = (r27 + 2);
    r30 = (r30 + 1);
    goto loc_801E1294;
}

loc_801E1214:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801DA140u) && KnownTranslatedCpuCall<0x801DA140u>::kAvailable && !KnownTranslatedCpuCall<0x801DA140u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801DA140u>()) {
        const auto state_free_result_801DA140_22B0 = func_801DA140_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_801DA140_22B0[0]);
        r4 = static_cast<uint32_t>(state_free_result_801DA140_22B0[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
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
        InvokeDirectCpu<0x801DA140u>(ctx);
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
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
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
    }
}

loc_801E1220:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_801E1228;
    }
}

loc_801E1224:
{
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r28 = (r28_rot_2 & 240);
}

loc_801E1228:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E122C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E1234;
    }
}

loc_801E1230:
{
    r24 = 0;
}

loc_801E1234:
{
    r0 = MemoryInline::FlatRead8((r27 + 1));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801DA140u) && KnownTranslatedCpuCall<0x801DA140u>::kAvailable && !KnownTranslatedCpuCall<0x801DA140u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801DA140u>()) {
        const auto state_free_result_801DA140_2C39 = func_801DA140_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_801DA140_2C39[0]);
        r4 = static_cast<uint32_t>(state_free_result_801DA140_2C39[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
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
        InvokeDirectCpu<0x801DA140u>(ctx);
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
        r19 = ctx->gpr[19];
        r20 = ctx->gpr[20];
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
    }
}

loc_801E1244:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_801E1254;
    }
}

loc_801E1248:
{
    r0 = (r3 & 15);
    r0 = (r28 | r0);
    r28 = (r0 & 255);
}

loc_801E1254:
{
}

loc_801E1258:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801E1260;
    }
}

loc_801E125C:
{
    r24 = 0;
}

loc_801E1260:
{
}

loc_801E1264:
{
    r27 = (r27 + 2);
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_801E1278;
    }
}

loc_801E126C:
{
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r28));
    r26 = (r26 + 1);
    r29 = (r29 + 1);
}

loc_801E1278:
{
    r30 = (r30 + 1);
    goto loc_801E1294;
}

loc_801E1280:
{
    r0 = MemoryInline::FlatRead8(r27);
    r29 = (r29 + 1);
    r27 = (r27 + 1);
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r26 = (r26 + 1);
}

loc_801E1294:
{
    r30 = (r30 + 1);
}

loc_801E1298:
{
}

loc_801E129C:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r21))) {
        goto loc_801E1124;
    }
}

loc_801E12A0:
{
}

loc_801E12A4:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_801E12AC;
    }
}

loc_801E12A8:
{
    MemoryInline::FlatWrite32(r20, r29);
}

loc_801E12AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_801E12B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E12B8;
    }
}

loc_801E12B4:
{
    MemoryInline::FlatWrite32(r22, r30);
}

loc_801E12B8:
{
    r3 = r25;
}

loc_801E12BC:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215CC (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -4));
    // end of inlined leaf 0x800215CC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
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

// RECOMP_GUEST_ABI gpr_read=0xFFF803FB gpr_write=0xFFF8083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E108C func_801E108C preserves=true fpr_mask=0x00000000
