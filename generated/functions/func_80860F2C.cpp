#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80860F2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r0_subfc_sub_4 = 0;
    uint32_t r0_subfc_sub_5 = 0;
    uint32_t r0_subfc_sub_6 = 0;
    uint32_t r0_subfc_sub_7 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r3_adde_left_0 = 0;
    uint32_t r3_adde_left_1 = 0;
    uint32_t r3_adde_left_2 = 0;
    uint32_t r3_adde_left_3 = 0;
    uint32_t r3_adde_left_4 = 0;
    uint32_t r3_adde_left_5 = 0;
    uint32_t r3_adde_left_6 = 0;
    uint32_t r3_adde_left_7 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80860F2C;

loc_80860F2C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r7 = MemoryInline::FlatRead32((r4 + -10424));
    r6 = MemoryInline::FlatRead16((r7 + 54));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
}

loc_80860F54:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_80860F74;
    }
}

loc_80860F58:
{
    r4 = 65536;
    r5 = (r6 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r7 + r0);
    r31 = (r4 + 56);
    goto loc_80860F78;
}

loc_80860F74:
{
    r31 = 0;
}

loc_80860F78:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(60));
}

loc_80860F7C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80862734;
    }
}

loc_80860F80:
{
    r4 = 0x808E0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r4 + -19584);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80860F98u:
        goto loc_80860F98;
        break;
    case 0x80861014u:
        goto loc_80861014;
        break;
    case 0x8086107Cu:
        goto loc_8086107C;
        break;
    case 0x808610FCu:
        goto loc_808610FC;
        break;
    case 0x80861164u:
        goto loc_80861164;
        break;
    case 0x8086129Cu:
        goto loc_8086129C;
        break;
    case 0x80861310u:
        goto loc_80861310;
        break;
    case 0x80861368u:
        goto loc_80861368;
        break;
    case 0x808613B0u:
        goto loc_808613B0;
        break;
    case 0x80861488u:
        goto loc_80861488;
        break;
    case 0x80861524u:
        goto loc_80861524;
        break;
    case 0x80861598u:
        goto loc_80861598;
        break;
    case 0x80861680u:
        goto loc_80861680;
        break;
    case 0x808616F4u:
        goto loc_808616F4;
        break;
    case 0x808617A4u:
        goto loc_808617A4;
        break;
    case 0x808618B8u:
        goto loc_808618B8;
        break;
    case 0x80861938u:
        goto loc_80861938;
        break;
    case 0x80861A1Cu:
        goto loc_80861A1C;
        break;
    case 0x80861A78u:
        goto loc_80861A78;
        break;
    case 0x80861AB8u:
        goto loc_80861AB8;
        break;
    case 0x80861B2Cu:
        goto loc_80861B2C;
        break;
    case 0x80861BA4u:
        goto loc_80861BA4;
        break;
    case 0x80861C04u:
        goto loc_80861C04;
        break;
    case 0x808614E4u:
        goto loc_808614E4;
        break;
    case 0x8086175Cu:
        goto loc_8086175C;
        break;
    case 0x80861C50u:
        goto loc_80861C50;
        break;
    case 0x80861D28u:
        goto loc_80861D28;
        break;
    case 0x80861D84u:
        goto loc_80861D84;
        break;
    case 0x80861DCCu:
        goto loc_80861DCC;
        break;
    case 0x80861E40u:
        goto loc_80861E40;
        break;
    case 0x80861EB4u:
        goto loc_80861EB4;
        break;
    case 0x80861F28u:
        goto loc_80861F28;
        break;
    case 0x80861FCCu:
        goto loc_80861FCC;
        break;
    case 0x80862040u:
        goto loc_80862040;
        break;
    case 0x80862128u:
        goto loc_80862128;
        break;
    case 0x8086219Cu:
        goto loc_8086219C;
        break;
    case 0x80862210u:
        goto loc_80862210;
        break;
    case 0x80862278u:
        goto loc_80862278;
        break;
    case 0x808622B8u:
        goto loc_808622B8;
        break;
    case 0x8086232Cu:
        goto loc_8086232C;
        break;
    case 0x808623A0u:
        goto loc_808623A0;
        break;
    case 0x80862484u:
        goto loc_80862484;
        break;
    case 0x808624F8u:
        goto loc_808624F8;
        break;
    case 0x8086256Cu:
        goto loc_8086256C;
        break;
    case 0x808625C8u:
        goto loc_808625C8;
        break;
    case 0x80862608u:
        goto loc_80862608;
        break;
    case 0x8086267Cu:
        goto loc_8086267C;
        break;
    case 0x808626D8u:
        goto loc_808626D8;
        break;
    case 0x80861F84u:
        goto loc_80861F84;
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

loc_80860F98:
{
    r0 = (r3 + -3);
    r6 = 0;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r30 = (r30_rot_0 & 134217727);
    r29 = (r3 - r30);
    r3 = 2;
    r4 = r29;
    r5 = r30;
    ctx->lr = 0x80860FBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FC44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80860FC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860FCC;
    }
}

