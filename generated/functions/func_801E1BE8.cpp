#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E1BE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_801E1BE8;

loc_801E1BE8:
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
    r22 = r4;
    r21 = r3;
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r27 = 0;
    r26 = -13;
    r4 = 0;
    // inline leaf 0x801E1470 (8 guest instruction(s))
}

loc_inl1_0x801E1470:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x801E1478:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x801E1488;
    }
}

loc_inl1_0x801E147C:
{
    MemoryInline::FlatWrite32((r3 + 20), r4);
    r3 = 0;
    goto loc_inl1_cont_801E1470;
}

loc_inl1_0x801E1488:
{
    r3 = -8;
}

loc_inl1_cont_801E1470:
{
    // end of inlined leaf 0x801E1470
    r28 = 0;
    goto loc_801E1CE0;
}

loc_801E1C28:
{
    r3 = r21;
    ctx->lr = 0x801E1C30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x801E1DA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_801E1C34:
{
    r29 = r3;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E1C44;
    }
}

loc_801E1C3C:
{
    r26 = -24;
    goto loc_801E1CE8;
}

loc_801E1C44:
{
    r3 = r21;
    r4 = r27;
    // inline leaf 0x801E1470 (8 guest instruction(s))
}

loc_inl2_0x801E1470:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_inl2_0x801E1478:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl2_0x801E1488;
    }
}

loc_inl2_0x801E147C:
{
    MemoryInline::FlatWrite32((r3 + 20), r4);
    r3 = 0;
    goto loc_inl2_cont_801E1470;
}

loc_inl2_0x801E1488:
{
    r3 = -8;
}

loc_inl2_cont_801E1470:
{
    // end of inlined leaf 0x801E1470
    r3 = r21;
    r5 = r29;
    r4 = (r1 + 8);
    ctx->lr = 0x801E1C60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x801E1490u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r31 = MemoryInline::FlatRead32((r1 + 8));
    r30 = r22;
}

loc_801E1C68:
{
    r3 = MemoryInline::FlatRead8(r31);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    // inline leaf 0x801DA19C (6 guest instruction(s))
}

loc_inl3_0x801DA19C:
{
}

loc_inl3_0x801DA1A0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(65))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x801DA1A4:
{
}

loc_inl3_0x801DA1A8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(90))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x801DA1AC:
{
    r3 = (r3 + 32);
    goto loc_inl3_cont_801DA19C;
}

loc_inl3_return:
{
}

loc_inl3_cont_801DA19C:
{
    // end of inlined leaf 0x801DA19C
    r0 = MemoryInline::FlatRead8(r30);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801E1C84:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_801E1CA0;
    }
}

loc_801E1C88:
{
    r30 = (r30 + 1);
    r0 = MemoryInline::FlatRead8(r30);
    r31 = (r31 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E1C68;
    }
}

loc_801E1C98:
{
    r0 = 1;
    goto loc_801E1CA4;
}

loc_801E1CA0:
{
    r0 = 0;
}

loc_801E1CA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E1CA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E1CCC;
    }
}

loc_801E1CAC:
{
    r3 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D9FD8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = (r27 + r3);
    r0 = (r29 - r3);
    MemoryInline::FlatWrite32(r24, r4);
    r26 = 0;
    MemoryInline::FlatWrite32(r25, r0);
    goto loc_801E1CE8;
}

loc_801E1CCC:
{
    r27 = (r27 + r29);
    r3 = r21;
    r4 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E1470u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r28 = (r28 + r29);
}

loc_801E1CE0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r23));
}

loc_801E1CE4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E1C28;
    }
}

loc_801E1CE8:
{
    r11 = (r1 + 64);
    r3 = r26;
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
        r21 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -44));
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 40u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E1BE8 func_801E1BE8 preserves=true fpr_mask=0x00000000
