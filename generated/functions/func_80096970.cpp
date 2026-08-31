#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80096970(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80096970;

loc_80096970:
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
}

loc_80096988:
{
    r27 = MemoryInline::FlatRead32((r4 + 236));
    r28 = r4;
    r25 = r6;
    r29 = r7;
    r31 = (r4 + 80);
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(255))) {
        goto loc_80096F20;
    }
}

loc_800969A0:
{
    r0 = (r5 + -129);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(124));
}

loc_800969A8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_800969AC:
{
    r3 = 0x80270000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 17784);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800969ECu:
        goto loc_800969EC;
        break;
    case 0x8009716Cu:
        goto loc_8009716C;
        break;
    case 0x80096DB4u:
        goto loc_80096DB4;
        break;
    case 0x80096DF4u:
        goto loc_80096DF4;
        break;
    case 0x80096E04u:
        goto loc_80096E04;
        break;
    case 0x800969E4u:
        goto loc_800969E4;
        break;
    case 0x80096C30u:
        goto loc_80096C30;
        break;
    case 0x80096C88u:
        goto loc_80096C88;
        break;
    case 0x80096A88u:
        goto loc_80096A88;
        break;
    case 0x80096A14u:
        goto loc_80096A14;
        break;
    case 0x80096A68u:
        goto loc_80096A68;
        break;
    case 0x80096A70u:
        goto loc_80096A70;
        break;
    case 0x80096A78u:
        goto loc_80096A78;
        break;
    case 0x80096A80u:
        goto loc_80096A80;
        break;
    case 0x80096B48u:
        goto loc_80096B48;
        break;
    case 0x80096B50u:
        goto loc_80096B50;
        break;
    case 0x80096C60u:
        goto loc_80096C60;
        break;
    case 0x80096CB4u:
        goto loc_80096CB4;
        break;
    case 0x80096B6Cu:
        goto loc_80096B6C;
        break;
    case 0x80096B98u:
        goto loc_80096B98;
        break;
    case 0x80096BC4u:
        goto loc_80096BC4;
        break;
    case 0x80096BCCu:
        goto loc_80096BCC;
        break;
    case 0x80096CCCu:
        goto loc_80096CCC;
        break;
    case 0x80096B64u:
        goto loc_80096B64;
        break;
    case 0x80096C10u:
        goto loc_80096C10;
        break;
    case 0x80096C18u:
        goto loc_80096C18;
        break;
    case 0x80096C20u:
        goto loc_80096C20;
        break;
    case 0x80096C28u:
        goto loc_80096C28;
        break;
    case 0x80096E94u:
        goto loc_80096E94;
        break;
    case 0x80096A60u:
        goto loc_80096A60;
        break;
    case 0x80096D08u:
        goto loc_80096D08;
        break;
    case 0x80096AF0u:
        goto loc_80096AF0;
        break;
    case 0x80096CE0u:
        goto loc_80096CE0;
        break;
    case 0x80096CE8u:
        goto loc_80096CE8;
        break;
    case 0x80096CF0u:
        goto loc_80096CF0;
        break;
    case 0x80096D00u:
        goto loc_80096D00;
        break;
    case 0x80096AE4u:
        goto loc_80096AE4;
        break;
    case 0x80096A04u:
        goto loc_80096A04;
        break;
    case 0x80096CF8u:
        goto loc_80096CF8;
        break;
    case 0x80096C3Cu:
        goto loc_80096C3C;
        break;
    case 0x80096BD4u:
        goto loc_80096BD4;
        break;
    case 0x800969C4u:
        goto loc_800969C4;
        break;
    case 0x80096BE4u:
        goto loc_80096BE4;
        break;
    case 0x80096ECCu:
        goto loc_80096ECC;
        break;
    case 0x80096E44u:
        goto loc_80096E44;
        break;
    default:
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800969C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1023));
}

loc_800969C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800969D4;
    }
}

loc_800969CC:
{
    r0 = 1023;
    goto loc_800969DC;
}

