#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_806212FC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_806212FC_statefree_v0(uint32_t, uint32_t);

extern "C" void func_80669D0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_addc_right_3 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_adde_left_3 = 0;
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r28_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r5_stbu_ea_4 = 0;
    uint32_t r5_stbu_ea_5 = 0;
    uint32_t r5_stbu_ea_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80669D0C;

loc_80669D0C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -624), 0, 632u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -624), r1);
    r1 = (r1 + -624);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 628u, (r1 + 628), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 600u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 600u, (r1 + 600), r26);
        MemoryInline::WriteResolved32(guest_range_3, 604u, (r1 + 604), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 608u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 608u, (r1 + 608), r28);
        MemoryInline::WriteResolved32(guest_range_3, 612u, (r1 + 612), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 616u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 616u, (r1 + 616), r30);
        MemoryInline::WriteResolved32(guest_range_3, 620u, (r1 + 620), r31);
    }
    r26 = 0x809C0000u;
    r27 = r3;
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    ctx->lr = 0x80669D2Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80677240u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    // inline leaf 0x80677228 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80677228
}

loc_80669D38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80669D94;
    }
}

loc_80669D3C:
{
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    // inline leaf 0x80677230 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80677230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_80669D48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80669D6C;
    }
}

loc_80669D4C:
{
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    // inline leaf 0x80677230 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80677230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_80669D58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80669D6C;
    }
}

loc_80669D5C:
{
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    // inline leaf 0x80677230 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80677230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_80669D68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80669D94;
    }
}

loc_80669D6C:
{
    r3 = r27;
    ctx->lr = 0x80669D74u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067552Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8512));
    ctx->lr = 0x80669D80u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067721Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite32((r27 + 16), r0);
    goto loc_8066AD88;
}

loc_80669D94:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80669DA4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80669DC4;
    }
}

loc_80669DA8:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r3 + r0);
    r30 = (r4 + 56);
    goto loc_80669DC8;
}

loc_80669DC4:
{
    r30 = 0;
}

loc_80669DC8:
{
    r0 = MemoryInline::FlatRead32((r27 + 16896));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_80669DD0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8066AD88;
    }
}

loc_80669DD4:
{
    r4 = 0x808C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + 3612);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80669DECu:
        goto loc_80669DEC;
        break;
    case 0x80669E5Cu:
        goto loc_80669E5C;
        break;
    case 0x8066A050u:
        goto loc_8066A050;
        break;
    case 0x8066A118u:
        goto loc_8066A118;
        break;
    case 0x8066A1D8u:
        goto loc_8066A1D8;
        break;
    case 0x8066A3A4u:
        goto loc_8066A3A4;
        break;
    case 0x8066A440u:
        goto loc_8066A440;
        break;
    case 0x8066A7BCu:
        goto loc_8066A7BC;
        break;
    case 0x8066AA74u:
        goto loc_8066AA74;
        break;
    case 0x8066AAD8u:
        goto loc_8066AAD8;
        break;
    case 0x8066AD28u:
        goto loc_8066AD28;
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80669DEC:
{
    r26 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    // inline leaf 0x80677228 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80677228
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80669DFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AD88;
    }
}

loc_80669E00:
{
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    // inline leaf 0x80677230 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80677230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80669E0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80669E48;
    }
}

loc_80669E10:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = (r27 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + 8464));
    r4 = (r27 + 19729);
    r7 = MemoryInline::FlatRead16((r5 + 54));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r5 = 76;
    r6 = MemoryInline::FlatRead32((r3 + 120));
    r3 = (r7 * 80);
    r3 = (r0 + r3);
    MemoryInline::FlatWrite32((r3 + -30276), r6);
    r3 = (r3 + -30272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80669E48:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 16904), r3);
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_80669E5C:
{
    r29 = MemoryInline::FlatRead32((r27 + 16904));
    r26 = 1;
    r0 = (r29 * 448);
    r31 = (r27 + r0);
    goto loc_80669F6C;
}

loc_80669E70:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 & 65535);
}

loc_80669E80:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_80669EA8;
    }
}

loc_80669E84:
{
    r4 = (r30 + 65536);
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r4 + -28660));
    r0 = PPC_Slw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r0));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    goto loc_80669EAC;
}

loc_80669EA8:
{
    r0 = 0;
}

loc_80669EAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80669EB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80669F64;
    }
}

loc_80669EB4:
{
    r3 = r30;
    r5 = r29;
    r4 = 0;
    ctx->lr = 0x80669EC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80548E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r27 + 16884));
}

loc_80669ECC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80669F28;
    }
}

loc_80669ED0:
{
    r0 = MemoryInline::FlatRead16((r3 + 80));
    r4 = MemoryInline::FlatRead8((r3 + 82));
    r0 = (r0 * 60);
    r5 = MemoryInline::FlatRead32((r31 + 2512));
    r3 = MemoryInline::FlatRead16((r3 + 84));
}

