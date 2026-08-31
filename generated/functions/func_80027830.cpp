#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80027830(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80027830;

loc_80027830:
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
    r3 = (r3 + 65536);
    r28 = r4;
    r0 = (r5 * 28);
    r3 = MemoryInline::FlatRead32((r3 + -16360));
    r23 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r23 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_80027860:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80027998;
    }
}

loc_80027864:
{
    r0 = (r3 + -1);
    r24 = 0;
    r22 = (r0 & 65535);
    r30 = 0;
    r31 = 0;
}

loc_80027878:
{
}

loc_8002787C:
{
    r29 = r24;
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80027894;
    }
}

loc_80027884:
{
    r3 = r23;
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
    r30 = r3;
}

loc_80027894:
{
    r26 = r30;
    r25 = r24;
    r27 = (r22 & 65535);
    goto loc_800278F0;
}

loc_800278A4:
{
    r3 = r23;
    r4 = r26;
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl2_0x800AF180:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl2_0x800AF184:
{
    if (((cr & 0x20000000u) == 0)) {
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
    r12 = r28;
    r22 = r3;
    r4 = r26;
    ctr = r12;
    ctx->lr = 0x800278C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800278C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800278E8;
    }
}

loc_800278CC:
{
    r3 = r23;
    r4 = r26;
    r5 = r22;
    // inline leaf 0x800277E0 (17 guest instruction(s))
}

loc_inl3_0x800277E0:
{
    r6 = MemoryInline::FlatRead32((r4 + 20));
    r7 = MemoryInline::FlatRead32((r5 + 24));
}

loc_inl3_0x800277EC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800277F8;
    }
}

loc_inl3_0x800277F0:
{
    MemoryInline::FlatWrite32(r3, r5);
    goto loc_inl3_0x800277FC;
}

loc_inl3_0x800277F8:
{
    MemoryInline::FlatWrite32((r6 + 24), r5);
}

loc_inl3_0x800277FC:
{
    MemoryInline::FlatWrite32((r5 + 20), r6);
}

loc_inl3_0x80027804:
{
    MemoryInline::FlatWrite32((r5 + 24), r4);
    MemoryInline::FlatWrite32((r4 + 20), r5);
    MemoryInline::FlatWrite32((r4 + 24), r7);
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8002781C;
    }
}

loc_inl3_0x80027814:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    goto loc_inl3_cont_800277E0;
}

loc_inl3_0x8002781C:
{
    MemoryInline::FlatWrite32((r7 + 20), r4);
}

loc_inl3_cont_800277E0:
{
    // end of inlined leaf 0x800277E0
    r29 = r25;
    r30 = r22;
    goto loc_800278EC;
}

loc_800278E8:
{
    r26 = r22;
}

loc_800278EC:
{
    r25 = (r25 + 1);
}

loc_800278F0:
{
    r0 = (r25 & 65535);
}

loc_800278F8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r27))) {
        goto loc_800278A4;
    }
}

loc_800278FC:
{
    r0 = (r29 & 65535);
    r27 = (r24 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_80027908:
{
    r22 = r29;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80027998;
    }
}

loc_80027910:
{
    r24 = r30;
    r25 = r29;
    goto loc_8002796C;
}

loc_8002791C:
{
    r3 = r23;
    r4 = r24;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AF1A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r26 = r3;
    r12 = r28;
    r3 = r24;
    r4 = r26;
    ctr = r12;
    ctx->lr = 0x80027940u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80027944:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80027964;
    }
}

loc_80027948:
{
    r3 = r23;
    r4 = r26;
    r5 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x800277E0u>(ctx);
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r29 = r25;
    r30 = r26;
    goto loc_80027968;
}

loc_80027964:
{
    r24 = r26;
}

loc_80027968:
{
    r25 = (r25 + -1);
}

loc_8002796C:
{
    r0 = (r25 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_80027974:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8002791C;
    }
}

loc_80027978:
{
    r3 = (r29 & 65535);
    r0 = (r22 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80027984:
{
    r24 = r29;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80027998;
    }
}

loc_8002798C:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(65535));
}

loc_80027994:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80027878;
    }
}

loc_80027998:
{
    r11 = (r1 + 48);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80027830 func_80027830 preserves=true fpr_mask=0x00000000