loc_800969D4:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r6) >> 31);
    r0 = (r6 & ~r0);
}

loc_800969DC:
{
    MemoryInline::FlatWrite16((r27 + 264), static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_800969E4:
{
    MemoryInline::FlatWrite8((r27 + 262), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_800969EC:
{
    r0 = 65536;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_800969F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009716C;
    }
}

loc_800969F8:
{
    r0 = (r6 & 65535);
    MemoryInline::FlatWrite32((r31 + 56), r0);
    goto loc_8009716C;
}

loc_80096A04:
{
    r3 = r28;
    r4 = r25;
    ctx->lr = 0x80096A10u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009BD00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8009716C;
}

loc_80096A14:
{
    r4 = MemoryInline::FlatRead16((r31 + 86));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead16((r31 + 88));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r4));
}

loc_80096A20:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80096A2C;
    }
}

loc_80096A24:
{
    r3 = MemoryInline::FlatRead8((r31 + 85));
    goto loc_80096A48;
}

loc_80096A2C:
{
    r5 = MemoryInline::FlatRead8((r31 + 84));
    r0 = MemoryInline::FlatRead8((r31 + 85));
    r0 = (r0 - r5);
    r0 = (r3 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (r5 + r0);
    r3 = (r0 & 255);
}

loc_80096A48:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 85), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite16((r31 + 86), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r31 + 88), static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80096A60:
{
    MemoryInline::FlatWrite8((r31 + 102), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096A68:
{
    MemoryInline::FlatWrite8((r27 + 260), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096A70:
{
    MemoryInline::FlatWrite8((r31 + 106), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096A78:
{
    MemoryInline::FlatWrite8((r31 + 103), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096A80:
{
    MemoryInline::FlatWrite8((r31 + 104), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096A88:
{
    r5 = MemoryInline::FlatRead16((r31 + 92));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead16((r31 + 94));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_80096A94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80096AA4;
    }
}

loc_80096A98:
{
    r0 = MemoryInline::FlatRead8((r31 + 91));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_80096AC8;
}

loc_80096AA4:
{
    r8 = MemoryInline::FlatRead8((r31 + 90));
    r0 = MemoryInline::FlatRead8((r31 + 91));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 - r3);
    r0 = (r4 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r5));
    r0 = (r8 + r0);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80096AC8:
{
    r3 = (r6 + -64);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 90), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 91), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r31 + 92), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r31 + 94), static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80096AE4:
{
    r0 = (r6 + -64);
    MemoryInline::FlatWrite8((r31 + 105), static_cast<uint8_t>(r0));
    goto loc_8009716C;
}

loc_80096AF0:
{
    r5 = MemoryInline::FlatRead16((r31 + 98));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead16((r31 + 100));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_80096AFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80096B0C;
    }
}

loc_80096B00:
{
    r0 = MemoryInline::FlatRead8((r31 + 97));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_80096B30;
}

loc_80096B0C:
{
    r8 = MemoryInline::FlatRead8((r31 + 96));
    r0 = MemoryInline::FlatRead8((r31 + 97));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 - r3);
    r0 = (r4 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r5));
    r0 = (r8 + r0);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80096B30:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 97), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite16((r31 + 98), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r31 + 100), static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80096B48:
{
    MemoryInline::FlatWrite8((r31 + 107), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096B50:
{
    r0 = (0 - r6);
    r0 = (r0 | r6);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
    goto loc_8009716C;
}

loc_80096B64:
{
    MemoryInline::FlatWrite8((r31 + 109), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096B6C:
{
    r3 = (r6 & 255);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28320));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28336));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
    goto loc_8009716C;
}

loc_80096B98:
{
    r3 = (r6 & 255);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28320));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28332));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
    goto loc_8009716C;
}

