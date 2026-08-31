#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015CB18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8015CB18;

loc_8015CB18:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80021578 (16 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -60), r17);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -56), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -4), r31);
    // end of inlined leaf 0x80021578
    r8 = (r5 + -1);
    r17 = r3;
}

loc_8015CB38:
{
    r18 = r5;
    r10 = r4;
    r24 = 0;
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(0))) {
        goto loc_8015CC00;
    }
}

loc_8015CB48:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_8015CB4C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015CBE4;
    }
}

loc_8015CB54:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r10 + 8), 0, 88u, true, false);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r10 + 8));
    r3 = (r9 + 31);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r10 + 20));
    r0 = (r3 & -32);
    r3 = (r9 + 31);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r10 + 32));
    r24 = (r24 + r0);
    r0 = (r3 & -32);
    r3 = (r9 + 31);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r10 + 44));
    r24 = (r24 + r0);
    r0 = (r3 & -32);
    r3 = (r9 + 31);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r10 + 56));
    r24 = (r24 + r0);
    r0 = (r3 & -32);
    r3 = (r9 + 31);
    r24 = (r24 + r0);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r10 + 68));
    r0 = (r3 & -32);
    r3 = (r9 + 31);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r10 + 80));
    r24 = (r24 + r0);
    r0 = (r3 & -32);
    r3 = (r9 + 31);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r10 + 92));
    r24 = (r24 + r0);
    r0 = (r3 & -32);
    r10 = (r10 + 96);
    r3 = (r9 + 31);
    r24 = (r24 + r0);
    r0 = (r3 & -32);
    r24 = (r24 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015CB54;
    }
}

loc_8015CBDC:
{
    r8 = (r8 & 7);
}

loc_8015CBE0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8015CC00;
    }
}

loc_8015CBE4:
{
    ctr = r8;
}

loc_8015CBE8:
{
    r9 = MemoryInline::FlatRead32((r10 + 8));
    r10 = (r10 + 12);
    r3 = (r9 + 31);
    r0 = (r3 & -32);
    r24 = (r24 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015CBE8;
    }
}

loc_8015CC00:
{
    r0 = (r5 * 12);
    r27 = r4;
    r22 = (r6 + r7);
    r29 = (r1 + 8);
    r3 = (r4 + r0);
    r26 = 0;
    r0 = MemoryInline::FlatRead32((r3 + -4));
    r30 = 1;
    r31 = 0;
    r24 = (r24 + r0);
    goto loc_8015CDE8;
}

loc_8015CC2C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26120));
    r0 = (r3 + 36);
}

loc_8015CC38:
{
    MemoryInline::FlatWrite32((r13 + -26120), r0);
    r21 = (r22 - r0);
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r24))) {
        goto loc_8015CC48;
    }
}

loc_8015CC44:
{
    r21 = 0;
}

loc_8015CC48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_8015CC4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015CC58;
    }
}

loc_8015CC50:
{
    r3 = 0;
    goto loc_8015CDF4;
}

loc_8015CC58:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r31));
    r20 = r21;
    r23 = MemoryInline::FlatRead32(r27);
    MemoryInline::FlatWrite32(r21, r31);
    MemoryInline::FlatWrite32((r21 + 4), r31);
    MemoryInline::FlatWrite32((r21 + 8), r21);
    MemoryInline::FlatWrite32((r21 + 20), r29);
    MemoryInline::FlatWrite32((r21 + 12), r31);
    MemoryInline::FlatWrite32((r21 + 24), r30);
    MemoryInline::FlatWrite32((r21 + 28), r31);
    goto loc_8015CD90;
}

loc_8015CC84:
{
    r3 = MemoryInline::FlatRead32((r13 + -26120));
    r0 = (r3 + 36);
}

loc_8015CC90:
{
    MemoryInline::FlatWrite32((r13 + -26120), r0);
    r19 = (r22 - r0);
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r24))) {
        goto loc_8015CCA0;
    }
}

loc_8015CC9C:
{
    r19 = 0;
}

loc_8015CCA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_8015CCA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015CCB0;
    }
}

