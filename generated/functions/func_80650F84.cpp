#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80650F84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_addc_right_3 = 0;
    uint32_t r0_addc_right_4 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_adde_left_3 = 0;
    uint32_t r0_adde_left_4 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_ca_4 = 0;
    uint32_t r5_ca_5 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_not_3 = 0;
    uint32_t r5_not_4 = 0;
    uint32_t r5_not_5 = 0;
    uint32_t r6_subfc_sub_0 = 0;
    uint32_t r6_subfc_sub_1 = 0;
    uint32_t r6_subfc_sub_2 = 0;
    uint32_t r6_subfc_sub_3 = 0;
    uint32_t r6_subfc_sub_4 = 0;
    uint32_t r6_subfc_sub_5 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
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

    goto loc_80650F84;

loc_80650F84:
{
    r5 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + -88);
}

loc_80650F9C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_8065114C;
    }
}

loc_80650FA0:
{
    r3 = 0x808C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 1436);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80650FB8u:
        goto loc_80650FB8;
        break;
    case 0x8065107Cu:
        goto loc_8065107C;
        break;
    case 0x8065114Cu:
        goto loc_8065114C;
        break;
    case 0x806510F4u:
        goto loc_806510F4;
        break;
    case 0x80651120u:
        goto loc_80651120;
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
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
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
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80650FB8:
{
}

loc_80650FBC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(96))) {
        goto loc_80650FC8;
    }
}

loc_80650FC0:
{
}

loc_80650FC4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(97))) {
        goto loc_80650FE8;
    }
}

loc_80650FC8:
{
}

loc_80650FCC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(100))) {
        goto loc_80650FD8;
    }
}

loc_80650FD0:
{
}

loc_80650FD4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(101))) {
        goto loc_80650FE8;
    }
}

loc_80650FD8:
{
}

loc_80650FDC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(88))) {
        goto loc_80650FE8;
    }
}

loc_80650FE0:
{
}

loc_80650FE4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(94))) {
        goto loc_80650FF0;
    }
}

loc_80650FE8:
{
    r0 = MemoryInline::FlatRead32((r15 + 648));
    goto loc_80650FF4;
}

loc_80650FF0:
{
    r0 = 0;
}

loc_80650FF4:
{
}

loc_80650FF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80651010;
    }
}

loc_80650FFC:
{
}

loc_80651000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80651034;
    }
}

loc_80651004:
{
}

loc_80651008:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80651058;
    }
}

loc_8065100C:
{
    goto loc_8065114C;
}

loc_80651010:
{
    r4 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    goto loc_8065114C;
}

loc_80651034:
{
    r4 = 0x809C0000u;
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    goto loc_8065114C;
}

loc_80651058:
{
    r4 = 0x809C0000u;
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    goto loc_8065114C;
}

loc_8065107C:
{
    r4 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r3 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_806510AC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(98))) {
        goto loc_806510B8;
    }
}

loc_806510B0:
{
}

loc_806510B4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(99))) {
        goto loc_806510D8;
    }
}

loc_806510B8:
{
}

loc_806510BC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(102))) {
        goto loc_806510C8;
    }
}

loc_806510C0:
{
}

loc_806510C4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(103))) {
        goto loc_806510D8;
    }
}

loc_806510C8:
{
}

loc_806510CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(89))) {
        goto loc_806510D8;
    }
}

loc_806510D0:
{
}

loc_806510D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(95))) {
        goto loc_806510E0;
    }
}

loc_806510D8:
{
    r0 = MemoryInline::FlatRead32((r15 + 652));
    goto loc_806510E4;
}

loc_806510E0:
{
    r0 = 2;
}

loc_806510E4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWrite32((r3 + 5992), r0);
    goto loc_8065114C;
}

loc_806510F4:
{
    r4 = 0x809C0000u;
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r5);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5992), r5);
    goto loc_8065114C;
}

loc_80651120:
{
    r5 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 5980), r4);
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    r3 = MemoryInline::FlatRead32((r4 + 6016));
    r3 = (r3 & -2);
    MemoryInline::FlatWrite32((r4 + 6016), r3);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    MemoryInline::FlatWrite32((r3 + 5992), r0);
}

