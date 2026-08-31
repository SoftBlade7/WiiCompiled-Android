#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80181F1C(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80181F1C;

loc_80181F1C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
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
    r30 = r4;
    r25 = r3;
    r26 = r5;
    r3 = r30;
    // inline leaf 0x80180764 (10 guest instruction(s))
}

loc_inl1_0x80180764:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r4 = 0;
}

loc_inl1_0x80180770:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65279))) {
        goto loc_inl1_0x80180784;
    }
}

loc_inl1_0x80180774:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_inl1_0x8018077C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_inl1_0x80180784;
    }
}

loc_inl1_0x80180780:
{
    r4 = 1;
}

loc_inl1_0x80180784:
{
    r3 = r4;
}

loc_inl1_cont_80180764:
{
    // end of inlined leaf 0x80180764
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80181F48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80181F54;
    }
}

loc_80181F4C:
{
    r3 = 0;
    goto loc_8018208C;
}

loc_80181F54:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r3 = 1885405184;
    r31 = (r3 + 26929);
    r28 = 0;
    r29 = (r30 + r0);
    r27 = 0;
    r23 = 1380712448;
    r24 = 0x80340000u;
    goto loc_8018207C;
}

loc_80181F78:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_80181F80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r31))) {
        goto loc_80181F88;
    }
}

loc_80181F84:
{
    goto loc_80182070;
}

loc_80181F88:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r23 + 21584);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80181F94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80181FFC;
    }
}

loc_80181F98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80181FCC;
    }
}

loc_80181F9C:
{
    r0 = (r23 + 19779);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80181FA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80181FFC;
    }
}

loc_80181FA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80181FBC;
    }
}

loc_80181FAC:
{
    r0 = (r23 + 16718);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80181FB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80181FFC;
    }
}

loc_80181FB8:
{
    goto loc_80182050;
}

loc_80181FBC:
{
    r0 = (r23 + 20545);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80181FC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80181FFC;
    }
}

loc_80181FC8:
{
    goto loc_80182050;
}

loc_80181FCC:
{
    r0 = (r23 + 22083);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80181FD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80181FFC;
    }
}

loc_80181FD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80181FEC;
    }
}

loc_80181FDC:
{
    r0 = (r23 + 21587);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80181FE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80181FFC;
    }
}

loc_80181FE8:
{
    goto loc_80182050;
}

loc_80181FEC:
{
    r0 = (r23 + 22089);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80181FF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80181FFC;
    }
}

loc_80181FF8:
{
    goto loc_80182050;
}

loc_80181FFC:
{
    r3 = MemoryInline::FlatRead32((r24 + 18848));
    r4 = 32;
    ctx->lr = 0x80182008u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8018200C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80182024;
    }
}

loc_80182010:
{
    r22 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80182028;
    }
}

loc_80182018:
{
    // inline leaf 0x8017F940 (14 guest instruction(s))
    r4 = 0x80250000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11008));
    r4 = 0x80290000u;
    r4 = (r4 + -17720);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 30u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
    }
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8017F940
    r22 = r3;
    goto loc_80182028;
}

loc_80182024:
{
    r22 = 0;
}

loc_80182028:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_8018202C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80182050;
    }
}

loc_80182030:
{
    r12 = MemoryInline::FlatRead32(r22);
    r3 = r22;
    r4 = r29;
    r5 = r26;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8018204Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = r22;
}

loc_80182050:
{
}

loc_80182054:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80182070;
    }
}

loc_80182058:
{
    r0 = (r25 + 8);
    r3 = (r25 + 4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r1 + 8);
    r5 = (r28 + 4);
    // inline leaf 0x8018CA9C (11 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r4);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r6);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    MemoryInline::FlatWrite32(r6, r5);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = r5;
    // end of inlined leaf 0x8018CA9C
}

loc_80182070:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r27 = (r27 + 1);
    r29 = (r29 + r0);
}

loc_8018207C:
{
    r0 = MemoryInline::FlatRead16((r30 + 14));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_80182084:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80181F78;
    }
}

loc_80182088:
{
    r3 = r28;
}

loc_8018208C:
{
    r11 = (r1 + 64);
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
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80181F1C func_80181F1C preserves=true fpr_mask=0x00000000