loc_80669EE8:
{
    r0 = (r4 + r0);
    r0 = (r0 * 1000);
    r3 = (r3 + r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80669F04;
    }
}

loc_80669EF8:
{
    r4 = MemoryInline::FlatRead32((r31 + 2288));
}

loc_80669F00:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80669F0C;
    }
}

loc_80669F04:
{
    r0 = 1;
    goto loc_80669F2C;
}

loc_80669F0C:
{
}

loc_80669F10:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r3))) {
        goto loc_80669F20;
    }
}

loc_80669F18:
{
}

loc_80669F1C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r3))) {
        goto loc_80669F2C;
    }
}

loc_80669F20:
{
    r0 = 1;
    goto loc_80669F2C;
}

loc_80669F28:
{
    r0 = 1;
}

loc_80669F2C:
{
}

loc_80669F30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80669F64;
    }
}

loc_80669F34:
{
    r3 = 0x809C0000u;
    r6 = r29;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r4 = 0;
    r5 = 0;
    r7 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621C3C (15 guest instruction(s))
}

loc_inl6_0x80621C3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl6_0x80621C44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80621C48:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl6_0x80621C50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80621C54:
{
    r8 = 1;
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r3 + 252), r0);
    MemoryInline::FlatWrite32((r3 + 256), r4);
    MemoryInline::FlatWrite8((r3 + 260), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 264), r6);
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r7));
    goto loc_inl6_cont_80621C3C;
}

loc_inl6_return:
{
}

loc_inl6_cont_80621C3C:
{
    // end of inlined leaf 0x80621C3C
    r0 = 2;
    MemoryInline::FlatWrite32((r27 + 16904), r29);
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_80669F64:
{
    r31 = (r31 + 448);
    r29 = (r29 + 1);
}

loc_80669F6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(32));
}

loc_80669F70:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80669E70;
    }
}

loc_80669F74:
{
    r28 = 1;
    MemoryInline::FlatWrite8((r27 + 16908), static_cast<uint8_t>(r28));
    r3 = (r1 + 64);
    ctx->lr = 0x80669F84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80555464u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r26 = (r30 + 65536);
    r29 = (r1 + 472);
    r30 = 0;
    r31 = 0;
}

loc_80669F94:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 & 65535);
}

loc_80669FA4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_80669FC8;
    }
}

loc_80669FA8:
{
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r26 + -28660));
    r0 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    goto loc_80669FCC;
}

loc_80669FC8:
{
    r0 = 0;
}

loc_80669FCC:
{
}

loc_80669FD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80669FE0;
    }
}

loc_80669FD4:
{
    MemoryInline::FlatWrite32(r29, r31);
    r29 = (r29 + 4);
    r30 = (r30 + 1);
}

loc_80669FE0:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(32));
}

loc_80669FE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80669F94;
    }
}

loc_80669FEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80669FF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066A000;
    }
}

loc_80669FF4:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066A040;
}

loc_8066A000:
{
    r4 = r30;
    r3 = (r1 + 64);
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_1 = r0;
    r0 = (r8 + r0_addc_right_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_1 + r6);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r1 + 472);
    r3_addr_1 = (r3 + r0);
    r6 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite32((r27 + 16904), r6);
    r4 = 0;
    r5 = 0;
    r7 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621C3C (15 guest instruction(s))
}

loc_inl8_0x80621C3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl8_0x80621C44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x80621C48:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl8_0x80621C50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x80621C54:
{
    r8 = 1;
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r3 + 252), r0);
    MemoryInline::FlatWrite32((r3 + 256), r4);
    MemoryInline::FlatWrite8((r3 + 260), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 264), r6);
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r7));
    goto loc_inl8_cont_80621C3C;
}

loc_inl8_return:
{
}

loc_inl8_cont_80621C3C:
{
    // end of inlined leaf 0x80621C3C
    r0 = 2;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
}

loc_8066A040:
{
    r3 = (r1 + 64);
    r4 = -1;
    ctx->lr = 0x8066A04Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80555538u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8066AD88;
}

loc_8066A050:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x806212FCu) && KnownTranslatedCpuCall<0x806212FCu>::kAvailable && !KnownTranslatedCpuCall<0x806212FCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x806212FCu>()) {
        const auto state_free_result_806212FC_637F = func_806212FC_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_806212FC_637F[0]);
        r3 = static_cast<uint32_t>(state_free_result_806212FC_637F[1]);
    } else {
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
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x806212FCu>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A064:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066AD88;
    }
}

loc_8066A068:
{
    r3 = 0x809C0000u;
    r26 = MemoryInline::FlatRead32((r3 + -10424));
    r3 = MemoryInline::FlatRead32((r26 + 24));
    ctx->lr = 0x8066A078u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8051C120u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A07C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A088;
    }
}

loc_8066A080:
{
    r3 = MemoryInline::FlatRead32((r26 + 24));
    goto loc_8066A08C;
}

loc_8066A088:
{
    r3 = 0;
}

loc_8066A08C:
{
    ctx->lr = 0x8066A090u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8051C120u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A094:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A100;
    }
}