loc_80860FC4:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80860FCC:
{
    r0 = (r29 + r30);
    r3 = 0;
    r0 = (r0 * 896);
    r4 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 118));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80860FE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80860FE8:
{
    r0 = MemoryInline::FlatRead32((r4 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80860FF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80860FF4:
{
    r0 = MemoryInline::FlatRead8((r4 + 230));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80860FFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80861000:
{
    r0 = MemoryInline::FlatRead32((r4 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80861008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_8086100C:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861014:
{
    r4 = (r3 + -7);
    r0 = (r3 + -4);
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3 = 3;
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r29 = (r29_rot_1 & 134217727);
    r6 = 0;
    r30 = (r0 - r29);
    r4 = r30;
    r5 = r29;
    ctx->lr = 0x8086103Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FC44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086104C;
    }
}

loc_80861044:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086104C:
{
    r0 = (r30 + r29);
    r3 = 0;
    r0 = (r0 * 896);
    r4 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 342));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861064:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80861068:
{
    r0 = MemoryInline::FlatRead32((r4 + 356));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80861070:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80861074:
{
    r3 = 1;
    goto loc_80862738;
}

loc_8086107C:
{
    r4 = (r3 + -11);
    r0 = (r3 + -8);
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3 = 6;
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r29 = (r29_rot_2 & 134217727);
    r6 = 0;
    r30 = (r0 - r29);
    r4 = r30;
    r5 = r29;
    ctx->lr = 0x808610A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FC44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808610A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808610B4;
    }
}

loc_808610AC:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808610B4:
{
    r0 = (r30 + r29);
    r3 = 0;
    r0 = (r0 * 896);
    r4 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 566));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808610CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808610D0:
{
    r0 = MemoryInline::FlatRead32((r4 + 580));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_808610D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808610DC:
{
    r0 = MemoryInline::FlatRead8((r4 + 678));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808610E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808610E8:
{
    r0 = MemoryInline::FlatRead32((r4 + 692));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_808610F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808610F4:
{
    r3 = 1;
    goto loc_80862738;
}

loc_808610FC:
{
    r4 = (r3 + -15);
    r0 = (r3 + -12);
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3 = 7;
    r29_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r29 = (r29_rot_3 & 134217727);
    r6 = 0;
    r30 = (r0 - r29);
    r4 = r30;
    r5 = r29;
    ctx->lr = 0x80861124u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FC44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861128:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861134;
    }
}

loc_8086112C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861134:
{
    r0 = (r30 + r29);
    r3 = 0;
    r0 = (r0 * 896);
    r4 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 790));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086114C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80861150:
{
    r0 = MemoryInline::FlatRead32((r4 + 804));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80861158:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_8086115C:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861164:
{
}

loc_80861168:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_8086118C;
    }
}

loc_8086116C:
{
    r4 = MemoryInline::FlatRead16((r7 + 54));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = 65536;
    r0 = (r3 + -27664);
    r3 = (r4 & 255);
    r0 = (r0 * r3);
    r3 = (r7 + r0);
    r3 = (r3 + 56);
    goto loc_80861190;
}

loc_8086118C:
{
    r3 = 0;
}

loc_80861190:
{
    r3 = (r3 + 65536);
    r4 = 52;
    r3 = (r3 + -28680);
    // inline leaf 0x8054994C (12 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r4 = (r4 & 31);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = 1;
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8054994C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808611A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808611B0;
    }
}

loc_808611A8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808611B0:
{
    r3 = 0x809C0000u;
    r0 = 4;
    r7 = MemoryInline::FlatRead32((r3 + -10424));
    r8 = 0;
    r3 = 0;
    r5 = 65536;
    ctr = r0;
}

loc_808611CC:
{
    r0 = MemoryInline::FlatRead16((r7 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808611D4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808611F0;
    }
}

loc_808611D8:
{
    r4 = (r0 & 255);
    r0 = (r5 + -27664);
    r0 = (r0 * r4);
    r4 = (r7 + r0);
    r0 = (r4 + 56);
    goto loc_808611F4;
}

loc_808611F0:
{
    r0 = 0;
}

loc_808611F4:
{
    r4 = (r0 + r3);
    r6 = 0;
    r0 = MemoryInline::FlatRead8((r4 + 1910));
}

loc_80861204:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80861218;
    }
}

loc_80861208:
{
    r0 = MemoryInline::FlatRead32((r4 + 1924));
}

loc_80861210:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80861218;
    }
}

loc_80861214:
{
    r6 = 1;
}

loc_80861218:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8086121C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80861228;
    }
}

loc_80861220:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861228:
{
    r0 = MemoryInline::FlatRead16((r7 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + 112);
}

loc_80861234:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80861250;
    }
}

loc_80861238:
{
    r4 = (r0 & 255);
    r0 = (r5 + -27664);
    r0 = (r0 * r4);
    r4 = (r7 + r0);
    r0 = (r4 + 56);
    goto loc_80861254;
}

loc_80861250:
{
    r0 = 0;
}

loc_80861254:
{
    r4 = (r0 + r3);
    r6 = 0;
    r0 = MemoryInline::FlatRead8((r4 + 1910));
}

loc_80861264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80861278;
    }
}

loc_80861268:
{
    r0 = MemoryInline::FlatRead32((r4 + 1924));
}

loc_80861270:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80861278;
    }
}

loc_80861274:
{
    r6 = 1;
}

loc_80861278:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8086127C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80861288;
    }
}

loc_80861280:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861288:
{
    r8 = (r8 + 1);
    r3 = (r3 + 112);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808611CC;
    }
}

loc_80861294:
{
    r3 = 1;
    goto loc_80862738;
}

loc_8086129C:
{
    r3 = 5;
    r4 = 0;
    ctx->lr = 0x808612A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808612AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808612B8;
    }
}

loc_808612B0:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808612B8:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808612C8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808612E8;
    }
}

loc_808612CC:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_808612EC;
}

loc_808612E8:
{
    r4 = 0;
}

