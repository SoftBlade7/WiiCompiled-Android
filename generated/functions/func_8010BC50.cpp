#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010BC50(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_8010BC50;

loc_8010BC50:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 92));
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r31 = r8;
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    r29 = r3;
    r28 = 0;
    goto loc_8010BCC8;
}

loc_8010BC90:
{
    r3 = MemoryInline::FlatRead32((r30 + 92));
    r4 = r28;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl2_0x800EF4B0:
{
}

loc_inl2_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl2_0x800EF4C4;
    }
}

loc_inl2_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl2_0x800EF4CC;
    }
}

loc_inl2_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl2_cont_800EF4B0;
}

loc_inl2_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl2_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r0 = MemoryInline::FlatRead16((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r25));
}

loc_8010BCA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010BCB8;
    }
}

loc_8010BCA8:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8010BDE4;
}

loc_8010BCB8:
{
    r0 = (r0 - r25);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8010BCD0;
    }
}

loc_8010BCC4:
{
    r28 = (r28 + 1);
}

loc_8010BCC8:
{
}

loc_8010BCCC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r29))) {
        goto loc_8010BC90;
    }
}

loc_8010BCD0:
{
    r3 = (r30 + 68);
    // inline leaf 0x80109878 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r0 - r4);
    // end of inlined leaf 0x80109878
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r27));
}

loc_8010BCDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010BCF0;
    }
}

loc_8010BCE0:
{
    r0 = 1;
    r3 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8010BDE4;
}

loc_8010BCF0:
{
    r0 = MemoryInline::FlatRead32((r30 + 76));
    r5 = 0x80110000u;
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = (r5 + -17348);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r24);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r25));
    r3 = MemoryInline::FlatRead32((r30 + 92));
    ctx->lr = 0x8010BD18u;
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
    InvokeDirectCpu<0x800EF604u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = MemoryInline::FlatRead32((r30 + 92));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    r0 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8010BD28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010BD3C;
    }
}

loc_8010BD2C:
{
    r0 = 1;
    r3 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8010BDE4;
}

loc_8010BD3C:
{
    r4 = r26;
    r5 = r27;
    r3 = (r30 + 68);
    ctx->lr = 0x8010BD4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801098CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8010BD50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010BD78;
    }
}

loc_8010BD54:
{
    r0 = (r25 + -1);
    r4 = MemoryInline::FlatRead16((r30 + 102));
    r3 = r30;
    r5 = (r0 & 65535);
    ctx->lr = 0x8010BD68u;
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
    InvokeDirectCpu<0x8010DAD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8010BD6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010BDD8;
    }
}

loc_8010BD70:
{
    r3 = 0;
    goto loc_8010BDE4;
}

loc_8010BD78:
{
    r3 = MemoryInline::FlatRead32((r30 + 92));
    r4 = r29;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl5_0x800EF4B0:
{
}

loc_inl5_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl5_0x800EF4C4;
    }
}

loc_inl5_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl5_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl5_0x800EF4CC;
    }
}

loc_inl5_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl5_cont_800EF4B0;
}

loc_inl5_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl5_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r0 = MemoryInline::FlatRead16((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r25));
}

loc_8010BD8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010BDD8;
    }
}

loc_8010BD90:
{
    r3 = MemoryInline::FlatRead32((r30 + 92));
    r4 = (r29 + -1);
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl6_0x800EF4B0:
{
}

loc_inl6_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl6_0x800EF4C4;
    }
}

loc_inl6_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl6_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl6_0x800EF4CC;
    }
}

loc_inl6_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl6_cont_800EF4B0;
}

loc_inl6_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl6_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r25 - r3);
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8010BDAC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8010BDD8;
    }
}

loc_8010BDB0:
{
    r4 = (r3 + 1);
    r0 = (r25 + -1);
    r3 = r30;
    r4 = (r4 & 65535);
    r5 = (r0 & 65535);
    ctx->lr = 0x8010BDC8u;
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
    InvokeDirectCpu<0x8010DAD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8010BDCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010BDD8;
    }
}

loc_8010BDD0:
{
    r3 = 0;
    goto loc_8010BDE4;
}

loc_8010BDD8:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8010BDE4:
{
    r11 = (r1 + 64);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -4));
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
// RECOMP_REGISTRATION base 0x8010BC50 func_8010BC50 preserves=true fpr_mask=0x00000000