loc_8066A098:
{
    r26 = MemoryInline::FlatRead32((r27 + 16904));
    r3 = r30;
    r4 = 0;
    r5 = r26;
    ctx->lr = 0x8066A0ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80548E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r5 = r3;
    r3 = r27;
    r7 = r26;
    r4 = (r27 + 19825);
    r6 = (r27 + 19729);
    ctx->lr = 0x8066A0C4u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066AD9Cu>(ctx);
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

loc_8066A0C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A0D8;
    }
}

loc_8066A0CC:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066A0D8:
{
    r3 = r27;
    ctx->lr = 0x8066A0E0u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067552Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8512));
    ctx->lr = 0x8066A0ECu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067721Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite32((r27 + 16), r0);
    goto loc_8066AD88;
}

loc_8066A100:
{
    r3 = MemoryInline::FlatRead32((r27 + 16904));
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 16904), r0);
    goto loc_8066AD88;
}

loc_8066A118:
{
    r26 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    // inline leaf 0x80677228 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80677228
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8066A128:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AD88;
    }
}

loc_8066A12C:
{
    r3 = MemoryInline::FlatRead32((r26 + 8512));
    // inline leaf 0x80677230 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80677230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8066A138:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066A1A8;
    }
}

loc_8066A13C:
{
    r3 = MemoryInline::FlatRead32((r27 + 16904));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_8066A14C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8066A16C;
    }
}

loc_8066A150:
{
    r5 = (r30 + 65536);
    r0 = (r3 & 255);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r5 + -28660));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite32((r5 + -28660), r0);
}

loc_8066A16C:
{
    r3 = MemoryInline::FlatRead32((r27 + 16904));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 & 65535);
}

loc_8066A17C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_8066A19C;
    }
}

loc_8066A180:
{
    r5 = (r30 + 65536);
    r0 = (r3 & 255);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r5 + -28656));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite32((r5 + -28656), r0);
}

loc_8066A19C:
{
    r3 = MemoryInline::FlatRead32((r27 + 16900));
    r0 = 1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_8066A1A8:
{
    r0 = MemoryInline::FlatRead8((r27 + 16908));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066A1B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A1C0;
    }
}

loc_8066A1B4:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066A1C0:
{
    r3 = MemoryInline::FlatRead32((r27 + 16904));
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 16904), r0);
    goto loc_8066AD88;
}

loc_8066A1D8:
{
    r3 = (r1 + 392);
    r4 = (r27 + 19729);
    r5 = 76;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = (r1 + 20);
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054A9B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A1FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A208;
    }
}

loc_8066A200:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    goto loc_8066A20C;
}

loc_8066A208:
{
    r0 = 0;
}

loc_8066A20C:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_10 & 255);
    MemoryInline::FlatWriteRam8((r1 + 471), static_cast<uint8_t>(r0));
    r0 = 0;
    r29 = (r27 + 16909);
    MemoryInline::FlatWrite32((r27 + 16909), r0);
    r28 = 0;
    r31 = 1;
    r26 = 38;
}

loc_8066A22C:
{
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 & 65535);
}

loc_8066A23C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_8066A264;
    }
}

loc_8066A240:
{
    r4 = (r30 + 65536);
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r4 + -28656));
    r0 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & 1);
    goto loc_8066A268;
}

loc_8066A264:
{
    r0 = 0;
}

loc_8066A268:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066A26C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A334;
    }
}

loc_8066A270:
{
    r3 = r30;
    r5 = r28;
    r4 = 0;
    ctx->lr = 0x8066A280u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80548E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 391);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r5 = (r29 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r28);
    r5 = MemoryInline::FlatRead16((r3 + 80));
    r0 = MemoryInline::FlatRead32(r29);
    r5 = (r5 * 60);
    r6 = MemoryInline::FlatRead8((r3 + 82));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r7 = MemoryInline::FlatRead16((r3 + 84));
    r6 = (r6 + r5);
    r5 = (r29 + r0);
    r0 = (r6 * 1000);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r5 + 132), r0);
    r0 = MemoryInline::FlatRead32((r3 + 96));
    MemoryInline::FlatWriteRam8((r1 + 468), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 88));
    MemoryInline::FlatWriteRam8((r1 + 469), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 92));
    MemoryInline::FlatWriteRam8((r1 + 470), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 * 80);
    r6 = (r29 + r0);
    r5 = (r6 + 259);
    ctr = r26;
}

loc_8066A2EC:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_3 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_3, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_3;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8066A2EC;
    }
}

loc_8066A300:
{
    r0 = MemoryInline::FlatRead8((r1 + 468));
    MemoryInline::FlatWrite8((r6 + 336), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 469));
    MemoryInline::FlatWrite8((r6 + 337), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 470));
    MemoryInline::FlatWrite8((r6 + 338), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 471));
    MemoryInline::FlatWrite8((r6 + 339), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r29, r0);
}

loc_8066A330:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(16))) {
        goto loc_8066A340;
    }
}