loc_80096BC4:
{
    MemoryInline::FlatWrite8((r31 + 76), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096BCC:
{
    MemoryInline::FlatWrite8((r31 + 72), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096BD4:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0 = (r0 + r6);
    MemoryInline::FlatWrite32((r31 + 68), r0);
    goto loc_8009716C;
}

loc_80096BE4:
{
    r3 = (r6 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28312));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28328));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
    goto loc_8009716C;
}

loc_80096C10:
{
    MemoryInline::FlatWrite8((r31 + 110), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096C18:
{
    MemoryInline::FlatWrite8((r31 + 111), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096C20:
{
    MemoryInline::FlatWrite8((r31 + 112), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096C28:
{
    MemoryInline::FlatWrite8((r31 + 113), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096C30:
{
    r0 = (r6 & 255);
    MemoryInline::FlatWrite16((r31 + 114), static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80096C3C:
{
    r4 = (r6 & 255);
    r3 = 64;
    r0 = (r4 + -64);
    r3 = (r4 | ~r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r3 - r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    MemoryInline::FlatWrite8((r31 + 48), static_cast<uint8_t>(r0));
    goto loc_8009716C;
}

loc_80096C60:
{
    r0 = (0 - r6);
    r3 = r28;
    r0 = (r0 | r6);
    r4 = -1;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    ctx->lr = 0x80096C7Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009B4A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r28;
    ctx->lr = 0x80096C84u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009BBA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8009716C;
}

loc_80096C88:
{
    r0 = (0 - r6);
    r0 = (r0 | r6);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80096C94:
{
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096C9C:
{
    r3 = r28;
    r4 = -1;
    ctx->lr = 0x80096CA8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009B4A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r28;
    ctx->lr = 0x80096CB0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009BBA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8009716C;
}

loc_80096CB4:
{
    r3 = MemoryInline::FlatRead8((r31 + 106));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 47), static_cast<uint8_t>(r0));
    r0 = (r6 + r3);
    MemoryInline::FlatWrite8((r31 + 108), static_cast<uint8_t>(r0));
    goto loc_8009716C;
}

loc_80096CCC:
{
    r0 = (0 - r6);
    r0 = (r0 | r6);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    MemoryInline::FlatWrite8((r31 + 47), static_cast<uint8_t>(r0));
    goto loc_8009716C;
}

loc_80096CE0:
{
    MemoryInline::FlatWrite8((r31 + 120), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096CE8:
{
    MemoryInline::FlatWrite8((r31 + 117), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096CF0:
{
    MemoryInline::FlatWrite8((r31 + 118), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096CF8:
{
    MemoryInline::FlatWrite8((r31 + 119), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096D00:
{
    MemoryInline::FlatWrite8((r31 + 116), static_cast<uint8_t>(r6));
    goto loc_8009716C;
}

loc_80096D08:
{
    r0 = MemoryInline::FlatRead8((r13 + -27184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80096D10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096D14:
{
}

loc_80096D18:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(32))) {
        goto loc_80096D30;
    }
}

loc_80096D1C:
{
    r3 = r27;
    r4 = r25;
    // inline leaf 0x80099D50 (15 guest instruction(s))
}

loc_inl1_0x80099D50:
{
}

loc_inl1_0x80099D54:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(16))) {
        goto loc_inl1_0x80099D68;
    }
}

loc_inl1_0x80099D58:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3 = (r3 + r0);
    r3 = (r3 + 340);
    goto loc_inl1_cont_80099D50;
}

loc_inl1_0x80099D68:
{
}

loc_inl1_0x80099D6C:
{
    r3 = 0;
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(32))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80099D74:
{
    r0 = (r4 + -16);
    r3 = 0x802D0000u;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = (r3 + 23432);
    r3 = (r3 + r0);
    goto loc_inl1_cont_80099D50;
}

loc_inl1_return:
{
}

loc_inl1_cont_80099D50:
{
    // end of inlined leaf 0x80099D50
    r4 = r3;
    goto loc_80096D50;
}

loc_80096D30:
{
}

loc_80096D34:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(48))) {
        goto loc_80096D48;
    }
}

loc_80096D38:
{
    r3 = r28;
    r4 = (r6 + -32);
    // inline leaf 0x8009BE90 (8 guest instruction(s))
}

loc_inl2_0x8009BE90:
{
}

loc_inl2_0x8009BE94:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(16))) {
        goto loc_inl2_0x8009BEA8;
    }
}

loc_inl2_0x8009BE98:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r3 = (r3 + r0);
    r3 = (r3 + 204);
    goto loc_inl2_cont_8009BE90;
}

loc_inl2_0x8009BEA8:
{
    r3 = 0;
}

loc_inl2_cont_8009BE90:
{
    // end of inlined leaf 0x8009BE90
    goto loc_80096D4C;
}

loc_80096D48:
{
    r3 = 0;
}

loc_80096D4C:
{
    r4 = r3;
}

loc_80096D50:
{
}

loc_80096D54:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(32))) {
        goto loc_80096D60;
    }
}

loc_80096D58:
{
    r7 = (r25 + -32);
    goto loc_80096D70;
}

loc_80096D60:
{
}

loc_80096D64:
{
    r7 = r25;
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(16))) {
        goto loc_80096D70;
    }
}

loc_80096D6C:
{
    r7 = (r25 + -16);
}

loc_80096D70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(32));
}

loc_80096D74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80096D80;
    }
}

