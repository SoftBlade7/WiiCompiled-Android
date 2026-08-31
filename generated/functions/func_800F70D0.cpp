#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F70D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_10 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r0_subfic_ra_5 = 0;
    uint32_t r0_subfic_ra_6 = 0;
    uint32_t r0_subfic_ra_7 = 0;
    uint32_t r0_subfic_ra_8 = 0;
    uint32_t r0_subfic_ra_9 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r20_addr_4 = 0;
    uint32_t r20_addr_5 = 0;
    uint32_t r20_addr_6 = 0;
    uint32_t r20_addr_7 = 0;
    uint32_t r20_addr_8 = 0;
    uint32_t r20_addr_9 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r22_rot_3 = 0;
    uint32_t r22_rot_4 = 0;
    uint32_t r22_rot_5 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r23_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_800F70D0;

loc_800F70D0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
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
    r20 = r3;
    r21 = r4;
    r24 = 0;
    r30 = 0;
    r29 = 62;
    r28 = 60;
    r27 = 39;
    r26 = 34;
    r25 = 38;
    goto loc_800F7500;
}

loc_800F710C:
{
    r20_addr_2 = (r20 + r24);
    r0 = MemoryInline::FlatRead8(r20_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(38));
}

loc_800F7118:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F7124;
    }
}

loc_800F711C:
{
    r24 = (r24 + 1);
    goto loc_800F7500;
}

loc_800F7124:
{
    r22 = (r20 + r24);
    r4 = (r13 + -31568);
    r3 = r22;
    r5 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F713C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F7150;
    }
}

loc_800F7140:
{
    r20_addr_3 = (r20 + r24);
    MemoryInline::FlatWrite8(r20_addr_3, static_cast<uint8_t>(r25));
    r19 = 4;
    r24 = (r24 + 1);
    goto loc_800F74C4;
}

loc_800F7150:
{
    r3 = r22;
    r4 = (r13 + -31560);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F7164:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F7178;
    }
}

loc_800F7168:
{
    r20_addr_4 = (r20 + r24);
    MemoryInline::FlatWrite8(r20_addr_4, static_cast<uint8_t>(r26));
    r19 = 5;
    r24 = (r24 + 1);
    goto loc_800F74C4;
}

loc_800F7178:
{
    r3 = r22;
    r4 = (r13 + -31552);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F718C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F71A0;
    }
}

loc_800F7190:
{
    r20_addr_5 = (r20 + r24);
    MemoryInline::FlatWrite8(r20_addr_5, static_cast<uint8_t>(r27));
    r19 = 5;
    r24 = (r24 + 1);
    goto loc_800F74C4;
}

loc_800F71A0:
{
    r3 = r22;
    r4 = (r13 + -31544);
    r5 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F71B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F71C8;
    }
}

loc_800F71B8:
{
    r20_addr_6 = (r20 + r24);
    MemoryInline::FlatWrite8(r20_addr_6, static_cast<uint8_t>(r28));
    r19 = 3;
    r24 = (r24 + 1);
    goto loc_800F74C4;
}

loc_800F71C8:
{
    r3 = r22;
    r4 = (r13 + -31536);
    r5 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F71DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F71F0;
    }
}

loc_800F71E0:
{
    r20_addr_7 = (r20 + r24);
    MemoryInline::FlatWrite8(r20_addr_7, static_cast<uint8_t>(r29));
    r19 = 3;
    r24 = (r24 + 1);
    goto loc_800F74C4;
}

loc_800F71F0:
{
    r3 = r22;
    r4 = (r13 + -31528);
    r5 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F7204:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F7374;
    }
}

loc_800F7208:
{
    r3 = r22;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r19 = (r3 + 3);
    r23 = 0;
    r3 = r19;
    r22 = -16777216;
    r4 = 59;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F722C:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F723C;
    }
}

loc_800F7234:
{
    r3 = 0;
    goto loc_800F7510;
}

loc_800F723C:
{
    r4 = (r24 + r20);
    r0 = (r4 + 3);
    r0 = (r3 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_800F724C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F7258;
    }
}

loc_800F7250:
{
    r3 = 0;
    goto loc_800F7510;
}

loc_800F7258:
{
    r3 = r19;
    r5 = (r1 + 8);
    r4 = (r13 + -31524);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800F726Cu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 0;
    r0_subfic_ra_2 = r0;
    r0 = (3 - r0_subfic_ra_2);
}

loc_800F727C:
{
    r4 = (r4 & r22);
    r3 = (r20 + r24);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r0 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_800F729C;
    }
}

loc_800F7294:
{
}

loc_800F7298:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F72AC;
    }
}

loc_800F729C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r23 = 1;
    r24 = (r24 + 1);
    r3 = (r3 + 1);
}

loc_800F72AC:
{
    r0 = 1;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r22_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(24));
    r22 = (r22_rot_2 & 16777215);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_800F72BC:
{
    r0_subfic_ra_3 = r0;
    r0 = (3 - r0_subfic_ra_3);
    r4 = (r4 & r22);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r0 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F72DC;
    }
}

loc_800F72D4:
{
}

