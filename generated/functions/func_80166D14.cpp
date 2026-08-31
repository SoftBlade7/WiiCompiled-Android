#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80166D14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_80166D14;

loc_80166D14:
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
    r26 = r5;
    r8 = -1;
    r9 = 1;
    r5 = (0 - r3);
    r0 = (0 - r26);
    r27 = r6;
    MemoryInline::FlatWriteRam32((r1 + 24), r8);
    r5 = (r5 | r3);
    r24 = r3;
    r0 = (r0 | r26);
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    r28 = r7;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r25 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r9);
    r8 = r27;
    r5 = (r1 + 20);
    r6 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & 1);
    r9 = (r1 + 24);
    r10 = (r1 + 12);
    r31 = 0;
    r30 = 0;
    ctx->lr = 0x80166D8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    InvokeDirectCpu<0x80166AD0u>(ctx);
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

loc_80166D90:
{
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80166D9C;
    }
}

loc_80166D98:
{
    goto loc_80166FA4;
}

loc_80166D9C:
{
    r0 = MemoryInline::FlatRead32((r13 + -29440));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80166DA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80166DB0;
    }
}

loc_80166DA8:
{
    r3 = -7;
    goto loc_80166FA4;
}

loc_80166DB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_80166DB8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80166F64;
    }
}

loc_80166DBC:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80166DC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80166F64;
    }
}

loc_80166DC8:
{
    r0 = MemoryInline::FlatRead16(r26);
}

loc_80166DD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65279))) {
        goto loc_80166DE0;
    }
}

loc_80166DD4:
{
    r31 = 1;
    r26 = (r26 + 2);
    goto loc_80166F64;
}

loc_80166DE0:
{
}

loc_80166DE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65534))) {
        goto loc_80166F64;
    }
}

loc_80166DE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80166DEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80166DF8;
    }
}

loc_80166DF0:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r25, r0);
}

loc_80166DF8:
{
    r0 = 0;
    r3 = -4;
    MemoryInline::FlatWrite32(r27, r0);
    goto loc_80166FA4;
}

loc_80166E0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_80166E14:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80166E2C;
    }
}

loc_80166E18:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_80166E20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80166E2C;
    }
}

loc_80166E24:
{
    r29 = -1;
    goto loc_80166F88;
}

loc_80166E2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80166E30:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80166ED8;
    }
}

loc_80166E34:
{
    r0 = (r3 - r31);
    r3 = r22;
}

loc_80166E40:
{
    r4 = 0;
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1))) {
        goto loc_80166E54;
    }
}

loc_80166E48:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80166E50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80166E58;
    }
}

loc_80166E54:
{
    r4 = 1;
}

loc_80166E58:
{
}

loc_80166E5C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80166E68;
    }
}

loc_80166E60:
{
    r4 = MemoryInline::FlatRead16((r26 + 2));
    goto loc_80166E6C;
}

loc_80166E68:
{
    r4 = 0;
}

loc_80166E6C:
{
    // inline leaf 0x80166BC8 (13 guest instruction(s))
}

loc_inl1_0x80166BC8:
{
}

loc_inl1_0x80166BCC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(10))) {
        goto loc_inl1_0x80166BD8;
    }
}

loc_inl1_0x80166BD0:
{
    r3 = 1;
    goto loc_inl1_cont_80166BC8;
}

loc_inl1_0x80166BD8:
{
}

loc_inl1_0x80166BDC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(13))) {
        goto loc_inl1_0x80166BF4;
    }
}

loc_inl1_0x80166BE0:
{
    r0 = (r4 + -10);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    r3 = (r3 + 1);
    goto loc_inl1_cont_80166BC8;
}

loc_inl1_0x80166BF4:
{
    r3 = 0;
}

loc_inl1_cont_80166BC8:
{
    // end of inlined leaf 0x80166BC8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80166E74:
{
    r23 = r3;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80166ED8;
    }
}

loc_80166E7C:
{
    r6 = MemoryInline::FlatRead32((r1 + 16));
    r3 = r24;
    r5 = r28;
    r4 = 1;
    ctx->lr = 0x80166E90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80166BFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r0 - r30);
}

loc_80166E9C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80166EB4;
    }
}

loc_80166EA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_80166EA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80166EB4;
    }
}

loc_80166EAC:
{
    r29 = -1;
    goto loc_80166F88;
}

loc_80166EB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r26 = (r26 + r4);
    r31 = (r31 + r23);
}

loc_80166EC8:
{
    r30 = (r30 + r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80166F64;
    }
}

loc_80166ED0:
{
    r24 = (r24 + r3);
    goto loc_80166F64;
}

loc_80166ED8:
{
    r4 = r22;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x80166FBCu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r4 = MemoryInline::FlatRead8((r1 + 9));
}

loc_80166EF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80166EFC;
    }
}

loc_80166EF4:
{
    r29 = -2;
    goto loc_80166F88;
}

loc_80166EFC:
{
}

loc_80166F00:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80166F1C;
    }
}

loc_80166F04:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_80166F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80166F58;
    }
}

loc_80166F10:
{
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r3));
    r24 = (r24 + 1);
    goto loc_80166F58;
}

loc_80166F1C:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_80166F24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80166F54;
    }
}

loc_80166F28:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r0 - r30);
}

loc_80166F34:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_80166F40;
    }
}

loc_80166F38:
{
    r29 = -1;
    goto loc_80166F88;
}

loc_80166F40:
{
    MemoryInline::FlatWrite8(r24, static_cast<uint8_t>(r3));
    r30 = (r30 + 1);
    MemoryInline::FlatWrite8((r24 + 1), static_cast<uint8_t>(r4));
    r24 = (r24 + 2);
    goto loc_80166F58;
}

loc_80166F54:
{
    r30 = (r30 + 1);
}

loc_80166F58:
{
    r30 = (r30 + 1);
    r26 = (r26 + 2);
    r31 = (r31 + 1);
}

loc_80166F64:
{
    r22 = MemoryInline::FlatRead16(r26);
}

loc_80166F6C:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80166F88;
    }
}

loc_80166F70:
{
    r3 = MemoryInline::FlatRead32((r1 + 24));
}

loc_80166F78:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r3))) {
        goto loc_80166E0C;
    }
}

loc_80166F7C:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80166F84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80166E0C;
    }
}

loc_80166F88:
{
}

loc_80166F8C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80166F94;
    }
}

loc_80166F90:
{
    MemoryInline::FlatWrite32(r27, r31);
}

loc_80166F94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80166F98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80166FA0;
    }
}

loc_80166F9C:
{
    MemoryInline::FlatWrite32(r25, r30);
}

loc_80166FA0:
{
    r3 = r29;
}

loc_80166FA4:
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
    ctx->gpr[10] = r10;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80166D14 func_80166D14 preserves=true fpr_mask=0x00000000