loc_808612EC:
{
    r0 = MemoryInline::FlatRead8((r4 + 1686));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808612F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808612FC:
{
    r0 = MemoryInline::FlatRead32((r4 + 1700));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861304:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80861308:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861310:
{
    r3 = 13;
    r4 = 0;
    ctx->lr = 0x8086131Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861320:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086132C;
    }
}

loc_80861324:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086132C:
{
    r29 = 0;
}

loc_80861330:
{
    r3 = r31;
    r5 = r29;
    r4 = 0;
    ctx->lr = 0x80861340u;
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
    r0 = MemoryInline::FlatRead8((r3 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861348:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80861354;
    }
}

loc_8086134C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861354:
{
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(32));
}

loc_8086135C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80861330;
    }
}

loc_80861360:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861368:
{
    r3 = 13;
    r4 = 0;
    ctx->lr = 0x80861374u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861384;
    }
}

loc_8086137C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861384:
{
    r5 = (r31 + 65536);
    r3 = 1000;
    r4 = MemoryInline::FlatRead32((r5 + -28036));
    r0 = MemoryInline::FlatRead32((r5 + -28028));
    r4 = (r4 + r0);
    r0 = (r4 + -1000);
    r3 = (r4 | ~r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_80862738;
}

loc_808613B0:
{
    r3 = 4;
    r4 = 0;
    ctx->lr = 0x808613BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808613C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808613CC;
    }
}

loc_808613C4:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808613CC:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808613DC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808613FC;
    }
}

loc_808613E0:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_80861400;
}

loc_808613FC:
{
    r3 = 0;
}

loc_80861400:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 118), 0, 350u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 118));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861408:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861418;
    }
}

loc_8086140C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 10u, (r3 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861414:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861420;
    }
}

loc_80861418:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861420:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 112u, (r3 + 230));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861428:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861438;
    }
}

loc_8086142C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 122u, (r3 + 240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861434:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861440;
    }
}

loc_80861438:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861440:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 224u, (r3 + 342));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861448:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861458;
    }
}

loc_8086144C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 234u, (r3 + 352));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861454:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861460;
    }
}

loc_80861458:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861460:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 336u, (r3 + 454));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861468:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861478;
    }
}

loc_8086146C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 346u, (r3 + 464));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861474:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861480;
    }
}

loc_80861478:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861480:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861488:
{
    r3 = 12;
    r4 = 0;
    ctx->lr = 0x80861494u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861498:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808614A4;
    }
}

loc_8086149C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808614A4:
{
    r30 = 0;
    r31 = 0;
}

loc_808614AC:
{
    r3 = r31;
    ctx->lr = 0x808614B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80550468u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_808614B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_808614C0;
    }
}

loc_808614BC:
{
    r30 = (r30 + 1);
}

loc_808614C0:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(32));
}

loc_808614C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808614AC;
    }
}

loc_808614CC:
{
    r3 = (static_cast<int32_t>(r30) >> 31);
    r0 = 8;
    r0_subfc_sub_1 = r0;
    r0 = (r30 - r0_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r0_subfc_sub_1) ? 1u : 0u) << 29);
    r0 = 0;
    r3_adde_left_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_adde_left_1 + r0);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    goto loc_80862738;
}

loc_808614E4:
{
    r3 = 12;
    r4 = 0;
    ctx->lr = 0x808614F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808614F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861500;
    }
}

loc_808614F8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861500:
{
    r4 = (r31 + 65536);
    r3 = 100;
    r4 = MemoryInline::FlatRead32((r4 + -28020));
    r0 = (r4 + -100);
    r3 = (r4 | ~r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    goto loc_80862738;
}

loc_80861524:
{
    r3 = 18;
    r4 = 0;
    ctx->lr = 0x80861530u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861534:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861540;
    }
}

loc_80861538:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861540:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80861550:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80861570;
    }
}

loc_80861554:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_80861574;
}

loc_80861570:
{
    r4 = 0;
}

loc_80861574:
{
    r0 = MemoryInline::FlatRead8((r4 + 902));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861580:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80861584:
{
    r0 = MemoryInline::FlatRead32((r4 + 916));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086158C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80861590:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861598:
{
    r3 = 20;
    r4 = 0;
    ctx->lr = 0x808615A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808615A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808615B4;
    }
}

loc_808615AC:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808615B4:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808615C4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808615E4;
    }
}

loc_808615C8:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_808615E8;
}

loc_808615E4:
{
    r3 = 0;
}

loc_808615E8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1462));
    r4 = (r3 + 1376);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808615F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861604;
    }
}

loc_808615F8:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861600:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086160C;
    }
}

loc_80861604:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086160C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1574));
    r4 = (r3 + 1488);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861618:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861628;
    }
}

loc_8086161C:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861624:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861630;
    }
}

loc_80861628:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861630:
{
    r0 = MemoryInline::FlatRead8((r3 + 1686));
    r4 = (r3 + 1600);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086163C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086164C;
    }
}

loc_80861640:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861648:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861654;
    }
}

loc_8086164C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861654:
{
    r0 = MemoryInline::FlatRead8((r3 + 1798));
    r4 = (r3 + 1712);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861660:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861670;
    }
}

loc_80861664:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8086166C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861678;
    }
}

loc_80861670:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861678:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861680:
{
    r3 = 15;
    r4 = 0;
    ctx->lr = 0x8086168Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861690:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086169C;
    }
}

loc_80861694:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086169C:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808616AC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808616CC;
    }
}

loc_808616B0:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_808616D0;
}