loc_8065114C:
{
    r17 = 0;
    r19 = 0;
    r31 = 0x809C0000u;
    r23 = 0;
    r24 = 0x809C0000u;
    r22 = 0x809C0000u;
    r25 = 4;
    r26 = 0x809C0000u;
    r28 = 0x809C0000u;
    r27 = 0x80380000u;
    r29 = 1;
    r30 = 15;
    r14 = 5000;
}

loc_80651180:
{
}

loc_80651184:
{
    r0 = MemoryInline::FlatRead32((r22 + 8408));
    if ((static_cast<uint32_t>(r17) > static_cast<uint32_t>(11))) {
        goto loc_80651198;
    }
}

loc_8065118C:
{
    r3 = (r0 + r17);
    r21 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_8065119C;
}

loc_80651198:
{
    r21 = 255;
}

loc_8065119C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(12));
}

loc_806511A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80651550;
    }
}

loc_806511A4:
{
    r3 = MemoryInline::FlatRead32((r26 + 8448));
    r4 = r21;
    r5 = 0;
    // inline leaf 0x806604D4 (20 guest instruction(s))
}

loc_inl0_0x806604D4:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = (r0 * 88);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 89));
}

loc_inl0_0x806604F0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x80660508;
    }
}

loc_inl0_0x806604F4:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 28));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_inl0_cont_806604D4;
}

loc_inl0_0x80660508:
{
    r4 = (r4 * 56);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 84));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl0_cont_806604D4:
{
    // end of inlined leaf 0x806604D4
    r16 = r3;
    r3 = MemoryInline::FlatRead32((r26 + 8448));
    r4 = r21;
    r5 = 0;
    // inline leaf 0x80660524 (20 guest instruction(s))
}

loc_inl1_0x80660524:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = (r0 * 88);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 89));
}

loc_inl1_0x80660540:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x80660558;
    }
}

loc_inl1_0x80660544:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 29));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_inl1_cont_80660524;
}

loc_inl1_0x80660558:
{
    r4 = (r4 * 56);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 85));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl1_cont_80660524:
{
    // end of inlined leaf 0x80660524
}

loc_806511CC:
{
    r4 = 0;
    r0 = 0;
    if ((static_cast<uint32_t>(r16) > static_cast<uint32_t>(47))) {
        goto loc_806511DC;
    }
}

loc_806511D8:
{
    r0 = 1;
}

loc_806511DC:
{
}

loc_806511E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80651200;
    }
}

loc_806511E4:
{
}

loc_806511E8:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(35))) {
        goto loc_806511F4;
    }
}

loc_806511F0:
{
    r0 = 1;
}

loc_806511F4:
{
}

loc_806511F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80651200;
    }
}

loc_806511FC:
{
    r4 = 1;
}

loc_80651200:
{
}

loc_80651204:
{
    if ((static_cast<int32_t>(r17) <= static_cast<int32_t>(0))) {
        goto loc_8065123C;
    }
}

loc_80651208:
{
    r0 = (r17 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r17)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8065120C:
{
    r3 = MemoryInline::FlatRead32((r22 + 8408));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80651228;
    }
}

loc_80651214:
{
}

loc_80651218:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_80651228;
    }
}

loc_8065121C:
{
    r3 = (r3 + r17);
    r0 = MemoryInline::FlatRead8((r3 + 10527));
    goto loc_8065122C;
}

loc_80651228:
{
    r0 = 255;
}

loc_8065122C:
{
}

loc_80651230:
{
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(r0))) {
        goto loc_8065123C;
    }
}

loc_80651234:
{
    r16 = 1;
    goto loc_80651240;
}

loc_8065123C:
{
    r16 = 0;
}

loc_80651240:
{
    r0 = MemoryInline::FlatRead32((r15 + 644));
    r3 = r15;
    r20 = 0;
    ctr = r0;
}

loc_80651254:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80651280;
    }
}

