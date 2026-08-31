#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80609E84(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
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
    uint32_t xer = ctx->xer;

    goto loc_80609E84;

loc_80609E84:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r14);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r16);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r20);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r22);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r24);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r26);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r1 + 96), r28);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r30);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r1 + 108), r31);
    }
    r15 = r3;
    r3 = (r1 + 8);
    ctx->lr = 0x80609EA0u;
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
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    ctx->lr = 0x80609EACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80659BC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r16 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r16 + -10456));
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8052E454u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r14 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r14 + 8472));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80664944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = 6;
    MemoryInline::FlatWrite32((r4 + 6020), r3);
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    MemoryInline::FlatWrite32((r3 + 5988), r0);
    r0 = MemoryInline::FlatRead32((r15 + 7416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80609EE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609EF0;
    }
}

loc_80609EE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80609EE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609FE0;
    }
}

loc_80609EEC:
{
    goto loc_8060A070;
}

loc_80609EF0:
{
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = 8;
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r3 = MemoryInline::FlatRead32((r14 + 8472));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80664A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80609F18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609F30;
    }
}

loc_80609F1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80609F20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609F50;
    }
}

loc_80609F24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_80609F28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80609F70;
    }
}

loc_80609F2C:
{
    goto loc_80609F8C;
}

loc_80609F30:
{
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    goto loc_80609F8C;
}

loc_80609F50:
{
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    goto loc_80609F8C;
}

loc_80609F70:
{
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
}

loc_80609F8C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8472));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80664560u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r4 + 5976), r3);
    r0 = MemoryInline::FlatRead32((r15 + 396));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80609FAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80609FC8;
    }
}

loc_80609FB0:
{
    r3 = 0x809C0000u;
    r4 = 106;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 0;
    ctx->lr = 0x80609FC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8060A070;
}

loc_80609FC8:
{
    r3 = 0x809C0000u;
    r4 = 107;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 0;
    ctx->lr = 0x80609FDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8060A070;
}

loc_80609FE0:
{
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    r3 = MemoryInline::FlatRead32((r14 + 8472));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806646C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 5992), r3);
    r4 = MemoryInline::FlatRead32((r16 + -10456));
    r3 = MemoryInline::FlatRead32((r4 + 6016));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite32((r4 + 6016), r3);
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r16 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r3 = MemoryInline::FlatRead32((r14 + 8472));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80664560u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r16 + -10456));
    MemoryInline::FlatWrite32((r4 + 5976), r3);
    r0 = MemoryInline::FlatRead32((r15 + 396));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8060A040:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060A05C;
    }
}

loc_8060A044:
{
    r3 = 0x809C0000u;
    r4 = 110;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 0;
    ctx->lr = 0x8060A058u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8060A070;
}

loc_8060A05C:
{
    r3 = 0x809C0000u;
    r4 = 111;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 0;
    ctx->lr = 0x8060A070u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8060A070:
{
    r17 = 0;
    r19 = 0;
    r31 = 0x809C0000u;
    r24 = 0x809C0000u;
    r26 = 5000;
    r25 = 0x809C0000u;
    r27 = 0x809C0000u;
    r22 = 0x809C0000u;
    r23 = 4;
    r28 = 0;
    r29 = 1;
    r30 = 15;
    r14 = 2;
}

loc_8060A0A4:
{
}

loc_8060A0A8:
{
    r0 = MemoryInline::FlatRead32((r22 + 8408));
    if ((static_cast<uint32_t>(r17) > static_cast<uint32_t>(11))) {
        goto loc_8060A0BC;
    }
}

loc_8060A0B0:
{
    r3 = (r0 + r17);
    r21 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_8060A0C0;
}

loc_8060A0BC:
{
    r21 = 255;
}

loc_8060A0C0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(12));
}

loc_8060A0C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060A3A0;
    }
}

loc_8060A0C8:
{
    r3 = MemoryInline::FlatRead32((r31 + 8472));
    r4 = r21;
    r5 = 0;
    // inline leaf 0x806643C0 (6 guest instruction(s))
    r4 = (r4 * 48);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    // end of inlined leaf 0x806643C0
    r16 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 8472));
    r4 = r21;
    r5 = 0;
    // inline leaf 0x806643D8 (6 guest instruction(s))
    r4 = (r4 * 48);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 44));
    // end of inlined leaf 0x806643D8
}

loc_8060A0F0:
{
    r20 = 0;
    r0 = 0;
    r4 = 0;
    if ((static_cast<uint32_t>(r16) > static_cast<uint32_t>(47))) {
        goto loc_8060A104;
    }
}

loc_8060A100:
{
    r4 = 1;
}

loc_8060A104:
{
}

loc_8060A108:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8060A128;
    }
}