loc_800F72D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F72EC;
    }
}

loc_800F72DC:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r23 = 1;
    r24 = (r24 + 1);
    r3 = (r3 + 1);
}

loc_800F72EC:
{
    r0 = 2;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r22_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(24));
    r22 = (r22_rot_3 & 16777215);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_800F72FC:
{
    r0_subfic_ra_4 = r0;
    r0 = (3 - r0_subfic_ra_4);
    r4 = (r4 & r22);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r0 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F731C;
    }
}

loc_800F7314:
{
}

loc_800F7318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F732C;
    }
}

loc_800F731C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r23 = 1;
    r24 = (r24 + 1);
    r3 = (r3 + 1);
}

loc_800F732C:
{
    r0 = 3;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r22_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(24));
    r22 = (r22_rot_4 & 16777215);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_800F733C:
{
    r0_subfic_ra_5 = r0;
    r0 = (3 - r0_subfic_ra_5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(3) >= static_cast<uint32_t>(r0_subfic_ra_5) ? 1u : 0u) << 29);
    r4 = (r4 & r22);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r0 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F735C;
    }
}

loc_800F7354:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F7358:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F7364;
    }
}

loc_800F735C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r24 = (r24 + 1);
}

loc_800F7364:
{
    r0 = (r20 + r24);
    r3 = (r31 - r0);
    r19 = (r3 + 1);
    goto loc_800F74C4;
}

loc_800F7374:
{
    r3 = r22;
    r4 = (r13 + -31516);
    r5 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F7388:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F74BC;
    }
}

loc_800F738C:
{
    r3 = r22;
    r22 = 0;
    r19 = (r3 + 2);
    r23 = -16777216;
    r3 = r19;
    r4 = 59;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F73AC:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F73BC;
    }
}

loc_800F73B4:
{
    r3 = 0;
    goto loc_800F7510;
}

loc_800F73BC:
{
    r3 = r19;
    ctx->lr = 0x800F73C4u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8001543Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_800F73CC:
{
    r0_subfic_ra_6 = r0;
    r0 = (3 - r0_subfic_ra_6);
    r5 = (r3 & r23);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r4 = (r20 + r24);
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F73F0;
    }
}

loc_800F73E8:
{
}

loc_800F73EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F7400;
    }
}

loc_800F73F0:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r22 = 1;
    r24 = (r24 + 1);
    r4 = (r4 + 1);
}

loc_800F7400:
{
    r0 = 1;
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(24));
    r23 = (r23_rot_2 & 16777215);
    r0_subfic_ra_7 = r0;
    r0 = (3 - r0_subfic_ra_7);
}

loc_800F7410:
{
    r5 = (r3 & r23);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_800F742C;
    }
}

loc_800F7424:
{
}

loc_800F7428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F743C;
    }
}

loc_800F742C:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r22 = 1;
    r24 = (r24 + 1);
    r4 = (r4 + 1);
}

loc_800F743C:
{
    r0 = 2;
    r23_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(24));
    r23 = (r23_rot_3 & 16777215);
    r0_subfic_ra_8 = r0;
    r0 = (3 - r0_subfic_ra_8);
}

loc_800F744C:
{
    r5 = (r3 & r23);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_800F7468;
    }
}

loc_800F7460:
{
}

loc_800F7464:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F7478;
    }
}

loc_800F7468:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r22 = 1;
    r24 = (r24 + 1);
    r4 = (r4 + 1);
}

loc_800F7478:
{
    r0 = 3;
    r23_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(24));
    r23 = (r23_rot_4 & 16777215);
    r0_subfic_ra_9 = r0;
    r0 = (3 - r0_subfic_ra_9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(3) >= static_cast<uint32_t>(r0_subfic_ra_9) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_800F7488:
{
    r5 = (r3 & r23);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F74A4;
    }
}

loc_800F749C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F74A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F74AC;
    }
}

loc_800F74A4:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r24 = (r24 + 1);
}

loc_800F74AC:
{
    r0 = (r20 + r24);
    r3 = (r31 - r0);
    r19 = (r3 + 1);
    goto loc_800F74C4;
}

loc_800F74BC:
{
    r3 = 0;
    goto loc_800F7510;
}

loc_800F74C4:
{
    r0 = MemoryInline::FlatRead32(r21);
    r5 = (r24 + r19);
    r4 = (r20 + r5);
    r3 = (r20 + r24);
    r5 = (r0 - r5);
    ctx->lr = 0x800F74DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000F1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r21);
    r5 = r19;
    r4 = 32;
    r0 = (r0 - r19);
    r3 = (r20 + r0);
    ctx->lr = 0x800F74F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r21);
    r0 = (r0 - r19);
    MemoryInline::FlatWrite32(r21, r0);
}

loc_800F7500:
{
    r0 = MemoryInline::FlatRead32(r21);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r0));
}

loc_800F7508:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F710C;
    }
}

loc_800F750C:
{
    r3 = 1;
}

loc_800F7510:
{
    r11 = (r1 + 80);
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
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F70D0 func_800F70D0 preserves=true fpr_mask=0x00000000