loc_808616CC:
{
    r4 = 0;
}

loc_808616D0:
{
    r0 = MemoryInline::FlatRead8((r4 + 2246));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808616DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808616E0:
{
    r0 = MemoryInline::FlatRead32((r4 + 2260));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808616E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_808616EC:
{
    r3 = 1;
    goto loc_80862738;
}

loc_808616F4:
{
    r3 = 17;
    r4 = 0;
    ctx->lr = 0x80861700u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861710;
    }
}

loc_80861708:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861710:
{
    r29 = 0;
    r30 = 0;
}

loc_80861718:
{
    r3 = r31;
    r5 = r30;
    r4 = 0;
    ctx->lr = 0x80861728u;
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
    r0 = MemoryInline::FlatRead8((r3 + 86));
}

loc_80861730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80861748;
    }
}

loc_80861734:
{
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(16));
}

loc_8086173C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80861748;
    }
}

loc_80861740:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861748:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(32));
}

loc_80861750:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80861718;
    }
}

loc_80861754:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086175C:
{
    r3 = 17;
    r4 = 0;
    ctx->lr = 0x80861768u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8086176C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861778;
    }
}

loc_80861770:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861778:
{
    r5 = (r31 + 65536);
    r3 = 250;
    r4 = MemoryInline::FlatRead32((r5 + -28036));
    r0 = MemoryInline::FlatRead32((r5 + -28028));
    r4 = (r4 + r0);
    r0 = (r4 + -250);
    r3 = (r4 | ~r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    goto loc_80862738;
}

loc_808617A4:
{
    r3 = 23;
    r4 = 0;
    ctx->lr = 0x808617B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808617B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808617C0;
    }
}

loc_808617B8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808617C0:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808617D0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808617F0;
    }
}

loc_808617D4:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_808617F4;
}

loc_808617F0:
{
    r3 = 0;
}

loc_808617F4:
{
    r0 = 2;
    r6 = (r3 + 2720);
    r4 = 0;
    r3 = 0;
    ctr = r0;
}

loc_80861808:
{
    r5 = (r6 + r3);
    r0 = MemoryInline::FlatRead8((r5 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861814:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861824;
    }
}

loc_80861818:
{
    r0 = MemoryInline::FlatRead32((r5 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861820:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086182C;
    }
}

loc_80861824:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086182C:
{
    r3 = (r3 + 112);
    r5 = (r6 + r3);
    r0 = MemoryInline::FlatRead8((r5 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086183C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086184C;
    }
}

loc_80861840:
{
    r0 = MemoryInline::FlatRead32((r5 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861848:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861854;
    }
}

loc_8086184C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861854:
{
    r3 = (r3 + 112);
    r5 = (r6 + r3);
    r0 = MemoryInline::FlatRead8((r5 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861864:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861874;
    }
}

loc_80861868:
{
    r0 = MemoryInline::FlatRead32((r5 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861870:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086187C;
    }
}

loc_80861874:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086187C:
{
    r3 = (r3 + 112);
    r5 = (r6 + r3);
    r0 = MemoryInline::FlatRead8((r5 + 86));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086188C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086189C;
    }
}

loc_80861890:
{
    r0 = MemoryInline::FlatRead32((r5 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861898:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808618A4;
    }
}

loc_8086189C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808618A4:
{
    r4 = (r4 + 3);
    r3 = (r3 + 112);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80861808;
    }
}

loc_808618B0:
{
    r3 = 1;
    goto loc_80862738;
}

loc_808618B8:
{
    r3 = 23;
    r4 = 0;
    ctx->lr = 0x808618C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808618C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808618D4;
    }
}

loc_808618CC:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808618D4:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = MemoryInline::FlatRead8((r4 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808618E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808618EC:
{
    r5 = (r31 + 65536);
    r4 = 131072;
    r0 = MemoryInline::FlatRead32((r5 + -28008));
    r6 = (r4 + -31073);
}

loc_80861900:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80861908;
    }
}

loc_80861904:
{
    r6 = r0;
}

loc_80861908:
{
    r5 = (r31 + 65536);
    r4 = 131072;
    r5 = MemoryInline::FlatRead32((r5 + -28012));
    r0 = (r4 + -31073);
}

loc_8086191C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_80861924;
    }
}

loc_80861920:
{
    r0 = r5;
}

loc_80861924:
{
    r0 = (r0 + r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(50));
}

loc_8086192C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80861930:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861938:
{
    r3 = 21;
    r4 = 0;
    ctx->lr = 0x80861944u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861948:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861954;
    }
}

loc_8086194C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861954:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80861964:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80861984;
    }
}

loc_80861968:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_80861988;
}

loc_80861984:
{
    r3 = 0;
}

loc_80861988:
{
    r0 = MemoryInline::FlatRead8((r3 + 1910));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808619A0;
    }
}

loc_80861994:
{
    r0 = MemoryInline::FlatRead32((r3 + 1920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8086199C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808619A8;
    }
}

loc_808619A0:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808619A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 2022));
    r4 = (r3 + 1936);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808619B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808619C4;
    }
}

loc_808619B8:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_808619C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808619CC;
    }
}

loc_808619C4:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808619CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 2134));
    r4 = (r3 + 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808619D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808619E8;
    }
}

loc_808619DC:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_808619E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808619F0;
    }
}

loc_808619E8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808619F0:
{
    r0 = MemoryInline::FlatRead8((r3 + 2246));
    r4 = (r3 + 2160);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808619FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861A0C;
    }
}

loc_80861A00:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861A08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861A14;
    }
}

