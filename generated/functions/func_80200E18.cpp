#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80200E18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80200E18;

loc_80200E18:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = 0;
    r26 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r27 = r4;
    r28 = r5;
    r29 = r6;
    MemoryInline::FlatWrite32(r8, r0);
    r30 = r7;
    r31 = r8;
    r3 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r3 & 8);
}

loc_80200E58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80200E6C;
    }
}

loc_80200E5C:
{
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200E60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200E6C;
    }
}

loc_80200E64:
{
    r3 = 10;
    goto loc_80201154;
}

loc_80200E6C:
{
    r4 = MemoryInline::FlatRead32((r7 + 8));
    r5 = MemoryInline::FlatRead16((r4 + 632));
    r0 = (r5 & 3);
}

loc_80200E78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80200EA0;
    }
}

loc_80200E7C:
{
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200E80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200E98;
    }
}

loc_80200E84:
{
    r0 = (r5 & 2);
}

loc_80200E88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80200EA0;
    }
}

loc_80200E8C:
{
    r0 = MemoryInline::FlatRead16((r7 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200E94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200EA0;
    }
}

loc_80200E98:
{
    r3 = 25;
    goto loc_80201154;
}

loc_80200EA0:
{
    r0 = (r3 & 4);
}

loc_80200EA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80200F4C;
    }
}

loc_80200EA8:
{
}

loc_80200EAC:
{
    r9 = MemoryInline::FlatRead32((r4 + 608));
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80200EBC;
    }
}

loc_80200EB4:
{
    r4 = 0;
    goto loc_80200EC0;
}

loc_80200EBC:
{
    r4 = MemoryInline::FlatRead32((r4 + 612));
}

loc_80200EC0:
{
    r3 = MemoryInline::FlatRead16(r4);
    r0 = MemoryInline::FlatRead32((r7 + 32));
    r3 = (r3 + -1);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r8 = (r0 & r3);
    r5 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r9 & r3);
    r6 = (0 - r8);
    r4 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r6 = (r6 | r8);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
}

loc_80200F04:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80200F10;
    }
}

loc_80200F08:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r7 + 36), r0);
}

loc_80200F10:
{
}

loc_80200F14:
{
    MemoryInline::FlatWrite32((r7 + 32), r9);
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80200F24;
    }
}

loc_80200F1C:
{
    r3 = 0;
    goto loc_80200F2C;
}

loc_80200F24:
{
    r3 = MemoryInline::FlatRead32((r7 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 612));
}

loc_80200F2C:
{
    r4 = MemoryInline::FlatRead32((r7 + 32));
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r7 + 40), r0);
    r3 = MemoryInline::FlatRead16(r3);
    r0 = (r3 + -1);
    r0 = (r4 & r0);
    MemoryInline::FlatWrite16((r7 + 44), static_cast<uint16_t>(r0));
}

loc_80200F4C:
{
    r3 = MemoryInline::FlatRead32((r7 + 8));
    r4 = (r7 + 12);
    r3 = (r3 + 4);
    // inline leaf 0x801FD640 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 44), r4);
    // end of inlined leaf 0x801FD640
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r7 = MemoryInline::FlatRead32((r3 + 608));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
}

loc_80200F6C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80201034;
    }
}

loc_80200F70:
{
    MemoryInline::FlatWrite32((r30 + 32), r7);
    r25 = (r0 - r7);
    r3 = r26;
    r5 = (r1 + 12);
    r0 = MemoryInline::FlatRead8((r26 + 32));
    r4 = -1;
    r0 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r30 + 40), r0);
    r6 = MemoryInline::FlatRead16(r26);
    r0 = (r6 + -1);
    r0 = (r7 & r0);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    ctx->lr = 0x80200FA4u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F5C48u>(ctx);
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

loc_80200FA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200FB0;
    }
}

loc_80200FAC:
{
    goto loc_80201154;
}

loc_80200FB0:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = 0;
    r5 = MemoryInline::FlatRead16(r26);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF500u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    goto loc_80201020;
}

loc_80200FC8:
{
    r5 = MemoryInline::FlatRead16(r26);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(r5));
}

loc_80200FD0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80200FF4;
    }
}

loc_80200FD4:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r30;
    r6 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    ctx->lr = 0x80200FE8u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FFF64u>(ctx);
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

loc_80200FEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201018;
    }
}

loc_80200FF0:
{
    goto loc_80201154;
}

loc_80200FF4:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r30;
    r5 = r25;
    r6 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    ctx->lr = 0x8020100Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FFF64u>(ctx);
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

loc_80201010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201028;
    }
}

loc_80201014:
{
    goto loc_80201154;
}

loc_80201018:
{
    r0 = MemoryInline::FlatRead16(r26);
    r25 = (r25 - r0);
}

loc_80201020:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80201024:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200FC8;
    }
}

loc_80201028:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F5CBCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_80201034:
{
    r5 = (r28 * r29);
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r25 = MemoryInline::FlatRead32((r30 + 32));
    r3 = r30;
    r26 = MemoryInline::FlatRead32((r4 + 608));
    r4 = r27;
    r6 = (r1 + 8);
    ctx->lr = 0x80201054u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FFF64u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r5 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
}

loc_80201060:
{
    MemoryInline::FlatWrite32(r31, r5);
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r29))) {
        goto loc_80201144;
    }
}

loc_80201068:
{
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 608));
}

loc_80201074:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r26))) {
        goto loc_80201094;
    }
}

loc_80201078:
{
    r0 = (r5 * r28);
    r0 = (r25 + r0);
}

loc_80201084:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r26))) {
        goto loc_80201090;
    }
}

loc_80201088:
{
    MemoryInline::FlatWrite32((r4 + 608), r0);
    goto loc_80201094;
}

loc_80201090:
{
    MemoryInline::FlatWrite32((r4 + 608), r26);
}

loc_80201094:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_8020109C:
{
    r0 = (r0 * r28);
    r9 = (r25 + r0);
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_802010B0;
    }
}

loc_802010A8:
{
    r5 = 0;
    goto loc_802010B8;
}

loc_802010B0:
{
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r5 = MemoryInline::FlatRead32((r4 + 612));
}

loc_802010B8:
{
    r4 = MemoryInline::FlatRead16(r5);
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r4 = (r4 + -1);
    r5 = MemoryInline::FlatRead8((r5 + 32));
    r8 = (r0 & r4);
    r6 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r4 = (r9 & r4);
    r7 = (0 - r8);
    r5 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r5));
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r7 = (r7 | r8);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r4 = (r6 + r4);
    r0 = (r5 + r0);
}

loc_802010FC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_80201108;
    }
}

loc_80201100:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 36), r0);
}

loc_80201108:
{
}

loc_8020110C:
{
    MemoryInline::FlatWrite32((r30 + 32), r9);
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8020111C;
    }
}

loc_80201114:
{
    r4 = 0;
    goto loc_80201124;
}

loc_8020111C:
{
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 612));
}

loc_80201124:
{
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r30 + 40), r0);
    r4 = MemoryInline::FlatRead16(r4);
    r0 = (r4 + -1);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
}

loc_80201144:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201150;
    }
}

loc_8020114C:
{
    goto loc_80201154;
}

loc_80201150:
{
    r3 = 0;
}

loc_80201154:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
// RECOMP_REGISTRATION base 0x80200E18 func_80200E18 preserves=true fpr_mask=0x00000000