loc_8066A334:
{
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(32));
}

loc_8066A33C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066A22C;
    }
}

loc_8066A340:
{
    r0 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066A348:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8066A398;
    }
}

loc_8066A34C:
{
    r28 = 0x809C0000u;
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r28 + 8512));
    r5 = 0;
    ctx->lr = 0x8066A360u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806775E4u>(ctx);
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

loc_8066A364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A374;
    }
}

loc_8066A368:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066A374:
{
    r3 = r27;
    ctx->lr = 0x8066A37Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067552Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 8512));
    ctx->lr = 0x8066A384u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067721Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite32((r27 + 16), r0);
    goto loc_8066AD88;
}

loc_8066A398:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066A3A4:
{
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + 8512));
    // inline leaf 0x80677228 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80677228
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8066A3B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AD88;
    }
}

loc_8066A3B8:
{
    r3 = MemoryInline::FlatRead32((r28 + 8512));
    // inline leaf 0x80677230 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80677230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8066A3C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066A434;
    }
}

loc_8066A3C8:
{
    r31 = (r27 + 16909);
    r29 = (r30 + 65536);
    r26 = r31;
    r30 = 0;
    r28 = 1;
    goto loc_8066A410;
}

loc_8066A3E0:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 & 65535);
}

loc_8066A3F0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_8066A408;
    }
}

loc_8066A3F4:
{
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r29 + -28656));
    r0 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
    r0 = (r3 & ~r0);
    MemoryInline::FlatWrite32((r29 + -28656), r0);
}

loc_8066A408:
{
    r26 = (r26 + 4);
    r30 = (r30 + 1);
}

loc_8066A410:
{
    r0 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_8066A418:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066A3E0;
    }
}

loc_8066A41C:
{
    r3 = MemoryInline::FlatRead32((r27 + 16900));
    r4 = 1;
    r0 = 4;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066A434:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066A440:
{
    r4 = 0x808B0000u;
    r0 = 0;
    r4 = (r4 + 11588);
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r0));
    r28 = 0;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    MemoryInline::FlatWriteRam32((r1 + 364), r4);
    MemoryInline::FlatWriteRam16((r1 + 368), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 370), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 372), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 374), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8066A474:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8066A494;
    }
}

loc_8066A478:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r3 + r0);
    r6 = (r4 + 56);
    goto loc_8066A498;
}

loc_8066A494:
{
    r6 = 0;
}

loc_8066A498:
{
    r0 = MemoryInline::FlatRead32((r27 + 16884));
}

loc_8066A4A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8066A4E0;
    }
}

loc_8066A4A4:
{
    r4 = (r27 + 65536);
    r0 = MemoryInline::FlatRead32((r27 + 88));
    r4 = MemoryInline::FlatRead32((r4 + -29952));
}

loc_8066A4B4:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_8066A4E0;
    }
}

loc_8066A4B8:
{
    r0 = MemoryInline::FlatRead8((r27 + 85));
}

loc_8066A4C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8066A4D0;
    }
}

loc_8066A4C4:
{
}

loc_8066A4C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8066A4D8;
    }
}

loc_8066A4CC:
{
    goto loc_8066A4E0;
}

loc_8066A4D0:
{
    r0 = 1;
    goto loc_8066A4E4;
}

loc_8066A4D8:
{
    r0 = 2;
    goto loc_8066A4E4;
}

loc_8066A4E0:
{
    r0 = 3;
}

loc_8066A4E4:
{
}

loc_8066A4E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8066A5C8;
    }
}

loc_8066A4EC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 22820), 0, 24u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r6 + 22840));
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r27 + 88));
}

loc_8066A4FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8066A510;
    }
}

loc_8066A500:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r6 + 22826));
}

loc_8066A508:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066A510;
    }
}

loc_8066A50C:
{
    r5 = 1;
}

loc_8066A510:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8066A514:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A5BC;
    }
}

loc_8066A518:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r6 + 22820));
    r4 = 65536;
    MemoryInline::FlatWriteRam16((r1 + 368), static_cast<uint16_t>(r0));
    r0 = (r4 + -27664);
    r4 = (r1 + 14);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r6 + 22822));
    MemoryInline::FlatWriteRam8((r1 + 370), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r6 + 22824));
    MemoryInline::FlatWriteRam16((r1 + 372), static_cast<uint16_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r6 + 22826));
    MemoryInline::FlatWriteRam8((r1 + 374), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r6 + 22828));
    MemoryInline::FlatWriteRam32((r1 + 376), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 22832));
    MemoryInline::FlatWriteRam32((r1 + 380), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r6 + 22836));
    MemoryInline::FlatWriteRam32((r1 + 384), r5);
    r5 = MemoryInline::FlatRead16((r3 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 & 255);
    r0 = (r0 * r5);
    r3 = (r3 + r0);
    r26 = (r3 + 78);
    r3 = r26;
    ctx->lr = 0x8066A578u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C75F0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A57C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A594;
    }
}