loc_80861A0C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861A14:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861A1C:
{
    r3 = 22;
    r4 = 0;
    ctx->lr = 0x80861A28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861A2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861A38;
    }
}

loc_80861A30:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861A38:
{
    r31 = 0;
    r30 = 0;
}

loc_80861A40:
{
    r3 = r30;
    ctx->lr = 0x80861A48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80550468u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80861A4C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80861A54;
    }
}

loc_80861A50:
{
    r31 = (r31 + 1);
}

loc_80861A54:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(32));
}

loc_80861A5C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80861A40;
    }
}

loc_80861A60:
{
    r3 = (static_cast<int32_t>(r31) >> 31);
    r0 = 4;
    r0_subfc_sub_2 = r0;
    r0 = (r31 - r0_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0_subfc_sub_2) ? 1u : 0u) << 29);
    r0 = 0;
    r3_adde_left_2 = r3;
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_adde_left_2 + r0);
    r3 = (r3 + r3_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    goto loc_80862738;
}

loc_80861A78:
{
    r3 = 22;
    r4 = 0;
    ctx->lr = 0x80861A84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861A88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861A94;
    }
}

loc_80861A8C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861A94:
{
    r4 = (r31 + 65536);
    r3 = 25;
    r4 = MemoryInline::FlatRead32((r4 + -28020));
    r0 = (r4 + -25);
    r3 = (r4 | ~r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    goto loc_80862738;
}

loc_80861AB8:
{
    r3 = 19;
    r4 = 0;
    ctx->lr = 0x80861AC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861AC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861AD4;
    }
}

loc_80861ACC:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861AD4:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80861AE4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80861B04;
    }
}

loc_80861AE8:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_80861B08;
}

loc_80861B04:
{
    r4 = 0;
}

loc_80861B08:
{
    r0 = MemoryInline::FlatRead8((r4 + 342));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861B14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80861B18:
{
    r0 = MemoryInline::FlatRead32((r4 + 356));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861B20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80861B24:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861B2C:
{
    r3 = (r31 + 65536);
    r4 = 12;
    r3 = (r3 + -28680);
    // inline leaf 0x8054994C (12 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r4 = (r4 & 31);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r5 = 1;
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x8054994C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861B40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861B4C;
    }
}

loc_80861B44:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861B4C:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80861B5C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80861B7C;
    }
}

loc_80861B60:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_80861B80;
}

loc_80861B7C:
{
    r4 = 0;
}

loc_80861B80:
{
    r0 = MemoryInline::FlatRead8((r4 + 1350));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861B8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80861B90:
{
    r0 = MemoryInline::FlatRead32((r4 + 1364));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861B98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80861B9C:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861BA4:
{
    r3 = (r31 + 65536);
    r4 = 13;
    r3 = (r3 + -28680);
    // inline leaf 0x8054994C (12 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r4 = (r4 & 31);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r5 = 1;
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x8054994C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861BB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861BC4;
    }
}

loc_80861BBC:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861BC4:
{
    r31 = 0;
    r30 = 0;
}

loc_80861BCC:
{
    r3 = r30;
    ctx->lr = 0x80861BD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80550468u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80861BD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80861BE0;
    }
}

loc_80861BDC:
{
    r31 = (r31 + 1);
}

loc_80861BE0:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(32));
}

loc_80861BE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80861BCC;
    }
}

loc_80861BEC:
{
    r3 = (static_cast<int32_t>(r31) >> 31);
    r0 = 32;
    r0_subfc_sub_3 = r0;
    r0 = (r31 - r0_subfc_sub_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0_subfc_sub_3) ? 1u : 0u) << 29);
    r0 = 0;
    r3_adde_left_3 = r3;
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r3_adde_left_3 + r0);
    r3 = (r3 + r3_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_left_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    goto loc_80862738;
}

loc_80861C04:
{
    r3 = (r31 + 65536);
    r4 = 13;
    r3 = (r3 + -28680);
    // inline leaf 0x8054994C (12 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r4 = (r4 & 31);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r5 = 1;
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x8054994C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861C18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861C24;
    }
}

loc_80861C1C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861C24:
{
    r5 = (r31 + 65536);
    r3 = 5000;
    r4 = MemoryInline::FlatRead32((r5 + -28036));
    r0 = MemoryInline::FlatRead32((r5 + -28028));
    r4 = (r4 + r0);
    r0 = (r4 + -5000);
    r3 = (r4 | ~r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_9 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    goto loc_80862738;
}

loc_80861C50:
{
    r3 = 9;
    r4 = 0;
    ctx->lr = 0x80861C5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861C60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861C6C;
    }
}

loc_80861C64:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861C6C:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80861C7C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80861C9C;
    }
}

loc_80861C80:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_80861CA0;
}

loc_80861C9C:
{
    r3 = 0;
}

loc_80861CA0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 566), 0, 350u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 566));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861CA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861CB8;
    }
}

loc_80861CAC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 10u, (r3 + 576));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861CB4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861CC0;
    }
}

loc_80861CB8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861CC0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 112u, (r3 + 678));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861CC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861CD8;
    }
}

loc_80861CCC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 122u, (r3 + 688));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861CD4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861CE0;
    }
}

loc_80861CD8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861CE0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 224u, (r3 + 790));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861CE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861CF8;
    }
}

loc_80861CEC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 234u, (r3 + 800));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861CF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861D00;
    }
}

loc_80861CF8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861D00:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 336u, (r3 + 902));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861D08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861D18;
    }
}

