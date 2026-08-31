#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80036200(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    goto loc_80036200;

loc_80036200:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
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
    r26 = r3;
    r30 = 0;
    r29 = 0;
    goto loc_80036414;
}

loc_80036224:
{
    r27 = r29;
    r3 = r26;
    r28 = 0;
    r4 = 0;
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl1_0x800AF180:
{
}

loc_inl1_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800AF190;
    }
}

loc_inl1_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_800AF180;
}

loc_inl1_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    r4 = r3;
    goto loc_80036278;
}

loc_80036240:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
}

loc_80036250:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80036268;
    }
}

loc_80036254:
{
    r3 = r4;
    r4 = (r27 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80035B80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r31 = r3;
    goto loc_80036284;
}

loc_80036268:
{
    r3 = r26;
    r27 = (r27 - r0);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl2_0x800AF180:
{
}

loc_inl2_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800AF190;
    }
}

loc_inl2_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_800AF180;
}

loc_inl2_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    r4 = r3;
}

loc_80036278:
{
}

loc_8003627C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80036240;
    }
}

loc_80036280:
{
    r31 = 0;
}

loc_80036284:
{
}

loc_80036288:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80036410;
    }
}

loc_8003628C:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r23 = 0;
    r3 = (r0 + r31);
    r24 = (r3 + 148);
    r25 = (r3 + 116);
}

loc_800362A0:
{
    r0 = MemoryInline::FlatRead8((r24 + 2));
    r22 = MemoryInline::FlatRead16(r24);
    r24 = (r24 + 2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800362BC;
    }
}

loc_800362B4:
{
    r3 = 0;
    goto loc_80036304;
}

loc_800362BC:
{
    r3 = (r26 + 16);
    r4 = 0;
    // inline leaf 0x800AF1A0 (7 guest instruction(s))
}

loc_inl3_0x800AF1A0:
{
}

loc_inl3_0x800AF1A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800AF1B0;
    }
}

loc_inl3_0x800AF1A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl3_cont_800AF1A0;
}

loc_inl3_0x800AF1B0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_3);
}

loc_inl3_cont_800AF1A0:
{
    // end of inlined leaf 0x800AF1A0
    r27 = r3;
    goto loc_800362F8;
}

loc_800362D0:
{
    r3 = r27;
    r4 = r24;
    ctx->lr = 0x800362DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80035CB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800362E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800362E8;
    }
}

loc_800362E4:
{
    goto loc_80036304;
}

loc_800362E8:
{
    r4 = r27;
    r3 = (r26 + 16);
    // inline leaf 0x800AF1A0 (7 guest instruction(s))
}

loc_inl4_0x800AF1A0:
{
}

loc_inl4_0x800AF1A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x800AF1B0;
    }
}

loc_inl4_0x800AF1A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl4_cont_800AF1A0;
}

loc_inl4_0x800AF1B0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_6 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_6);
}

loc_inl4_cont_800AF1A0:
{
    // end of inlined leaf 0x800AF1A0
    r27 = r3;
}

loc_800362F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_800362FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800362D0;
    }
}

loc_80036300:
{
    r3 = 0;
}

loc_80036304:
{
    MemoryInline::FlatWrite32(r25, r3);
    r0 = MemoryInline::FlatRead8(r24);
}

loc_80036310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80036328;
    }
}

loc_80036314:
{
    r0 = MemoryInline::FlatRead32(r25);
}

loc_8003631C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80036328;
    }
}

loc_80036320:
{
    r0 = (r28 + 1);
    r28 = (r0 & 255);
}

loc_80036328:
{
    r23 = (r23 + 1);
    r24 = (r24 + r22);
}

loc_80036334:
{
    r25 = (r25 + 4);
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(3))) {
        goto loc_800362A0;
    }
}

loc_8003633C:
{
    r27 = 0;
    goto loc_800363C4;
}

loc_80036344:
{
    r31_addr_4 = (r31 + r5);
    r0 = MemoryInline::FlatRead32(r31_addr_4);
    r3 = (r31 + r5);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & 262140);
    r3 = (r0 + r3);
    r0 = (r3 + 4);
    r3 = (r0 + r4);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = (r3 + 85);
    r0 = (r0 & 255);
}

loc_80036370:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800363C0;
    }
}

loc_80036374:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8003637C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80036394;
    }
}

loc_80036380:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80036384:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800363AC;
    }
}

loc_80036388:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8003638C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800363AC;
    }
}

loc_80036390:
{
    goto loc_800363C0;
}

loc_80036394:
{
    r3 = r26;
    r5 = r31;
    ctx->lr = 0x800363A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80035FE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    r0 = (r28 + r3);
    r28 = (r0 & 255);
    goto loc_800363C0;
}

loc_800363AC:
{
    r3 = r26;
    r5 = r31;
    ctx->lr = 0x800363B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80036100u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    r0 = (r28 + r3);
    r28 = (r0 & 255);
}

loc_800363C0:
{
    r27 = (r27 + 1);
}

loc_800363C4:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r27 & 65535);
    r5 = (r4 + 8);
    r31_addr_3 = (r31 + r5);
    r0 = MemoryInline::FlatRead32(r31_addr_3);
    r4 = (r31 + r5);
    r4 = (r0 + r4);
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_800363E4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80036344;
    }
}

loc_800363E8:
{
}

loc_800363EC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80036400;
    }
}

loc_800363F0:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r0 & -1073741825);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_8003640C;
}

loc_80036400:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r0 = (r0 | 1073741824);
    MemoryInline::FlatWrite32((r31 + 8), r0);
}

loc_8003640C:
{
    r30 = (r30 + r28);
}

loc_80036410:
{
    r29 = (r29 + 1);
}

loc_80036414:
{
    r0 = MemoryInline::FlatRead32((r26 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r0));
}

loc_8003641C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80036224;
    }
}

loc_80036420:
{
    r11 = (r1 + 48);
    r3 = r30;
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
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC007FB gpr_write=0xFFC00FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80036200 func_80036200 preserves=true fpr_mask=0x00000000