loc_8066A580:
{
    r5 = MemoryInline::FlatRead16((r1 + 14));
    r3 = (r1 + 288);
    r4 = 0;
    ctx->lr = 0x8066A590u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8066A5D0;
}

loc_8066A594:
{
    r3 = r26;
    r4 = (r1 + 14);
    ctx->lr = 0x8066A5A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A5A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A5D0;
    }
}

loc_8066A5A8:
{
    r5 = MemoryInline::FlatRead16((r1 + 14));
    r3 = (r1 + 288);
    r4 = 6;
    ctx->lr = 0x8066A5B8u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8066A5D0;
}

loc_8066A5BC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 374), static_cast<uint8_t>(r0));
    goto loc_8066A5D0;
}

loc_8066A5C8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 374), static_cast<uint8_t>(r0));
}

loc_8066A5D0:
{
    r0 = MemoryInline::FlatRead8((r1 + 374));
}

loc_8066A5D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066A6E4;
    }
}

loc_8066A5DC:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -27752));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066A5E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A6E4;
    }
}

loc_8066A5EC:
{
    r3 = r27;
    r4 = (r1 + 36);
    ctx->lr = 0x8066A5F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8066A5FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066A6E4;
    }
}

loc_8066A600:
{
    r0 = MemoryInline::FlatRead32((r1 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8066A608:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066A6E4;
    }
}

loc_8066A60C:
{
    r3 = 0x808B0000u;
    r0 = 0;
    r3 = (r3 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 36);
    r4 = (r1 + 24);
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r0));
    ctx->lr = 0x8066A638u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80510AB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead8((r1 + 34));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_1 & 134217727);
}

loc_8066A644:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8066A664;
    }
}

loc_8066A648:
{
    r4 = MemoryInline::FlatRead16((r1 + 28));
    r3 = 999;
    r0 = (r4 + -999);
    r3 = (r4 | ~r3);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_18 & 2147483647);
    r0 = (r3 - r0);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r28 = (r28_rot_2 & 1);
}

loc_8066A664:
{
}

loc_8066A668:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8066A6E4;
    }
}

loc_8066A66C:
{
    r0 = MemoryInline::FlatRead8((r1 + 374));
}

loc_8066A674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8066A680;
    }
}

loc_8066A678:
{
    r28 = 0;
    goto loc_8066A6E4;
}

loc_8066A680:
{
}

loc_8066A684:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8066A690;
    }
}

loc_8066A688:
{
    r28 = 1;
    goto loc_8066A6E4;
}

loc_8066A690:
{
    r0 = MemoryInline::FlatRead16((r1 + 28));
    r3 = MemoryInline::FlatRead16((r1 + 368));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8066A69C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8066A6A8;
    }
}

loc_8066A6A0:
{
    r28 = 1;
    goto loc_8066A6E4;
}

loc_8066A6A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066A6E0;
    }
}

loc_8066A6AC:
{
    r0 = MemoryInline::FlatRead8((r1 + 30));
    r3 = MemoryInline::FlatRead8((r1 + 370));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8066A6B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8066A6C4;
    }
}

loc_8066A6BC:
{
    r28 = 1;
    goto loc_8066A6E4;
}

loc_8066A6C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066A6E0;
    }
}

loc_8066A6C8:
{
    r3 = MemoryInline::FlatRead16((r1 + 372));
    r0 = MemoryInline::FlatRead16((r1 + 32));
}

loc_8066A6D4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8066A6E0;
    }
}

loc_8066A6D8:
{
    r28 = 1;
    goto loc_8066A6E4;
}

loc_8066A6E0:
{
    r28 = 0;
}

loc_8066A6E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8066A6E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A794;
    }
}

loc_8066A6EC:
{
    r0 = MemoryInline::FlatRead32((r27 + 16884));
}

loc_8066A6F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8066A750;
    }
}

loc_8066A6F8:
{
    r0 = MemoryInline::FlatRead16((r1 + 368));
    r5 = MemoryInline::FlatRead32((r27 + 16848));
    r0 = (r0 * 60);
    r3 = MemoryInline::FlatRead8((r1 + 370));
}

loc_8066A70C:
{
    r4 = MemoryInline::FlatRead16((r1 + 372));
    r0 = (r3 + r0);
    r0 = (r0 * 1000);
    r3 = (r4 + r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8066A72C;
    }
}

loc_8066A720:
{
    r4 = MemoryInline::FlatRead32((r27 + 16624));
}

loc_8066A728:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8066A734;
    }
}

loc_8066A72C:
{
    r0 = 1;
    goto loc_8066A754;
}

loc_8066A734:
{
}

loc_8066A738:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r3))) {
        goto loc_8066A748;
    }
}

loc_8066A740:
{
}

loc_8066A744:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r3))) {
        goto loc_8066A754;
    }
}

loc_8066A748:
{
    r0 = 1;
    goto loc_8066A754;
}

loc_8066A750:
{
    r0 = 1;
}

loc_8066A754:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066A758:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A788;
    }
}