loc_80861D0C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 346u, (r3 + 912));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80861D14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80861D20;
    }
}

loc_80861D18:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861D20:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861D28:
{
    r3 = 12;
    r4 = 0;
    ctx->lr = 0x80861D34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861D38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861D44;
    }
}

loc_80861D3C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861D44:
{
    r31 = 0;
    r30 = 0;
}

loc_80861D4C:
{
    r3 = r30;
    ctx->lr = 0x80861D54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80550468u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80861D58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80861D60;
    }
}

loc_80861D5C:
{
    r31 = (r31 + 1);
}

loc_80861D60:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(32));
}

loc_80861D68:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80861D4C;
    }
}

loc_80861D6C:
{
    r3 = (static_cast<int32_t>(r31) >> 31);
    r0 = 1;
    r0_subfc_sub_4 = r0;
    r0 = (r31 - r0_subfc_sub_4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0_subfc_sub_4) ? 1u : 0u) << 29);
    r0 = 0;
    r3_adde_left_4 = r3;
    r3_ca_4 = (xer >> 29) & 1u;
    r3 = (r3_adde_left_4 + r0);
    r3 = (r3 + r3_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_left_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    goto loc_80862738;
}

loc_80861D84:
{
    r3 = 12;
    r4 = 0;
    ctx->lr = 0x80861D90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861D94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861DA0;
    }
}

loc_80861D98:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861DA0:
{
    r5 = (r31 + 65536);
    r3 = 50;
    r4 = MemoryInline::FlatRead32((r5 + -28036));
    r0 = MemoryInline::FlatRead32((r5 + -28028));
    r4 = (r4 + r0);
    r0 = (r4 + -50);
    r3 = (r4 | ~r3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_10 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    goto loc_80862738;
}

loc_80861DCC:
{
    r3 = 15;
    r4 = 0;
    ctx->lr = 0x80861DD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861DDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861DE8;
    }
}

loc_80861DE0:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861DE8:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80861DF8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80861E18;
    }
}

loc_80861DFC:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_80861E1C;
}

loc_80861E18:
{
    r4 = 0;
}

loc_80861E1C:
{
    r0 = MemoryInline::FlatRead8((r4 + 3590));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861E28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80861E2C:
{
    r0 = MemoryInline::FlatRead32((r4 + 3604));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861E34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80861E38:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861E40:
{
    r3 = 10;
    r4 = 0;
    ctx->lr = 0x80861E4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861E50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861E5C;
    }
}

loc_80861E54:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861E5C:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80861E6C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80861E8C;
    }
}

loc_80861E70:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_80861E90;
}

loc_80861E8C:
{
    r4 = 0;
}

loc_80861E90:
{
    r0 = MemoryInline::FlatRead8((r4 + 790));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861E9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80861EA0:
{
    r0 = MemoryInline::FlatRead32((r4 + 804));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861EA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80861EAC:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861EB4:
{
    r3 = 13;
    r4 = 0;
    ctx->lr = 0x80861EC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861EC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861ED0;
    }
}

loc_80861EC8:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861ED0:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80861EE0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80861F00;
    }
}

loc_80861EE4:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_80861F04;
}

loc_80861F00:
{
    r4 = 0;
}

loc_80861F04:
{
    r0 = MemoryInline::FlatRead8((r4 + 2582));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861F10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80861F14:
{
    r0 = MemoryInline::FlatRead32((r4 + 2596));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861F1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80861F20:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80861F28:
{
    r3 = 16;
    r4 = 0;
    ctx->lr = 0x80861F34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861F38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861F44;
    }
}

loc_80861F3C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861F44:
{
    r31 = 0;
    r30 = 0;
}

loc_80861F4C:
{
    r3 = r30;
    ctx->lr = 0x80861F54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80550468u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80861F58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80861F60;
    }
}

loc_80861F5C:
{
    r31 = (r31 + 1);
}

loc_80861F60:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(32));
}

loc_80861F68:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80861F4C;
    }
}

loc_80861F6C:
{
    r3 = (static_cast<int32_t>(r31) >> 31);
    r0 = 24;
    r0_subfc_sub_5 = r0;
    r0 = (r31 - r0_subfc_sub_5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0_subfc_sub_5) ? 1u : 0u) << 29);
    r0 = 0;
    r3_adde_left_5 = r3;
    r3_ca_5 = (xer >> 29) & 1u;
    r3 = (r3_adde_left_5 + r0);
    r3 = (r3 + r3_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_left_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    goto loc_80862738;
}

loc_80861F84:
{
    r3 = 16;
    r4 = 0;
    ctx->lr = 0x80861F90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861F94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861FA0;
    }
}

loc_80861F98:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861FA0:
{
    r5 = (r31 + 65536);
    r3 = 3000;
    r4 = MemoryInline::FlatRead32((r5 + -28036));
    r0 = MemoryInline::FlatRead32((r5 + -28028));
    r4 = (r4 + r0);
    r0 = (r4 + -3000);
    r3 = (r4 | ~r3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_11 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_11 & 1);
    goto loc_80862738;
}

loc_80861FCC:
{
    r3 = 11;
    r4 = 0;
    ctx->lr = 0x80861FD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80861FDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80861FE8;
    }
}

loc_80861FE0:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80861FE8:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80861FF8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80862018;
    }
}

loc_80861FFC:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_8086201C;
}

loc_80862018:
{
    r4 = 0;
}