loc_80096D78:
{
    r6 = (r13 + -32344);
    goto loc_80096D90;
}

loc_80096D80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(16));
}

loc_80096D84:
{
    r6 = (r13 + -32336);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80096D90;
    }
}

loc_80096D8C:
{
    r6 = (r13 + -32340);
}

loc_80096D90:
{
    r3 = 0x80270000u;
    r9 = MemoryInline::FlatRead16(r4);
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = MemoryInline::FlatRead8((r28 + 4));
    r4 = r27;
    r8 = r25;
    r3 = (r3 + 17656);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80096DB0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8009716C;
}

loc_80096DB4:
{
    r3 = r27;
    r4 = r25;
    // inline leaf 0x80099C00 (8 guest instruction(s))
}

loc_inl3_0x80099C00:
{
}

loc_inl3_0x80099C04:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(15))) {
        goto loc_inl3_0x80099C10;
    }
}

loc_inl3_0x80099C08:
{
    r3 = 0;
    goto loc_inl3_cont_80099C00;
}

loc_inl3_0x80099C10:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 276));
}

loc_inl3_cont_80099C00:
{
    // end of inlined leaf 0x80099C00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80096DC4:
{
    r27 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096DCC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_80096DD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096DD4:
{
    ctx->lr = 0x80096DD8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8009B180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r31);
    r3 = r27;
    r5 = r29;
    // inline leaf 0x8009B150 (4 guest instruction(s))
    r0 = (r4 + r5);
    MemoryInline::FlatWrite32((r3 + 80), r4);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    // end of inlined leaf 0x8009B150
    r3 = r27;
    // inline leaf 0x8009B160 (7 guest instruction(s))
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 126), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 116), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r3 + 120), r4);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8009B160
    goto loc_8009716C;
}

loc_80096DF4:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 + r6);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_8009716C;
}

loc_80096E04:
{
    r0 = MemoryInline::FlatRead8((r31 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80096E0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009716C;
    }
}

loc_80096E10:
{
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_18 & 2040);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 16), r3);
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 12), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 36));
    r0 = MemoryInline::FlatRead32(r31);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 36), static_cast<uint8_t>(r3));
    r0 = (r0 + r6);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_8009716C;
}

loc_80096E44:
{
    r4 = 0;
    goto loc_80096E74;
}

loc_80096E4C:
{
    r3 = MemoryInline::FlatRead8((r31 + 36));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 36), static_cast<uint8_t>(r0));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_20 & 2040);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_80096E68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80096E74;
    }
}

loc_80096E6C:
{
    r4 = (r3 + 12);
    goto loc_80096E80;
}