loc_8066A75C:
{
    r3 = 0x809C0000u;
    r4 = 5;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621C3C (15 guest instruction(s))
}

loc_inl13_0x80621C3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl13_0x80621C44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl13_return;
    }
}

loc_inl13_0x80621C48:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl13_0x80621C50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl13_return;
    }
}

loc_inl13_0x80621C54:
{
    r8 = 1;
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r3 + 252), r0);
    MemoryInline::FlatWrite32((r3 + 256), r4);
    MemoryInline::FlatWrite8((r3 + 260), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 264), r6);
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r7));
    goto loc_inl13_cont_80621C3C;
}

loc_inl13_return:
{
}

loc_inl13_cont_80621C3C:
{
    // end of inlined leaf 0x80621C3C
    r0 = 9;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066A788:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066A794:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8512));
    ctx->lr = 0x8066A7A8u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067721Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite32((r27 + 16), r0);
    goto loc_8066AD88;
}

loc_8066A7BC:
{
    r4 = 0x808B0000u;
    r0 = 0;
    r4 = (r4 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 264), r4);
    MemoryInline::FlatWriteRam16((r1 + 268), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 270), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 272), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 274), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8066A7E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8066A804;
    }
}

loc_8066A7E8:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r3 + r0);
    r6 = (r4 + 56);
    goto loc_8066A808;
}

loc_8066A804:
{
    r6 = 0;
}

loc_8066A808:
{
    r0 = MemoryInline::FlatRead32((r27 + 16884));
}

loc_8066A810:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8066A850;
    }
}

loc_8066A814:
{
    r4 = (r27 + 65536);
    r0 = MemoryInline::FlatRead32((r27 + 88));
    r4 = MemoryInline::FlatRead32((r4 + -29952));
}

loc_8066A824:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_8066A850;
    }
}

loc_8066A828:
{
    r0 = MemoryInline::FlatRead8((r27 + 85));
}

loc_8066A830:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8066A840;
    }
}

loc_8066A834:
{
}

loc_8066A838:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8066A848;
    }
}

loc_8066A83C:
{
    goto loc_8066A850;
}

loc_8066A840:
{
    r0 = 1;
    goto loc_8066A854;
}

loc_8066A848:
{
    r0 = 2;
    goto loc_8066A854;
}

loc_8066A850:
{
    r0 = 3;
}

loc_8066A854:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8066A858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A938;
    }
}

loc_8066A85C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r6 + 22820), 0, 24u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r6 + 22840));
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r27 + 88));
}

loc_8066A86C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8066A880;
    }
}

loc_8066A870:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r6 + 22826));
}

loc_8066A878:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066A880;
    }
}

loc_8066A87C:
{
    r5 = 1;
}

loc_8066A880:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8066A884:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A92C;
    }
}

loc_8066A888:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r6 + 22820));
    r4 = 65536;
    MemoryInline::FlatWriteRam16((r1 + 268), static_cast<uint16_t>(r0));
    r0 = (r4 + -27664);
    r4 = (r1 + 12);
    r5 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r6 + 22822));
    MemoryInline::FlatWriteRam8((r1 + 270), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r6 + 22824));
    MemoryInline::FlatWriteRam16((r1 + 272), static_cast<uint16_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r6 + 22826));
    MemoryInline::FlatWriteRam8((r1 + 274), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r6 + 22828));
    MemoryInline::FlatWriteRam32((r1 + 276), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r6 + 22832));
    MemoryInline::FlatWriteRam32((r1 + 280), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r6 + 22836));
    MemoryInline::FlatWriteRam32((r1 + 284), r5);
    r5 = MemoryInline::FlatRead16((r3 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 & 255);
    r0 = (r0 * r5);
    r3 = (r3 + r0);
    r26 = (r3 + 78);
    r3 = r26;
    ctx->lr = 0x8066A8E8u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C75F0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A8EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A904;
    }
}

loc_8066A8F0:
{
    r5 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (r1 + 188);
    r4 = 0;
    ctx->lr = 0x8066A900u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8066A940;
}

loc_8066A904:
{
    r3 = r26;
    r4 = (r1 + 12);
    ctx->lr = 0x8066A910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A914:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A940;
    }
}

loc_8066A918:
{
    r5 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (r1 + 188);
    r4 = 6;
    ctx->lr = 0x8066A928u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8066A940;
}

loc_8066A92C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 274), static_cast<uint8_t>(r0));
    goto loc_8066A940;
}

loc_8066A938:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 274), static_cast<uint8_t>(r0));
}

loc_8066A940:
{
    r0 = MemoryInline::FlatRead16((r27 + 86));
    r3 = 1;
    MemoryInline::FlatWrite32((r27 + 16909), r3);
    r3 = 0x809C0000u;
    r28 = (r27 + 16909);
    r4 = (r1 + 16);
    MemoryInline::FlatWrite32((r27 + 16913), r0);
    r0 = MemoryInline::FlatRead16((r1 + 268));
    r5 = MemoryInline::FlatRead8((r1 + 270));
    r0 = (r0 * 60);
    r6 = MemoryInline::FlatRead16((r1 + 272));
    r0 = (r5 + r0);
    r0 = (r0 * 1000);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r27 + 17041), r0);
    r0 = MemoryInline::FlatRead32((r1 + 284));
    MemoryInline::FlatWrite8((r27 + 17245), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 276));
    MemoryInline::FlatWrite8((r27 + 17246), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 280));
    MemoryInline::FlatWrite8((r27 + 17247), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054A9B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A9A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A9AC;
    }
}