loc_8060A10C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(35));
}

loc_8060A110:
{
    r3 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8060A11C;
    }
}

loc_8060A118:
{
    r3 = 1;
}

loc_8060A11C:
{
}

loc_8060A120:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8060A128;
    }
}

loc_8060A124:
{
    r0 = 1;
}

loc_8060A128:
{
}

loc_8060A12C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8060A148;
    }
}

loc_8060A130:
{
    r3 = MemoryInline::FlatRead32((r25 + 8456));
    r4 = r21;
    // inline leaf 0x80662C68 (8 guest instruction(s))
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 2528));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80662C68
}

loc_8060A140:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8060A148;
    }
}

loc_8060A144:
{
    r20 = 1;
}

loc_8060A148:
{
}

loc_8060A14C:
{
    if ((static_cast<int32_t>(r17) <= static_cast<int32_t>(0))) {
        goto loc_8060A184;
    }
}

loc_8060A150:
{
    r0 = (r17 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r17)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8060A154:
{
    r3 = MemoryInline::FlatRead32((r22 + 8408));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8060A170;
    }
}

loc_8060A15C:
{
}

loc_8060A160:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_8060A170;
    }
}

loc_8060A164:
{
    r3 = (r3 + r17);
    r0 = MemoryInline::FlatRead8((r3 + 10527));
    goto loc_8060A174;
}

loc_8060A170:
{
    r0 = 255;
}

loc_8060A174:
{
}

loc_8060A178:
{
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(r0))) {
        goto loc_8060A184;
    }
}

loc_8060A17C:
{
    r16 = 1;
    goto loc_8060A188;
}

loc_8060A184:
{
    r16 = 0;
}

loc_8060A188:
{
    r3 = (r17 & 255);
    r0 = MemoryInline::FlatRead32((r27 + -10456));
    r18 = (r3 * 240);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_8060A198:
{
    r3 = (r0 + r18);
    MemoryInline::FlatWrite32((r3 + 3112), r23);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060A2E4;
    }
}

loc_8060A1A4:
{
    r3 = MemoryInline::FlatRead32((r24 + 7736));
    r4 = r17;
    r5 = r21;
    r6 = r16;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 392);
    ctx->lr = 0x8060A1C0u;
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
    xer = ctx->xer;
}

loc_8060A1C4:
{
    if ((static_cast<int32_t>(r16) != static_cast<int32_t>(0))) {
        goto loc_8060A220;
    }
}

loc_8060A1C8:
{
    r0 = MemoryInline::FlatRead32((r15 + 7416));
}

loc_8060A1D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8060A1E0;
    }
}

loc_8060A1D4:
{
}

loc_8060A1D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8060A200;
    }
}

loc_8060A1DC:
{
    goto loc_8060A22C;
}

loc_8060A1E0:
{
    r3 = (r21 * 192);
    r4 = MemoryInline::FlatRead32((r25 + 8456));
    r0 = MemoryInline::FlatRead32((r27 + -10456));
    r4 = (r4 + r3);
    r3 = (r0 + r18);
    r0 = MemoryInline::FlatRead16((r4 + 384));
    MemoryInline::FlatWrite16((r3 + 3328), static_cast<uint16_t>(r0));
    goto loc_8060A22C;
}

loc_8060A200:
{
    r3 = (r21 * 192);
    r4 = MemoryInline::FlatRead32((r25 + 8456));
    r0 = MemoryInline::FlatRead32((r27 + -10456));
    r4 = (r4 + r3);
    r3 = (r0 + r18);
    r0 = MemoryInline::FlatRead16((r4 + 386));
    MemoryInline::FlatWrite16((r3 + 3328), static_cast<uint16_t>(r0));
    goto loc_8060A22C;
}

loc_8060A220:
{
    r0 = MemoryInline::FlatRead32((r27 + -10456));
    r3 = (r0 + r18);
    MemoryInline::FlatWrite16((r3 + 3328), static_cast<uint16_t>(r26));
}

loc_8060A22C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8472));
    r4 = r21;
    r5 = r16;
    // inline leaf 0x806643C0 (6 guest instruction(s))
    r4 = (r4 * 48);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    // end of inlined leaf 0x806643C0
}

loc_8060A240:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(47))) {
        goto loc_8060A248;
    }
}

loc_8060A244:
{
    r3 = 0;
}

loc_8060A248:
{
    r0 = MemoryInline::FlatRead32((r27 + -10456));
    r4 = r21;
    r5 = r16;
    r6 = (r0 + r18);
    MemoryInline::FlatWrite32((r6 + 3108), r3);
    r3 = MemoryInline::FlatRead32((r31 + 8472));
    // inline leaf 0x806643D8 (6 guest instruction(s))
    r4 = (r4 * 48);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 44));
    // end of inlined leaf 0x806643D8
}

