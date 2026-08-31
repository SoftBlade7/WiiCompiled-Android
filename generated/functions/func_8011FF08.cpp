#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011FF08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_8011FF08;

loc_8011FF08:
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
    r30 = MemoryInline::FlatRead8(r5);
    r26 = r4;
    r28 = r6;
    r25 = r3;
    r27 = r5;
    r29 = r7;
    r31 = r28;
    r3 = r26;
    r4 = r30;
    // inline leaf 0x8011DCC4 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8011DCC4
    r0 = (r30 & 16);
}

loc_8011FF48:
{
    r28 = (r28 + -5);
    r27 = (r27 + 5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011FF5C;
    }
}

loc_8011FF54:
{
    r27 = (r27 + 2);
    r28 = (r28 + -2);
}

loc_8011FF5C:
{
    r0 = (r30 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011FF60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011FF80;
    }
}

loc_8011FF64:
{
    r4 = r27;
    r3 = (r1 + 12);
    r5 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = (r27 + 4);
    r28 = (r28 + -4);
    goto loc_8011FF88;
}

loc_8011FF80:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_8011FF88:
{
    r0 = (r30 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011FF8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011FFAC;
    }
}

loc_8011FF90:
{
    r4 = r27;
    r3 = (r1 + 8);
    r5 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r27 = (r27 + 2);
    r28 = (r28 + -2);
    goto loc_8011FFB4;
}

loc_8011FFAC:
{
    r0 = MemoryInline::FlatRead16((r25 + 1708));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
}

loc_8011FFB4:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r26;
    r5 = MemoryInline::FlatRead16((r1 + 8));
    // inline leaf 0x8011DCCC (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r5));
    // end of inlined leaf 0x8011DCCC
    r0 = (r30 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011FFC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011FFF0;
    }
}

loc_8011FFCC:
{
    r4 = r27;
    r3 = (r1 + 12);
    r5 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r26;
    r27 = (r27 + 4);
    r28 = (r28 + -4);
    // inline leaf 0x8011DCD8 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r4);
    // end of inlined leaf 0x8011DCD8
}

loc_8011FFF0:
{
    r0 = (r30 & 64);
}

loc_8011FFF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012011C;
    }
}

loc_8011FFF8:
{
    r3 = MemoryInline::FlatRead32((r25 + 8));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
    r23 = r3;
    r22 = 0;
    goto loc_801200FC;
}

loc_8012000C:
{
    r3 = MemoryInline::FlatRead32((r25 + 8));
    r4 = r22;
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
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r24 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80120024:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80120044;
    }
}

loc_80120028:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80120038;
    }
}

loc_8012002C:
{
}

loc_80120030:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80120094;
    }
}

loc_80120034:
{
    goto loc_801200F8;
}

loc_80120038:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8012003C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801200F8;
    }
}

loc_80120040:
{
    goto loc_80120060;
}

loc_80120044:
{
    r4 = MemoryInline::FlatRead32(r24);
    r3 = r26;
    r5 = MemoryInline::FlatRead8(r27);
    ctx->lr = 0x80120054u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x8011D1E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    r27 = (r27 + 1);
    r28 = (r28 + -1);
    goto loc_801200F8;
}

loc_80120060:
{
    r4 = r27;
    r3 = (r1 + 10);
    r5 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r1 + 10));
    // inline leaf 0x801ED990 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED990
    r4 = MemoryInline::FlatRead32(r24);
    r5 = (r3 & 65535);
    r3 = r26;
    ctx->lr = 0x80120088u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x8011D1E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    r27 = (r27 + 2);
    r28 = (r28 + -2);
    goto loc_801200F8;
}

loc_80120094:
{
}

loc_80120098:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801200AC;
    }
}

loc_8012009C:
{
    r0 = MemoryInline::FlatRead8(r27);
    r27 = (r27 + 1);
    r28 = (r28 + -1);
    goto loc_801200B0;
}

loc_801200AC:
{
    r0 = 255;
}

loc_801200B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(255));
}

loc_801200B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801200E0;
    }
}

loc_801200B8:
{
    r4 = MemoryInline::FlatRead32(r24);
    r3 = r26;
    r5 = r27;
    ctx->lr = 0x801200C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x8011D188u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    r3 = r27;
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
    r0 = (r3 + 1);
    r27 = (r27 + r0);
    r28 = (r28 - r0);
    goto loc_801200F8;
}

loc_801200E0:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = MemoryInline::FlatRead32(r24);
    r5 = (r25 + r0);
    r3 = r26;
    r5 = MemoryInline::FlatRead32((r5 + 132));
    ctx->lr = 0x801200F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x8011D188u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
}

loc_801200F8:
{
    r22 = (r22 + 1);
}

loc_801200FC:
{
}

loc_80120100:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r23))) {
        goto loc_8012000C;
    }
}

loc_80120104:
{
    r3 = r26;
    // inline leaf 0x8011DCE8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 20));
    // end of inlined leaf 0x8011DCE8
    r0 = (r3 | 1);
    r3 = r26;
    r4 = (r0 & 255);
    // inline leaf 0x8011DCE0 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8011DCE0
}

loc_8012011C:
{
    r0 = (r30 & 128);
}

loc_80120120:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80120194;
    }
}

loc_80120124:
{
    goto loc_80120164;
}

loc_80120128:
{
    r22 = r27;
    r3 = r27;
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
    r0 = (r3 + 1);
    r3 = r26;
    r27 = (r27 + r0);
    r4 = r22;
    r5 = r27;
    r28 = (r28 - r0);
    ctx->lr = 0x80120150u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x8011D188u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    r3 = r27;
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
    r0 = (r3 + 1);
    r27 = (r27 + r0);
    r28 = (r28 - r0);
}

loc_80120164:
{
    r0 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80120178;
    }
}

loc_80120170:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80120174:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80120128;
    }
}

loc_80120178:
{
    r3 = r26;
    r28 = (r28 + -1);
    // inline leaf 0x8011DCE8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 20));
    // end of inlined leaf 0x8011DCE8
    r0 = (r3 | 2);
    r3 = r26;
    r4 = (r0 & 255);
    // inline leaf 0x8011DCE0 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8011DCE0
}

loc_80120194:
{
    r3 = r26;
    // inline leaf 0x8011DCE8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 20));
    // end of inlined leaf 0x8011DCE8
    r0 = (r30 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801201A0:
{
    r4 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801201BC;
    }
}

loc_801201A8:
{
    r0 = (r3 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801201AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801201BC;
    }
}

loc_801201B0:
{
    r3 = r26;
    r4 = (r4 & 252);
    // inline leaf 0x8011DCE0 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8011DCE0
}

loc_801201BC:
{
    r11 = (r1 + 64);
    r3 = (r31 - r28);
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
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8011FF08 func_8011FF08 preserves=true fpr_mask=0x00000000