loc_80096E74:
{
    r0 = MemoryInline::FlatRead8((r31 + 36));
}

loc_80096E7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80096E4C;
    }
}

loc_80096E80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80096E84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096E88:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_8009716C;
}

loc_80096E94:
{
    r0 = MemoryInline::FlatRead8((r31 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80096E9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009716C;
    }
}

loc_80096EA0:
{
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_22 & 2040);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 16), r3);
    r0 = 1;
    MemoryInline::FlatWrite8((r4 + 13), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r4 + 12), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 36));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 36), static_cast<uint8_t>(r0));
    goto loc_8009716C;
}

loc_80096ECC:
{
    r3 = MemoryInline::FlatRead8((r31 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80096ED4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096ED8:
{
    r4 = (r3 + -1);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_23 & -8);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80096EEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096EF0:
{
    r5 = MemoryInline::FlatRead8((r3 + 13));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80096EF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80096F10;
    }
}

loc_80096EFC:
{
    r5 = (r5 + -1);
    r0 = (r5 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80096F04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80096F10;
    }
}

loc_80096F08:
{
    MemoryInline::FlatWrite8((r31 + 36), static_cast<uint8_t>(r4));
    goto loc_8009716C;
}

loc_80096F10:
{
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_8009716C;
}

loc_80096F20:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(65535));
}

loc_80096F24:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096F28:
{
    r0 = (r5 & 240);
    r26 = (r5 & 255);
}

loc_80096F34:
{
    r30 = 0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(128))) {
        goto loc_80096F44;
    }
}

loc_80096F3C:
{
}

loc_80096F40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(144))) {
        goto loc_80096F84;
    }
}

loc_80096F44:
{
}

loc_80096F48:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(32))) {
        goto loc_80096F5C;
    }
}

loc_80096F4C:
{
    r3 = r27;
    r4 = r25;
    // inline leaf 0x80099D50 (15 guest instruction(s))
}

loc_inl6_0x80099D50:
{
}

loc_inl6_0x80099D54:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(16))) {
        goto loc_inl6_0x80099D68;
    }
}

loc_inl6_0x80099D58:
{
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_24 & -2);
    r3 = (r3 + r0);
    r3 = (r3 + 340);
    goto loc_inl6_cont_80099D50;
}

loc_inl6_0x80099D68:
{
}

loc_inl6_0x80099D6C:
{
    r3 = 0;
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(32))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80099D74:
{
    r0 = (r4 + -16);
    r3 = 0x802D0000u;
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_25 & -2);
    r3 = (r3 + 23432);
    r3 = (r3 + r0);
    goto loc_inl6_cont_80099D50;
}

loc_inl6_return:
{
}

loc_inl6_cont_80099D50:
{
    // end of inlined leaf 0x80099D50
    goto loc_80096F78;
}

loc_80096F5C:
{
}

loc_80096F60:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(48))) {
        goto loc_80096F74;
    }
}

loc_80096F64:
{
    r3 = r28;
    r4 = (r6 + -32);
    // inline leaf 0x8009BE90 (8 guest instruction(s))
}

loc_inl7_0x8009BE90:
{
}

loc_inl7_0x8009BE94:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(16))) {
        goto loc_inl7_0x8009BEA8;
    }
}

loc_inl7_0x8009BE98:
{
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_27 & -2);
    r3 = (r3 + r0);
    r3 = (r3 + 204);
    goto loc_inl7_cont_8009BE90;
}

loc_inl7_0x8009BEA8:
{
    r3 = 0;
}

loc_inl7_cont_8009BE90:
{
    // end of inlined leaf 0x8009BE90
    goto loc_80096F78;
}

loc_80096F74:
{
    r3 = 0;
}

loc_80096F78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80096F7C:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096F84:
{
    r0 = (r26 + -128);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
}