loc_8086201C:
{
    r0 = MemoryInline::FlatRead8((r4 + 454));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862028:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_8086202C:
{
    r0 = MemoryInline::FlatRead32((r4 + 468));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862034:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80862038:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80862040:
{
    r3 = 14;
    r4 = 0;
    ctx->lr = 0x8086204Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80862050:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086205C;
    }
}

loc_80862054:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086205C:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8086206C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8086208C;
    }
}

loc_80862070:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_80862090;
}

loc_8086208C:
{
    r3 = 0;
}

loc_80862090:
{
    r0 = MemoryInline::FlatRead8((r3 + 2358));
    r4 = (r3 + 2272);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086209C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808620AC;
    }
}

loc_808620A0:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_808620A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808620B4;
    }
}

loc_808620AC:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808620B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 2470));
    r4 = (r3 + 2384);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808620C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808620D0;
    }
}

loc_808620C4:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_808620CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808620D8;
    }
}

loc_808620D0:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808620D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 2582));
    r4 = (r3 + 2496);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808620E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808620F4;
    }
}

loc_808620E8:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_808620F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808620FC;
    }
}

loc_808620F4:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808620FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 2694));
    r4 = (r3 + 2608);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862108:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862118;
    }
}

loc_8086210C:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80862114:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80862120;
    }
}

loc_80862118:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862120:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80862128:
{
    r3 = 17;
    r4 = 0;
    ctx->lr = 0x80862134u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80862138:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862144;
    }
}

loc_8086213C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862144:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80862154:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80862174;
    }
}

loc_80862158:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_80862178;
}

loc_80862174:
{
    r4 = 0;
}

loc_80862178:
{
    r0 = MemoryInline::FlatRead8((r4 + 2694));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862184:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80862188:
{
    r0 = MemoryInline::FlatRead32((r4 + 2708));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862190:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80862194:
{
    r3 = 1;
    goto loc_80862738;
}

loc_8086219C:
{
    r3 = 27;
    r4 = 0;
    ctx->lr = 0x808621A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808621AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808621B8;
    }
}

loc_808621B0:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808621B8:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808621C8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808621E8;
    }
}

loc_808621CC:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_808621EC;
}

loc_808621E8:
{
    r4 = 0;
}

loc_808621EC:
{
    r0 = MemoryInline::FlatRead8((r4 + 2134));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808621F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808621FC:
{
    r0 = MemoryInline::FlatRead32((r4 + 2148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862204:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80862208:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80862210:
{
    r3 = 30;
    r4 = 0;
    ctx->lr = 0x8086221Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80862220:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086222C;
    }
}

loc_80862224:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086222C:
{
    r29 = 0;
    r30 = 0;
}

loc_80862234:
{
    r3 = r31;
    r5 = r30;
    r4 = 0;
    ctx->lr = 0x80862244u;
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
    r0 = MemoryInline::FlatRead8((r3 + 86));
}

loc_8086224C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80862264;
    }
}

loc_80862250:
{
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(8));
}

loc_80862258:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80862264;
    }
}

loc_8086225C:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80862264:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(32));
}

loc_8086226C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80862234;
    }
}

loc_80862270:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862278:
{
    r3 = 30;
    r4 = 0;
    ctx->lr = 0x80862284u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80862288:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862294;
    }
}

loc_8086228C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862294:
{
    r4 = (r31 + 65536);
    r3 = 5;
    r4 = MemoryInline::FlatRead32((r4 + -28020));
    r0 = (r4 + -5);
    r3 = (r4 | ~r3);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_12 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & 1);
    goto loc_80862738;
}

loc_808622B8:
{
    r3 = 33;
    r4 = 0;
    ctx->lr = 0x808622C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808622C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808622D4;
    }
}

loc_808622CC:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808622D4:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808622E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80862304;
    }
}

loc_808622E8:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_80862308;
}

loc_80862304:
{
    r4 = 0;
}

loc_80862308:
{
    r0 = MemoryInline::FlatRead8((r4 + 3478));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862314:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80862318:
{
    r0 = MemoryInline::FlatRead32((r4 + 3492));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862320:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80862324:
{
    r3 = 1;
    goto loc_80862738;
}

loc_8086232C:
{
    r3 = 28;
    r4 = 0;
    ctx->lr = 0x80862338u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8086233C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862348;
    }
}

loc_80862340:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862348:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80862358:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80862378;
    }
}

loc_8086235C:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_8086237C;
}

loc_80862378:
{
    r4 = 0;
}

loc_8086237C:
{
    r0 = MemoryInline::FlatRead8((r4 + 1798));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862388:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_8086238C:
{
    r0 = MemoryInline::FlatRead32((r4 + 1812));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862394:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80862398:
{
    r3 = 1;
    goto loc_80862738;
}

loc_808623A0:
{
    r3 = 31;
    r4 = 0;
    ctx->lr = 0x808623ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808623B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808623BC;
    }
}

loc_808623B4:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808623BC:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808623CC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808623EC;
    }
}

loc_808623D0:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_808623F0;
}

loc_808623EC:
{
    r3 = 0;
}

loc_808623F0:
{
    r0 = MemoryInline::FlatRead8((r3 + 1014));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808623F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862408;
    }
}

loc_808623FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 1024));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80862404:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80862410;
    }
}

loc_80862408:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862410:
{
    r0 = MemoryInline::FlatRead8((r3 + 1126));
    r4 = (r3 + 1040);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086241C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086242C;
    }
}

loc_80862420:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80862428:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80862434;
    }
}

loc_8086242C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862434:
{
    r0 = MemoryInline::FlatRead8((r3 + 1238));
    r4 = (r3 + 1152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862450;
    }
}