loc_80651258:
{
    r0 = MemoryInline::FlatRead8((r3 + 500));
}

loc_80651260:
{
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(r0))) {
        goto loc_80651274;
    }
}

loc_80651264:
{
    r0 = MemoryInline::FlatRead8((r3 + 501));
}

loc_8065126C:
{
    if ((static_cast<uint32_t>(r16) != static_cast<uint32_t>(r0))) {
        goto loc_80651274;
    }
}

loc_80651270:
{
    goto loc_80651284;
}

loc_80651274:
{
    r3 = (r3 + 12);
    r20 = (r20 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80651258;
    }
}

loc_80651280:
{
    r20 = -1;
}

loc_80651284:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80651288:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80651414;
    }
}

loc_8065128C:
{
    r3 = MemoryInline::FlatRead32((r22 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(r0));
}

loc_806512A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806512DC;
    }
}

loc_806512A8:
{
    r3 = (r17 & 255);
    r0 = MemoryInline::FlatRead32((r24 + -10456));
    r18 = (r3 * 240);
    r5 = r16;
    r6 = r17;
    r3 = (r0 + r18);
    MemoryInline::FlatWrite32((r3 + 3112), r23);
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r4 + 392);
    r4 = (r4 + 568);
    ctx->lr = 0x806512D8u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x805FAF34u>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    goto loc_8065130C;
}

loc_806512DC:
{
    r3 = (r17 & 255);
    r0 = MemoryInline::FlatRead32((r24 + -10456));
    r18 = (r3 * 240);
    r4 = r17;
    r5 = r21;
    r6 = r16;
    r3 = (r0 + r18);
    MemoryInline::FlatWrite32((r3 + 3112), r25);
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 392);
    ctx->lr = 0x8065130Cu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x805FA8B8u>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
}

loc_8065130C:
{
    r3 = MemoryInline::FlatRead32((r26 + 8448));
    r4 = r21;
    r5 = r16;
    // inline leaf 0x806604D4 (20 guest instruction(s))
}

loc_inl2_0x806604D4:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = (r0 * 88);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 89));
}

loc_inl2_0x806604F0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x80660508;
    }
}

loc_inl2_0x806604F4:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 28));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_inl2_cont_806604D4;
}

loc_inl2_0x80660508:
{
    r4 = (r4 * 56);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_11 & -8);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 84));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl2_cont_806604D4:
{
    // end of inlined leaf 0x806604D4
}

loc_80651320:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(47))) {
        goto loc_80651328;
    }
}

loc_80651324:
{
    r3 = 0;
}

loc_80651328:
{
    r0 = MemoryInline::FlatRead32((r24 + -10456));
    r4 = r21;
    r5 = r16;
    r6 = (r0 + r18);
    MemoryInline::FlatWrite32((r6 + 3108), r3);
    r3 = MemoryInline::FlatRead32((r26 + 8448));
    // inline leaf 0x80660524 (20 guest instruction(s))
}

loc_inl3_0x80660524:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = (r0 * 88);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 89));
}

loc_inl3_0x80660540:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x80660558;
    }
}

loc_inl3_0x80660544:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_13 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 29));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_inl3_cont_80660524;
}

loc_inl3_0x80660558:
{
    r4 = (r4 * 56);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & -8);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 85));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl3_cont_80660524:
{
    // end of inlined leaf 0x80660524
}

loc_80651348:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(35))) {
        goto loc_80651350;
    }
}

loc_8065134C:
{
    r3 = 1;
}

loc_80651350:
{
    r0 = MemoryInline::FlatRead32((r24 + -10456));
    r4 = r21;
    r5 = r16;
    r6 = (r0 + r18);
    MemoryInline::FlatWrite32((r6 + 3104), r3);
    r3 = MemoryInline::FlatRead32((r26 + 8448));
    // inline leaf 0x806605C4 (18 guest instruction(s))
}

loc_inl4_0x806605C4:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = (r0 * 88);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 89));
}

loc_inl4_0x806605E0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x806605F4;
    }
}