loc_80096F8C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096F90:
{
    r3 = 0x80270000u;
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r3 = (r3 + 17696);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80096FA8u:
        goto loc_80096FA8;
        break;
    case 0x80096FB0u:
        goto loc_80096FB0;
        break;
    case 0x80096FC0u:
        goto loc_80096FC0;
        break;
    case 0x80096FD0u:
        goto loc_80096FD0;
        break;
    case 0x80096FE0u:
        goto loc_80096FE0;
        break;
    case 0x80096FF8u:
        goto loc_80096FF8;
        break;
    case 0x80097024u:
        goto loc_80097024;
        break;
    case 0x80097064u:
        goto loc_80097064;
        break;
    case 0x80097074u:
        goto loc_80097074;
        break;
    case 0x80097084u:
        goto loc_80097084;
        break;
    case 0x80097094u:
        goto loc_80097094;
        break;
    case 0x800970A4u:
        goto loc_800970A4;
        break;
    case 0x8009716Cu:
        goto loc_8009716C;
        break;
    case 0x800970C4u:
        goto loc_800970C4;
        break;
    case 0x800970DCu:
        goto loc_800970DC;
        break;
    case 0x800970F8u:
        goto loc_800970F8;
        break;
    case 0x80097118u:
        goto loc_80097118;
        break;
    case 0x80097134u:
        goto loc_80097134;
        break;
    case 0x80097154u:
        goto loc_80097154;
        break;
    default:
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80096FA8:
{
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r29));
    goto loc_8009716C;
}

loc_80096FB0:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r29);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80096FC0:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r29);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80096FD0:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * r29);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80096FE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80096FE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_80096FE8:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r29));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80096FF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80096FFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80097010;
    }
}

loc_80097000:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80097010:
{
    r3 = MemoryInline::FlatRead16(r30);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r29);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r0) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80097024:
{
}

loc_80097028:
{
    r26 = 0;
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_8009703C;
    }
}

loc_80097030:
{
    r0 = (0 - r29);
    r26 = 1;
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8009703C:
{
    // inline leaf 0x800AD050 (9 guest instruction(s))
    r3 = 1638400;
    r4 = MemoryInline::FlatRead32((r13 + -32320));
    r0 = (r3 + 26125);
    r3 = (r4 * r0);
    r3 = (r3 + 1013907456);
    r0 = (r3 + -3233);
    MemoryInline::FlatWrite32((r13 + -32320), r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 65535);
    // end of inlined leaf 0x800AD050
    r3 = (r3 & 65535);
    r0 = (r29 + 1);
    r3 = (r3 * r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80097050:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 16);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009705C;
    }
}

loc_80097058:
{
    r3 = (0 - r3);
}

loc_8009705C:
{
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r3));
    goto loc_8009716C;
}

loc_80097064:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & r29);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80097074:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 | r29);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80097084:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ r29);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_80097094:
{
    r0 = (r29 & 65535);
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_800970A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800970A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009716C;
    }
}

loc_800970AC:
{
    r3 = MemoryInline::FlatRead16(r30);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r29));
    r0 = (r0 * r29);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_8009716C;
}

loc_800970C4:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r29 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_32 & 134217727);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    goto loc_8009716C;
}

loc_800970DC:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r4 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r4 + r3);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    goto loc_8009716C;
}

loc_800970F8:
{
    r4 = MemoryInline::FlatRead16(r30);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 ^ r29);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r4);
    r0 = (r3 - r0);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_33 & 1);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    goto loc_8009716C;
}

loc_80097118:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (static_cast<int32_t>(r29) >> 31);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0_subfc_sub_1 = r0;
    r0 = (r29 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r4 + r3);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    goto loc_8009716C;
}

loc_80097134:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r29 ^ r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r29);
    r0 = (r3 - r0);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_34 & 1);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
    goto loc_8009716C;
}

loc_80097154:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r29 - r0);
    r0 = (r0 - r29);
    r0 = (r3 | r0);
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_35 & 1);
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
}

loc_8009716C:
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80096970 func_80096970 preserves=true fpr_mask=0x00000000