loc_80862444:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8086244C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80862458;
    }
}

loc_80862450:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862458:
{
    r0 = MemoryInline::FlatRead8((r3 + 1350));
    r4 = (r3 + 1264);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862464:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862474;
    }
}

loc_80862468:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80862470:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086247C;
    }
}

loc_80862474:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086247C:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80862484:
{
    r3 = 34;
    r4 = 0;
    ctx->lr = 0x80862490u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80862494:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808624A0;
    }
}

loc_80862498:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808624A0:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808624B0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808624D0;
    }
}

loc_808624B4:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_808624D4;
}

loc_808624D0:
{
    r4 = 0;
}

loc_808624D4:
{
    r0 = MemoryInline::FlatRead8((r4 + 3030));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808624E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808624E4:
{
    r0 = MemoryInline::FlatRead32((r4 + 3044));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808624EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_808624F0:
{
    r3 = 1;
    goto loc_80862738;
}

loc_808624F8:
{
    r3 = 29;
    r4 = 0;
    ctx->lr = 0x80862504u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80862508:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862514;
    }
}

loc_8086250C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862514:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80862524:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80862544;
    }
}

loc_80862528:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_80862548;
}

loc_80862544:
{
    r4 = 0;
}

loc_80862548:
{
    r0 = MemoryInline::FlatRead8((r4 + 1238));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80862558:
{
    r0 = MemoryInline::FlatRead32((r4 + 1252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862560:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80862564:
{
    r3 = 1;
    goto loc_80862738;
}

loc_8086256C:
{
    r3 = 32;
    r4 = 0;
    ctx->lr = 0x80862578u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8086257C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862588;
    }
}

loc_80862580:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862588:
{
    r31 = 0;
    r30 = 0;
}

loc_80862590:
{
    r3 = r30;
    ctx->lr = 0x80862598u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80550468u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8086259C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_808625A4;
    }
}

loc_808625A0:
{
    r31 = (r31 + 1);
}

loc_808625A4:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(32));
}

loc_808625AC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80862590;
    }
}

loc_808625B0:
{
    r3 = (static_cast<int32_t>(r31) >> 31);
    r0 = 12;
    r0_subfc_sub_6 = r0;
    r0 = (r31 - r0_subfc_sub_6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0_subfc_sub_6) ? 1u : 0u) << 29);
    r0 = 0;
    r3_adde_left_6 = r3;
    r3_ca_6 = (xer >> 29) & 1u;
    r3 = (r3_adde_left_6 + r0);
    r3 = (r3 + r3_ca_6);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_left_6)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_6)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    goto loc_80862738;
}

loc_808625C8:
{
    r3 = 32;
    r4 = 0;
    ctx->lr = 0x808625D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808625D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808625E4;
    }
}

loc_808625DC:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808625E4:
{
    r4 = (r31 + 65536);
    r3 = 200;
    r4 = MemoryInline::FlatRead32((r4 + -28020));
    r0 = (r4 + -200);
    r3 = (r4 | ~r3);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_13 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_13 & 1);
    goto loc_80862738;
}

loc_80862608:
{
    r3 = 35;
    r4 = 0;
    ctx->lr = 0x80862614u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805500CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80862618:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862624;
    }
}

loc_8086261C:
{
    r3 = 0;
    goto loc_80862738;
}

loc_80862624:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80862634:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80862654;
    }
}

loc_80862638:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_80862658;
}

loc_80862654:
{
    r4 = 0;
}

loc_80862658:
{
    r0 = MemoryInline::FlatRead8((r4 + 3142));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862664:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80862668:
{
    r0 = MemoryInline::FlatRead32((r4 + 3156));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862670:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80862674:
{
    r3 = 1;
    goto loc_80862738;
}

loc_8086267C:
{
    r3 = (r31 + 65536);
    r4 = 30;
    r3 = (r3 + -28680);
    // inline leaf 0x8054994C (12 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r4 = (r4 & 31);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r5 = 1;
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_14 & 1);
    // end of inlined leaf 0x8054994C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80862690:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086269C;
    }
}

loc_80862694:
{
    r3 = 0;
    goto loc_80862738;
}

loc_8086269C:
{
    r0 = MemoryInline::FlatRead8((r31 + 454));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808626A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808626AC:
{
    r0 = MemoryInline::FlatRead32((r31 + 468));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_808626B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808626B8:
{
    r0 = MemoryInline::FlatRead8((r31 + 902));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808626C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808626C4:
{
    r0 = MemoryInline::FlatRead32((r31 + 916));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_808626CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808626D0:
{
    r3 = 1;
    goto loc_80862738;
}

loc_808626D8:
{
    r3 = (r31 + 65536);
    r4 = 31;
    r3 = (r3 + -28680);
    // inline leaf 0x8054994C (12 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r4 = (r4 & 31);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r5 = 1;
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_15 & 1);
    // end of inlined leaf 0x8054994C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808626EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808626F8;
    }
}

loc_808626F0:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808626F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 1350));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80862704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80862708:
{
    r0 = MemoryInline::FlatRead32((r31 + 1364));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80862710:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80862714:
{
    r0 = MemoryInline::FlatRead8((r31 + 1798));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086271C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_80862720:
{
    r0 = MemoryInline::FlatRead32((r31 + 1812));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80862728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_8086272C:
{
    r3 = 1;
    goto loc_80862738;
}

loc_80862734:
{
    r3 = 0;
}

loc_80862738:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80860F2C func_80860F2C preserves=true fpr_mask=0x00000000