loc_inl4_0x806605E4:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & -8);
    r3 = (r3 + r0);
    r3 = (r3 + 24);
    goto loc_inl4_cont_806605C4;
}

loc_inl4_0x806605F4:
{
    r4 = (r4 * 56);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_17 & -8);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = (r3 + 80);
}

loc_inl4_cont_806605C4:
{
    // end of inlined leaf 0x806605C4
    r6 = MemoryInline::FlatRead32((r24 + -10456));
    r4 = r21;
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = r16;
    r6 = (r6 + r18);
    MemoryInline::FlatWrite8((r6 + 3321), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 2));
    MemoryInline::FlatWrite16((r6 + 3312), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r26 + 8448));
    // inline leaf 0x8066060C (18 guest instruction(s))
}

loc_inl5_0x8066060C:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = (r0 * 88);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 89));
}

loc_inl5_0x80660628:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8066063C;
    }
}

loc_inl5_0x8066062C:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_19 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 31));
    goto loc_inl5_cont_8066060C;
}

loc_inl5_0x8066063C:
{
    r4 = (r4 * 56);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_20 & -8);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 87));
}

loc_inl5_cont_8066060C:
{
    // end of inlined leaf 0x8066060C
    r5 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = (r17 & 255);
    r6 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r3 & 255);
    r3 = (r6 + 720);
    // inline leaf 0x805E3D48 (9 guest instruction(s))
    r6 = 12;
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & 1020);
    r6_subfc_sub_2 = r6;
    r6 = (r5 - r6_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6_subfc_sub_2) ? 1u : 0u) << 29);
    r4 = (r5 + 9710);
    r5_not_2 = ~(r6);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r6);
    r5 = (r5 + r5_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = (r3 + r0);
    r0 = (r4 & r5);
    MemoryInline::FlatWrite32((r3 + 140), r0);
    // end of inlined leaf 0x805E3D48
    r3 = MemoryInline::FlatRead32((r22 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
}

loc_806513C4:
{
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(r0))) {
        goto loc_806513D4;
    }
}

loc_806513C8:
{
    r3 = MemoryInline::FlatRead32((r27 + 24576));
    r4 = MemoryInline::FlatRead32((r3 + 132));
    goto loc_806513E4;
}

loc_806513D4:
{
    r0 = (r21 * 192);
    r3 = MemoryInline::FlatRead32((r28 + 8456));
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 389));
}

loc_806513E4:
{
}

loc_806513E8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(6))) {
        goto loc_80651400;
    }
}

loc_806513EC:
{
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r19);
    MemoryInline::FlatWrite32((r3 + 908), r4);
    goto loc_8065149C;
}

loc_80651400:
{
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r19);
    MemoryInline::FlatWrite32((r3 + 908), r30);
    goto loc_8065149C;
}

loc_80651414:
{
    r3 = (r17 & 255);
    r0 = MemoryInline::FlatRead32((r24 + -10456));
    r18 = (r3 * 240);
    r4 = 6;
    r3 = (r1 + 8);
    r5 = (r0 + r18);
    MemoryInline::FlatWrite32((r5 + 3112), r25);
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
    r0_addc_right_2 = r0;
    r0 = (r8 + r0_addc_right_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_2 + r6);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r5 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = r17;
    r6 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r3 & 255);
    r3 = (r6 + 392);
    ctx->lr = 0x8065144Cu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x805FA748u>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    r0 = MemoryInline::FlatRead32((r24 + -10456));
    r4 = (r17 & 255);
    r5 = 0;
    r3 = (r0 + r18);
    MemoryInline::FlatWrite32((r3 + 3108), r23);
    r0 = MemoryInline::FlatRead32((r24 + -10456));
    r3 = (r0 + r18);
    MemoryInline::FlatWrite32((r3 + 3104), r29);
    r0 = MemoryInline::FlatRead32((r24 + -10456));
    r3 = (r0 + r18);
    MemoryInline::FlatWrite8((r3 + 3321), static_cast<uint8_t>(r23));
    MemoryInline::FlatWrite16((r3 + 3312), static_cast<uint16_t>(r23));
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 720);
    // inline leaf 0x805E3D48 (9 guest instruction(s))
    r6 = 12;
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & 1020);
    r6_subfc_sub_3 = r6;
    r6 = (r5 - r6_subfc_sub_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6_subfc_sub_3) ? 1u : 0u) << 29);
    r4 = (r5 + 9710);
    r5_not_3 = ~(r6);
    r5_ca_3 = (xer >> 29) & 1u;
    r5 = (r5_not_3 + r6);
    r5 = (r5 + r5_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = (r3 + r0);
    r0 = (r4 & r5);
    MemoryInline::FlatWrite32((r3 + 140), r0);
    // end of inlined leaf 0x805E3D48
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r19);
    MemoryInline::FlatWrite32((r3 + 908), r30);
}