loc_8066A9A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    goto loc_8066A9B0;
}

loc_8066A9AC:
{
    r0 = 0;
}

loc_8066A9B0:
{
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_21 & 255);
    MemoryInline::FlatWrite8((r28 + 339), static_cast<uint8_t>(r0));
    r4 = 0x809C0000u;
    r3 = 65536;
    r5 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = (r3 + -27664);
    r4 = (r1 + 10);
    r3 = MemoryInline::FlatRead16((r5 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 & 255);
    r0 = (r0 * r3);
    r3 = (r5 + r0);
    r26 = (r3 + 78);
    r3 = r26;
    ctx->lr = 0x8066A9E8u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C75F0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A9EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AA04;
    }
}

loc_8066A9F0:
{
    r5 = MemoryInline::FlatRead16((r1 + 10));
    r3 = (r28 + 260);
    r4 = 0;
    ctx->lr = 0x8066AA00u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8066AA28;
}

loc_8066AA04:
{
    r3 = r26;
    r4 = (r1 + 10);
    ctx->lr = 0x8066AA10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066AA14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AA28;
    }
}

loc_8066AA18:
{
    r5 = MemoryInline::FlatRead16((r1 + 10));
    r3 = (r28 + 260);
    r4 = 6;
    ctx->lr = 0x8066AA28u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8066AA28:
{
    r29 = 0x809C0000u;
    r4 = r28;
    r3 = MemoryInline::FlatRead32((r29 + 8512));
    r5 = 1;
    ctx->lr = 0x8066AA3Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806775E4u>(ctx);
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

loc_8066AA40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AA50;
    }
}

loc_8066AA44:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066AA50:
{
    r3 = r27;
    ctx->lr = 0x8066AA58u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067552Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 8512));
    ctx->lr = 0x8066AA60u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067721Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite32((r27 + 16), r0);
    goto loc_8066AD88;
}

loc_8066AA74:
{
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + 8512));
    // inline leaf 0x80677228 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80677228
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8066AA84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AD88;
    }
}

loc_8066AA88:
{
    r3 = MemoryInline::FlatRead32((r28 + 8512));
    // inline leaf 0x80677230 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80677230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8066AA94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066AAB0;
    }
}

loc_8066AA98:
{
    r3 = (r30 + 65536);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + -27752), static_cast<uint8_t>(r0));
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r27 + 16900));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_8066AAB0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8512));
    ctx->lr = 0x8066AAC4u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067721Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite32((r27 + 16), r0);
    goto loc_8066AD88;
}

loc_8066AAD8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x806212FCu) && KnownTranslatedCpuCall<0x806212FCu>::kAvailable && !KnownTranslatedCpuCall<0x806212FCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x806212FCu>()) {
        const auto state_free_result_806212FC_15B1D = func_806212FC_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_806212FC_15B1D[0]);
        r3 = static_cast<uint32_t>(state_free_result_806212FC_15B1D[1]);
    } else {
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
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x806212FCu>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066AAEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066AD88;
    }
}

loc_8066AAF0:
{
    r3 = 0x809C0000u;
    r26 = MemoryInline::FlatRead32((r3 + -10424));
    r3 = MemoryInline::FlatRead32((r26 + 24));
    ctx->lr = 0x8066AB00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8051C120u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066AB04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AB10;
    }
}

loc_8066AB08:
{
    r3 = MemoryInline::FlatRead32((r26 + 24));
    goto loc_8066AB14;
}

loc_8066AB10:
{
    r3 = 0;
}

loc_8066AB14:
{
    ctx->lr = 0x8066AB18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8051C120u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066AB1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AD00;
    }
}

loc_8066AB20:
{
    r4 = 0x808B0000u;
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 168), static_cast<uint16_t>(r0));
    r4 = (r4 + 11588);
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    MemoryInline::FlatWriteRam32((r1 + 164), r4);
    MemoryInline::FlatWriteRam8((r1 + 170), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 172), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 174), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8066AB50:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8066AB70;
    }
}

loc_8066AB54:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r3 + r0);
    r6 = (r4 + 56);
    goto loc_8066AB74;
}

loc_8066AB70:
{
    r6 = 0;
}

loc_8066AB74:
{
    r0 = MemoryInline::FlatRead32((r27 + 16884));
}

loc_8066AB7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8066ABBC;
    }
}

loc_8066AB80:
{
    r4 = (r27 + 65536);
    r0 = MemoryInline::FlatRead32((r27 + 88));
    r4 = MemoryInline::FlatRead32((r4 + -29952));
}