loc_8015CCA8:
{
    r3 = 0;
    goto loc_8015CDF4;
}

loc_8015CCB0:
{
    r0 = MemoryInline::FlatRead8(r23);
}

loc_8015CCB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_8015CCC0;
    }
}

loc_8015CCBC:
{
    r23 = (r23 + 1);
}

loc_8015CCC0:
{
    r0 = MemoryInline::FlatRead8(r23);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015CCD4;
    }
}

loc_8015CCCC:
{
    r28 = -1;
    goto loc_8015CCFC;
}

loc_8015CCD4:
{
    r3 = r23;
    goto loc_8015CCE0;
}

loc_8015CCDC:
{
    r3 = (r3 + 1);
}

loc_8015CCE0:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(47));
}

loc_8015CCEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015CCF8;
    }
}

loc_8015CCF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015CCF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015CCDC;
    }
}

loc_8015CCF8:
{
    r28 = (r3 - r23);
}

loc_8015CCFC:
{
    r3 = MemoryInline::FlatRead32(r27);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r13 + -26120));
    r3 = (r3 + 1);
    r0 = (r0 + r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r24));
}

loc_8015CD14:
{
    MemoryInline::FlatWrite32((r13 + -26120), r0);
    r0 = (r22 - r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015CD24;
    }
}

loc_8015CD20:
{
    r0 = 0;
}

loc_8015CD24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015CD28:
{
    MemoryInline::FlatWrite32((r19 + 20), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015CD38;
    }
}

loc_8015CD30:
{
    r3 = 0;
    goto loc_8015CDF4;
}

loc_8015CD38:
{
    MemoryInline::FlatWrite32((r19 + 24), r30);
    r4 = MemoryInline::FlatRead32(r27);
    MemoryInline::FlatWrite32(r19, r31);
    r25 = (r23 - r4);
    MemoryInline::FlatWrite32((r19 + 4), r31);
    MemoryInline::FlatWrite32((r19 + 8), r20);
    MemoryInline::FlatWrite32((r19 + 12), r31);
    r3 = MemoryInline::FlatRead32((r19 + 20));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015CD60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015CD6C;
    }
}

loc_8015CD64:
{
    r3 = 0;
    goto loc_8015CDF4;
}

loc_8015CD6C:
{
    r3 = MemoryInline::FlatRead32((r19 + 20));
    r0 = (r28 + r25);
    r23 = (r23 + r28);
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r19 + 20));
    r0 = (r0 + r25);
    MemoryInline::FlatWrite32((r19 + 20), r0);
    MemoryInline::FlatWrite32((r20 + 4), r19);
    r20 = r19;
}

loc_8015CD90:
{
    r0 = MemoryInline::FlatRead8(r23);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015CDB0;
    }
}

loc_8015CD9C:
{
}

loc_8015CDA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_8015CC84;
    }
}

loc_8015CDA4:
{
    r0 = MemoryInline::FlatRead8((r23 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015CC84;
    }
}

loc_8015CDB0:
{
    r5 = MemoryInline::FlatRead32((r20 + 8));
    r3 = r17;
    r4 = r21;
    MemoryInline::FlatWrite32((r5 + 4), r31);
    r5 = MemoryInline::FlatRead32((r20 + 8));
    MemoryInline::FlatWrite32((r5 + 12), r20);
    MemoryInline::FlatWrite32((r20 + 24), r31);
    ctx->lr = 0x8015CDD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8015C37Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015CDD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015CDE0;
    }
}

loc_8015CDD8:
{
    r3 = 0;
    goto loc_8015CDF4;
}

loc_8015CDE0:
{
    r27 = (r27 + 12);
    r26 = (r26 + 1);
}

loc_8015CDE8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(r18));
}

loc_8015CDEC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015CC2C;
    }
}

loc_8015CDF0:
{
    r3 = 1;
}

loc_8015CDF4:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215C4 (16 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -4));
    // end of inlined leaf 0x800215C4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8015CB18 func_8015CB18 preserves=true fpr_mask=0x00000000