loc_8065149C:
{
}

loc_806514A0:
{
    if ((static_cast<int32_t>(r16) != static_cast<int32_t>(0))) {
        goto loc_8065150C;
    }
}

loc_806514A4:
{
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_806514B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(88))) {
        goto loc_806514D4;
    }
}

loc_806514B8:
{
}

loc_806514BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(94))) {
        goto loc_806514D4;
    }
}

loc_806514C0:
{
}

loc_806514C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(89))) {
        goto loc_806514F0;
    }
}

loc_806514C8:
{
}

loc_806514CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(95))) {
        goto loc_806514F0;
    }
}

loc_806514D0:
{
    goto loc_80651518;
}

loc_806514D4:
{
    r4 = (r20 * 12);
    r0 = MemoryInline::FlatRead32((r24 + -10456));
    r3 = (r0 + r18);
    r4 = (r15 + r4);
    r0 = MemoryInline::FlatRead16((r4 + 508));
    MemoryInline::FlatWrite16((r3 + 3328), static_cast<uint16_t>(r0));
    goto loc_80651518;
}

loc_806514F0:
{
    r4 = (r20 * 12);
    r0 = MemoryInline::FlatRead32((r24 + -10456));
    r3 = (r0 + r18);
    r4 = (r15 + r4);
    r0 = MemoryInline::FlatRead16((r4 + 510));
    MemoryInline::FlatWrite16((r3 + 3328), static_cast<uint16_t>(r0));
    goto loc_80651518;
}

loc_8065150C:
{
    r0 = MemoryInline::FlatRead32((r24 + -10456));
    r3 = (r0 + r18);
    MemoryInline::FlatWrite16((r3 + 3328), static_cast<uint16_t>(r14));
}

loc_80651518:
{
    r3 = MemoryInline::FlatRead32((r24 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & 2);
}

loc_80651524:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80651540;
    }
}

loc_80651528:
{
    r0 = (r20 * 12);
    r3 = (r3 + r18);
    r4 = (r15 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 504));
    MemoryInline::FlatWrite32((r3 + 3300), r0);
    goto loc_8065158C;
}

loc_80651540:
{
    r3 = (r3 + r18);
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 3300), r0);
    goto loc_8065158C;
}

loc_80651550:
{
    r0 = (r17 & 255);
    r3 = MemoryInline::FlatRead32((r24 + -10456));
    r0 = (r0 * 240);
    r4 = r17;
    r3 = (r3 + r0);
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 3112), r0);
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 392);
    ctx->lr = 0x8065157Cu;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x805FAA84u>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r19);
    MemoryInline::FlatWrite32((r3 + 908), r30);
}

loc_8065158C:
{
    r17 = (r17 + 1);
    r19 = (r19 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(12));
}

loc_80651598:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80651180;
    }
}

loc_8065159C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    ctx->lr = 0x806515ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805E39D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x806515B8u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 40));
            r15 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 48));
            r17 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r1 + 56));
            r19 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r1 + 64));
            r21 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r1 + 72));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r1 + 80));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r1 + 88));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r1 + 92));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r1 + 96));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r1 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r1 + 104));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r1 + 108));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80650F84 func_80650F84 preserves=true fpr_mask=0x00000000