loc_8066AB90:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_8066ABBC;
    }
}

loc_8066AB94:
{
    r0 = MemoryInline::FlatRead8((r27 + 85));
}

loc_8066AB9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8066ABAC;
    }
}

loc_8066ABA0:
{
}

loc_8066ABA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8066ABB4;
    }
}

loc_8066ABA8:
{
    goto loc_8066ABBC;
}

loc_8066ABAC:
{
    r0 = 1;
    goto loc_8066ABC0;
}

loc_8066ABB4:
{
    r0 = 2;
    goto loc_8066ABC0;
}

loc_8066ABBC:
{
    r0 = 3;
}

loc_8066ABC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8066ABC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066ACA4;
    }
}

loc_8066ABC8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + 22820), 0, 24u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r6 + 22840));
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r27 + 88));
}

loc_8066ABD8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8066ABEC;
    }
}

loc_8066ABDC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r6 + 22826));
}

loc_8066ABE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066ABEC;
    }
}

loc_8066ABE8:
{
    r5 = 1;
}

loc_8066ABEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8066ABF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AC98;
    }
}

loc_8066ABF4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, (r6 + 22820));
    r4 = 65536;
    MemoryInline::FlatWriteRam16((r1 + 168), static_cast<uint16_t>(r0));
    r0 = (r4 + -27664);
    r4 = (r1 + 8);
    r5 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r6 + 22822));
    MemoryInline::FlatWriteRam8((r1 + 170), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r6 + 22824));
    MemoryInline::FlatWriteRam16((r1 + 172), static_cast<uint16_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r6 + 22826));
    MemoryInline::FlatWriteRam8((r1 + 174), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r6 + 22828));
    MemoryInline::FlatWriteRam32((r1 + 176), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r6 + 22832));
    MemoryInline::FlatWriteRam32((r1 + 180), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r6 + 22836));
    MemoryInline::FlatWriteRam32((r1 + 184), r5);
    r5 = MemoryInline::FlatRead16((r3 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 & 255);
    r0 = (r0 * r5);
    r3 = (r3 + r0);
    r26 = (r3 + 78);
    r3 = r26;
    ctx->lr = 0x8066AC54u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C75F0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066AC58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AC70;
    }
}

loc_8066AC5C:
{
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r1 + 88);
    r4 = 0;
    ctx->lr = 0x8066AC6Cu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8066ACAC;
}

loc_8066AC70:
{
    r3 = r26;
    r4 = (r1 + 8);
    ctx->lr = 0x8066AC7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066AC80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066ACAC;
    }
}

loc_8066AC84:
{
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r1 + 88);
    r4 = 6;
    ctx->lr = 0x8066AC94u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8066ACAC;
}

loc_8066AC98:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 174), static_cast<uint8_t>(r0));
    goto loc_8066ACAC;
}

loc_8066ACA4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 174), static_cast<uint8_t>(r0));
}

loc_8066ACAC:
{
    r7 = MemoryInline::FlatRead16((r27 + 86));
    r3 = r27;
    r4 = (r27 + 19825);
    r5 = (r1 + 88);
    r6 = (r27 + 19729);
    ctx->lr = 0x8066ACC4u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066AD9Cu>(ctx);
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

loc_8066ACC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066ACD8;
    }
}

loc_8066ACCC:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066ACD8:
{
    r3 = r27;
    ctx->lr = 0x8066ACE0u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067552Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8512));
    ctx->lr = 0x8066ACECu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067721Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite32((r27 + 16), r0);
    goto loc_8066AD88;
}

loc_8066AD00:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8512));
    ctx->lr = 0x8066AD14u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067721Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite32((r27 + 16), r0);
    goto loc_8066AD88;
}

loc_8066AD28:
{
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + 8512));
    // inline leaf 0x80677228 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80677228
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8066AD38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AD88;
    }
}

loc_8066AD3C:
{
    r3 = MemoryInline::FlatRead32((r28 + 8512));
    // inline leaf 0x80677230 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80677230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8066AD48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066AD64;
    }
}

loc_8066AD4C:
{
    r3 = (r30 + 65536);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + -27752), static_cast<uint8_t>(r0));
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r27 + 16900));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_8066AD64:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8512));
    ctx->lr = 0x8066AD78u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067721Cu>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite32((r27 + 16), r0);
}

loc_8066AD88:
{
    r26 = MemoryInline::FlatRead32((r1 + 600));
    r27 = MemoryInline::FlatRead32((r1 + 604));
    r28 = MemoryInline::FlatRead32((r1 + 608));
    r29 = MemoryInline::FlatRead32((r1 + 612));
    r30 = MemoryInline::FlatRead32((r1 + 616));
    r31 = MemoryInline::FlatRead32((r1 + 620));
    r0 = MemoryInline::FlatRead32((r1 + 628));
    ctx->lr = r0;
    r1 = (r1 + 624);
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80669D0C func_80669D0C preserves=true fpr_mask=0x00000000