loc_8060A268:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(35))) {
        goto loc_8060A270;
    }
}

loc_8060A26C:
{
    r3 = 1;
}

loc_8060A270:
{
    r0 = MemoryInline::FlatRead32((r27 + -10456));
    r4 = r21;
    r5 = r16;
    r6 = (r0 + r18);
    MemoryInline::FlatWrite32((r6 + 3104), r3);
    r3 = MemoryInline::FlatRead32((r31 + 8472));
    // inline leaf 0x8066454C (5 guest instruction(s))
    r0 = (r4 * 48);
    r0 = (r3 + r0);
    r3 = (r0 + r5);
    r3 = MemoryInline::FlatRead8((r3 + 77));
    // end of inlined leaf 0x8066454C
    r5 = MemoryInline::FlatRead32((r24 + 7736));
    r4 = (r17 & 255);
    r6 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r3 & 255);
    r3 = (r6 + 720);
    // inline leaf 0x805E3D48 (9 guest instruction(s))
    r6 = 12;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 1020);
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
    r0 = (r21 * 192);
    r3 = MemoryInline::FlatRead32((r25 + 8456));
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 389));
}

loc_8060A2B8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(6))) {
        goto loc_8060A2D0;
    }
}

loc_8060A2BC:
{
    r3 = MemoryInline::FlatRead32((r24 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r19);
    MemoryInline::FlatWrite32((r3 + 908), r4);
    goto loc_8060A354;
}

loc_8060A2D0:
{
    r3 = MemoryInline::FlatRead32((r24 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r19);
    MemoryInline::FlatWrite32((r3 + 908), r30);
    goto loc_8060A354;
}

loc_8060A2E4:
{
    r3 = (r1 + 8);
    r4 = 6;
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
    r5 = MemoryInline::FlatRead32((r24 + 7736));
    r4 = r17;
    r6 = MemoryInline::FlatRead32((r5 + 152));
    r5 = (r3 & 255);
    r3 = (r6 + 392);
    ctx->lr = 0x8060A308u;
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
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + -10456));
    r4 = (r17 & 255);
    r5 = 0;
    r3 = (r0 + r18);
    MemoryInline::FlatWrite16((r3 + 3328), static_cast<uint16_t>(r26));
    r0 = MemoryInline::FlatRead32((r27 + -10456));
    r3 = (r0 + r18);
    MemoryInline::FlatWrite32((r3 + 3108), r28);
    r0 = MemoryInline::FlatRead32((r27 + -10456));
    r3 = (r0 + r18);
    MemoryInline::FlatWrite32((r3 + 3104), r29);
    r3 = MemoryInline::FlatRead32((r24 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 720);
    // inline leaf 0x805E3D48 (9 guest instruction(s))
    r6 = 12;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1020);
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
    r3 = MemoryInline::FlatRead32((r24 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + r19);
    MemoryInline::FlatWrite32((r3 + 908), r30);
}

loc_8060A354:
{
    r0 = MemoryInline::FlatRead32((r27 + -10456));
    r3 = (r0 + r18);
    MemoryInline::FlatWrite8((r3 + 3321), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite16((r3 + 3312), static_cast<uint16_t>(r28));
    r3 = MemoryInline::FlatRead32((r27 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060A370:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060A394;
    }
}

loc_8060A374:
{
    r3 = MemoryInline::FlatRead32((r31 + 8472));
    r4 = r21;
    r5 = r16;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x806643F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r27 + -10456));
    r4 = (r0 + r18);
    MemoryInline::FlatWrite32((r4 + 3300), r3);
    goto loc_8060A3CC;
}

loc_8060A394:
{
    r3 = (r3 + r18);
    MemoryInline::FlatWrite32((r3 + 3300), r14);
    goto loc_8060A3CC;
}

loc_8060A3A0:
{
    r0 = (r17 & 255);
    r3 = MemoryInline::FlatRead32((r27 + -10456));
    r0 = (r0 * 240);
    r4 = r17;
    r3 = (r3 + r0);
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 3112), r0);
    r3 = MemoryInline::FlatRead32((r24 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 392);
    ctx->lr = 0x8060A3CCu;
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
    xer = ctx->xer;
}

loc_8060A3CC:
{
    r17 = (r17 + 1);
    r19 = (r19 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(12));
}

loc_8060A3D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8060A0A4;
    }
}

loc_8060A3DC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    ctx->lr = 0x8060A3ECu;
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
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x8060A3F8u;
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
    xer = ctx->xer;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 40));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 48));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 64));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 72));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 80));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 88));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 92));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 96));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 104));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r1 + 108));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r1 + 116));
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80609E84 func_80609E84 preserves=true fpr_mask=0x00000000
