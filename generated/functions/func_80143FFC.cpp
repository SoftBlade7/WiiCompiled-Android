#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80143FFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80143FFC;

loc_80143FFC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x80280000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_8014400C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = (r7 + 19552);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801441BC;
    }
}

loc_80144024:
{
    r8 = 0x80340000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 1048560);
    r8 = (r8 + -30144);
    r31 = (r8 + r0);
    r0 = MemoryInline::FlatRead8((r31 + 15));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014403C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801441BC;
    }
}

loc_80144040:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80144048:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801440B4;
    }
}

loc_8014404C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8014405C;
    }
}

loc_80144050:
{
}

loc_80144054:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_80144068;
    }
}

loc_80144058:
{
    goto loc_8014418C;
}

loc_8014405C:
{
}

loc_80144060:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_8014418C;
    }
}

loc_80144064:
{
    goto loc_80144100;
}

loc_80144068:
{
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r3 = 276;
    r0 = MemoryInline::FlatRead8((r8 + 40));
    r30 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80144080:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 1);
    r0 = (0 - r0);
    r0 = (r3 & ~r0);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014418C;
    }
}

loc_8014409C:
{
    r3 = 917504;
    r4 = (r7 + 0);
    r3 = (r3 + 3);
    r5 = (r0 & 65535);
    ctx->lr = 0x801440B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8014418C;
}

loc_801440B4:
{
    r5 = MemoryInline::FlatRead16(r4);
}

loc_801440BC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801440E0;
    }
}

loc_801440C0:
{
    r0 = MemoryInline::FlatRead8((r8 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_801440C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014418C;
    }
}

loc_801440CC:
{
    r3 = 917504;
    r4 = (r7 + 60);
    r3 = (r3 + 3);
    ctx->lr = 0x801440DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8014418C;
}

loc_801440E0:
{
    r0 = MemoryInline::FlatRead8((r8 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_801440E8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014418C;
    }
}

loc_801440EC:
{
    r3 = 917504;
    r4 = (r7 + 112);
    r3 = (r3 + 3);
    ctx->lr = 0x801440FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8014418C;
}

loc_80144100:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 255);
}

loc_8014410C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8))) {
        goto loc_80144160;
    }
}

loc_80144110:
{
    r3 = 0x80280000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + 19756);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80144128u:
        goto loc_80144128;
        break;
    case 0x80144130u:
        goto loc_80144130;
        break;
    case 0x80144138u:
        goto loc_80144138;
        break;
    case 0x80144160u:
        goto loc_80144160;
        break;
    case 0x80144140u:
        goto loc_80144140;
        break;
    case 0x80144148u:
        goto loc_80144148;
        break;
    case 0x80144150u:
        goto loc_80144150;
        break;
    case 0x80144158u:
        goto loc_80144158;
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
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80144128:
{
    r5 = 0;
    goto loc_80144164;
}

loc_80144130:
{
    r5 = 267;
    goto loc_80144164;
}

loc_80144138:
{
    r5 = 259;
    goto loc_80144164;
}

loc_80144140:
{
    r5 = 265;
    goto loc_80144164;
}

loc_80144148:
{
    r5 = 268;
    goto loc_80144164;
}

loc_80144150:
{
    r5 = 269;
    goto loc_80144164;
}

loc_80144158:
{
    r5 = 277;
    goto loc_80144164;
}

loc_80144160:
{
    r5 = 276;
}

loc_80144164:
{
    r3 = 0x80340000u;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r5));
    r3 = (r3 + -30144);
    r0 = MemoryInline::FlatRead8((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80144178:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014418C;
    }
}

loc_8014417C:
{
    r3 = 917504;
    r4 = (r7 + 152);
    r3 = (r3 + 3);
    ctx->lr = 0x8014418Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8014418C:
{
    r12 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80144194:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801441A8;
    }
}

loc_80144198:
{
    r4 = r30;
    r3 = MemoryInline::FlatRead16((r31 + 12));
    ctr = r12;
    ctx->lr = 0x801441A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801441A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801441AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801441BC;
    }
}

loc_801441B0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    MemoryInline::FlatWrite8((r31 + 15), static_cast<uint8_t>(r0));
}

loc_801441BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80143FFC func_80143FFC preserves=true fpr_mask=0x00000000
