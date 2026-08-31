#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ECF20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_2 = 0;
    uint32_t r3_subfe_rb_3 = 0;
    uint32_t r4_subfc_min_0 = 0;
    uint32_t r4_subfc_min_1 = 0;
    uint32_t r4_subfc_min_2 = 0;
    uint32_t r4_subfc_min_3 = 0;
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
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800ECF20;

loc_800ECF20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80280000u;
    r31 = (r31 + -23576);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead32((r13 + -26816));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
}

loc_800ECF44:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800ED5A8;
    }
}

loc_800ECF48:
{
    r3 = 0x80280000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -23004);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800ED5A8u:
        goto loc_800ED5A8;
        break;
    case 0x800ECF60u:
        goto loc_800ECF60;
        break;
    case 0x800ECFA4u:
        goto loc_800ECFA4;
        break;
    case 0x800ECFCCu:
        goto loc_800ECFCC;
        break;
    case 0x800ECFF4u:
        goto loc_800ECFF4;
        break;
    case 0x800ED084u:
        goto loc_800ED084;
        break;
    case 0x800ED0A8u:
        goto loc_800ED0A8;
        break;
    case 0x800ED0D0u:
        goto loc_800ED0D0;
        break;
    case 0x800ED0F4u:
        goto loc_800ED0F4;
        break;
    case 0x800ED138u:
        goto loc_800ED138;
        break;
    case 0x800ED16Cu:
        goto loc_800ED16C;
        break;
    case 0x800ED260u:
        goto loc_800ED260;
        break;
    case 0x800ED28Cu:
        goto loc_800ED28C;
        break;
    case 0x800ED2B4u:
        goto loc_800ED2B4;
        break;
    case 0x800ED2E0u:
        goto loc_800ED2E0;
        break;
    case 0x800ED308u:
        goto loc_800ED308;
        break;
    case 0x800ED348u:
        goto loc_800ED348;
        break;
    case 0x800ED3A4u:
        goto loc_800ED3A4;
        break;
    case 0x800ED3C8u:
        goto loc_800ED3C8;
        break;
    case 0x800ED3F0u:
        goto loc_800ED3F0;
        break;
    case 0x800ED430u:
        goto loc_800ED430;
        break;
    case 0x800ED524u:
        goto loc_800ED524;
        break;
    case 0x800ED53Cu:
        goto loc_800ED53C;
        break;
    case 0x800ED560u:
        goto loc_800ED560;
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
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800ECF60:
{
    r5 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r5 + 23012));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_800ECF6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ECF7C;
    }
}

loc_800ECF70:
{
    r0 = 19;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ECF7C:
{
    r6 = 0x800F0000u;
    r3 = MemoryInline::FlatRead32((r13 + -31912));
    r4 = (r5 + 23204);
    r7 = (r5 + 23016);
    r6 = (r6 + -10544);
    r5 = 1;
    ctx->lr = 0x800ECF98u;
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
    InvokeDirectCpu<0x8019C990u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 2;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ECFA4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r3 + 23000));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ECFB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED5A8;
    }
}

loc_800ECFB4:
{
    r3 = 3;
    r4 = 1;
    r5 = 9;
    r6 = 7;
    ctx->lr = 0x800ECFC8u;
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
    InvokeDirectCpu<0x800EEBC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800ED5A8;
}

loc_800ECFCC:
{
    r4 = MemoryInline::FlatRead32((r13 + -26820));
    r6 = 0x800F0000u;
    r6 = (r6 + -10544);
    r5 = 32;
    r3 = (r4 + 23204);
    r7 = (r4 + 23016);
    ctx->lr = 0x800ECFE8u;
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
    InvokeDirectCpu<0x8019B80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 4;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ECFF4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r3 + 23000));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED000:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED5A8;
    }
}

loc_800ED004:
{
    r5 = MemoryInline::FlatRead32((r3 + 23004));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(32));
}

loc_800ED00C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ED048;
    }
}

loc_800ED010:
{
    r7 = 0x802F0000u;
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = (r7 + 7352);
    r4 = (r31 + 408);
    r3 = 16777216;
    MemoryInline::FlatWriteRam32((r7 + 436), r6);
    MemoryInline::FlatWriteRam32((r7 + 432), r5);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800ED038u;
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
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 23004), r0);
    goto loc_800ED06C;
}

loc_800ED048:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800ED04C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800ED06C;
    }
}

loc_800ED050:
{
    r4 = (r31 + 432);
    r3 = 16777216;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800ED060u;
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
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 23004), r0);
}

loc_800ED06C:
{
    r3 = 17;
    r4 = 3;
    r5 = 27;
    r6 = 5;
    ctx->lr = 0x800ED080u;
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
    InvokeDirectCpu<0x800EEBC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800ED5A8;
}

loc_800ED084:
{
    r5 = MemoryInline::FlatRead32((r13 + -26820));
    r4 = 0x800F0000u;
    r4 = (r4 + -10544);
    r3 = (r5 + 23204);
    r5 = (r5 + 23016);
    ctx->lr = 0x800ED09Cu;
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
    InvokeDirectCpu<0x8019CAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 6;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED0A8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r3 + 23000));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED0B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED5A8;
    }
}

loc_800ED0B8:
{
    r3 = 7;
    r4 = 5;
    r5 = 27;
    r6 = 27;
    ctx->lr = 0x800ED0CCu;
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
    InvokeDirectCpu<0x800EEBC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800ED5A8;
}

loc_800ED0D0:
{
    r5 = MemoryInline::FlatRead32((r13 + -26820));
    r4 = 0x800F0000u;
    r3 = MemoryInline::FlatRead32((r13 + -31912));
    r4 = (r4 + -10544);
    r5 = (r5 + 23016);
    ctx->lr = 0x800ED0E8u;
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
    InvokeDirectCpu<0x8019B6E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 8;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED0F4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r3 + 23000));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED100:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED5A8;
    }
}

loc_800ED104:
{
    r0 = MemoryInline::FlatRead32((r3 + 23004));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED10C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ED120;
    }
}

loc_800ED110:
{
    r4 = (r31 + 464);
    r3 = 16777216;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800ED120u;
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
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800ED120:
{
    r3 = 9;
    r4 = 7;
    r5 = 9;
    r6 = 27;
    ctx->lr = 0x800ED134u;
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
    InvokeDirectCpu<0x800EEBC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800ED5A8;
}

loc_800ED138:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r8 = 0;
    r7 = 0;
    ctx->lr = 0x800ED150u;
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
    InvokeDirectCpu<0x800ED6E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = 10;
    MemoryInline::FlatWrite32((r5 + 23356), r4);
    MemoryInline::FlatWrite32((r5 + 23352), r3);
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED16C:
{
    r3 = 0x802F0000u;
    r0 = MemoryInline::FlatRead32((r3 + 7352));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800ED178:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ED188;
    }
}

loc_800ED17C:
{
    r0 = 11;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED188:
{
}

loc_800ED18C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(-20999))) {
        goto loc_800ED1A4;
    }
}

loc_800ED190:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-20102));
}

loc_800ED194:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800ED1A4;
    }
}

loc_800ED198:
{
    r0 = 23;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED1A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED1A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ED1E4;
    }
}

loc_800ED1AC:
{
    r4 = MemoryInline::FlatRead32((r13 + -26820));
    r3 = MemoryInline::FlatRead32((r4 + 22996));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 22996), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r3 + 22996));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_800ED1C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ED1D8;
    }
}

loc_800ED1CC:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED1D8:
{
    r0 = 23;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED1E4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = 0x80000000u;
    r6 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r5 + 248));
    r5 = 274857984;
    r7 = MemoryInline::FlatRead32((r6 + 23356));
    r5 = (r5 + 19923);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_2 & 1073741823);
    r6 = MemoryInline::FlatRead32((r6 + 23352));
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r0)) >> 32));
    r4_subfc_min_1 = r4;
    r4 = (r4_subfc_min_1 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_1) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r3_subfe_rb_1 = r3;
    r3_not_1 = ~(r6);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_subfe_rb_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_1 & 67108863);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800216F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    r6 = 30000;
    r5 = (r3 ^ -2147483648);
    r0 = (r0 ^ -2147483648);
    r3 = (r6 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r5_not_1 = ~(r5);
    r5_ca_1 = (xer >> 29) & 1u;
    r5 = (r5_not_1 + r0);
    r5 = (r5 + r5_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_2 = ~(r0);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r0);
    r5 = (r5 + r5_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (0 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED5A8;
    }
}

loc_800ED244:
{
    r4 = (r31 + 492);
    r3 = 16777216;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800ED254u;
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
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 21;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED260:
{
    r4 = MemoryInline::FlatRead32((r13 + -26820));
    r6 = 0x800F0000u;
    r3 = MemoryInline::FlatRead32((r13 + -31912));
    r6 = (r6 + -10544);
    r7 = (r4 + 23016);
    r4 = 63;
    r5 = 0;
    ctx->lr = 0x800ED280u;
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
    InvokeDirectCpu<0x8019B524u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 12;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED28C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r3 + 23000));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED298:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED5A8;
    }
}

loc_800ED29C:
{
    r3 = 13;
    r4 = 11;
    r5 = 27;
    r6 = 27;
    ctx->lr = 0x800ED2B0u;
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
    InvokeDirectCpu<0x800EEBC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800ED5A8;
}

loc_800ED2B4:
{
    r5 = MemoryInline::FlatRead32((r13 + -26820));
    r6 = 0x800F0000u;
    r3 = MemoryInline::FlatRead32((r13 + -31912));
    r6 = (r6 + -10544);
    r4 = (r5 + 23204);
    r7 = (r5 + 23016);
    r5 = 2;
    ctx->lr = 0x800ED2D4u;
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
    InvokeDirectCpu<0x8019C990u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 14;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED2E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r3 + 23000));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED2EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED5A8;
    }
}

loc_800ED2F0:
{
    r3 = 15;
    r4 = 13;
    r5 = 27;
    r6 = 27;
    ctx->lr = 0x800ED304u;
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
    InvokeDirectCpu<0x800EEBC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800ED5A8;
}

loc_800ED308:
{
    r3 = 0x802F0000u;
    r4 = MemoryInline::FlatRead32((r13 + -26820));
    r3 = (r3 + 7352);
    r6 = 0x800F0000u;
    r0 = MemoryInline::FlatRead32((r3 + 432));
    r6 = (r6 + -10544);
    r5 = MemoryInline::FlatRead32((r3 + 436));
    r3 = (r4 + 23204);
    r7 = (r4 + 23016);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r5 = 32;
    MemoryInline::FlatWrite32(r4, r0);
    ctx->lr = 0x800ED33Cu;
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
    InvokeDirectCpu<0x8019B8ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 16;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED348:
{
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r3 + 23000));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED354:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED5A8;
    }
}

loc_800ED358:
{
    r5 = MemoryInline::FlatRead32((r3 + 23004));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(32));
}

loc_800ED360:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ED370;
    }
}

loc_800ED364:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 23004), r0);
    goto loc_800ED38C;
}

loc_800ED370:
{
    r4 = (r31 + 516);
    r3 = 16777216;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800ED380u;
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
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 23004), r0);
}

loc_800ED38C:
{
    r3 = 17;
    r4 = 15;
    r5 = 27;
    r6 = 27;
    ctx->lr = 0x800ED3A0u;
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
    InvokeDirectCpu<0x800EEBC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800ED5A8;
}

loc_800ED3A4:
{
    r5 = MemoryInline::FlatRead32((r13 + -26820));
    r4 = 0x800F0000u;
    r4 = (r4 + -10544);
    r3 = (r5 + 23204);
    r5 = (r5 + 23016);
    ctx->lr = 0x800ED3BCu;
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
    InvokeDirectCpu<0x8019CAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 18;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED3C8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r3 + 23000));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED3D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED5A8;
    }
}

loc_800ED3D8:
{
    r3 = 19;
    r4 = 17;
    r5 = 27;
    r6 = 27;
    ctx->lr = 0x800ED3ECu;
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
    InvokeDirectCpu<0x800EEBC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800ED5A8;
}

loc_800ED3F0:
{
    r5 = MemoryInline::FlatRead32((r13 + -26820));
    r6 = 0x802F0000u;
    r6 = (r6 + 7352);
    r3 = MemoryInline::FlatRead32((r5 + 23012));
    r4 = (r5 + 16766);
    r7 = MemoryInline::FlatRead32((r6 + 432));
    r5 = (r5 + 16818);
    r8 = MemoryInline::FlatRead32((r6 + 436));
    ctx->lr = 0x800ED414u;
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
    InvokeDirectCpu<0x800ED6E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = 20;
    MemoryInline::FlatWrite32((r5 + 23356), r4);
    MemoryInline::FlatWrite32((r5 + 23352), r3);
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED430:
{
    r3 = 0x802F0000u;
    r0 = MemoryInline::FlatRead32((r3 + 7352));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800ED43C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800ED44C;
    }
}

loc_800ED440:
{
    r0 = 23;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED44C:
{
}

loc_800ED450:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(-20999))) {
        goto loc_800ED468;
    }
}

loc_800ED454:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-20102));
}

loc_800ED458:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800ED468;
    }
}

loc_800ED45C:
{
    r0 = 23;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED468:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED46C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ED4A8;
    }
}

loc_800ED470:
{
    r4 = MemoryInline::FlatRead32((r13 + -26820));
    r3 = MemoryInline::FlatRead32((r4 + 22996));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 22996), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r3 + 22996));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_800ED48C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ED49C;
    }
}

loc_800ED490:
{
    r0 = 19;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED49C:
{
    r0 = 23;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED4A8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = 0x80000000u;
    r6 = MemoryInline::FlatRead32((r13 + -26820));
    r0 = MemoryInline::FlatRead32((r5 + 248));
    r5 = 274857984;
    r7 = MemoryInline::FlatRead32((r6 + 23356));
    r5 = (r5 + 19923);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & 1073741823);
    r6 = MemoryInline::FlatRead32((r6 + 23352));
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r0)) >> 32));
    r4_subfc_min_2 = r4;
    r4 = (r4_subfc_min_2 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_2) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r3_subfe_rb_2 = r3;
    r3_not_2 = ~(r6);
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_not_2 + r3_subfe_rb_2);
    r3 = (r3 + r3_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_2 & 67108863);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800216F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    r6 = 30000;
    r5 = (r3 ^ -2147483648);
    r0 = (r0 ^ -2147483648);
    r3 = (r6 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r5_not_3 = ~(r5);
    r5_ca_3 = (xer >> 29) & 1u;
    r5 = (r5_not_3 + r0);
    r5 = (r5 + r5_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_4 = ~(r0);
    r5_ca_4 = (xer >> 29) & 1u;
    r5 = (r5_not_4 + r0);
    r5 = (r5 + r5_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (0 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED5A8;
    }
}

loc_800ED508:
{
    r4 = (r31 + 552);
    r3 = 16777216;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800ED518u;
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
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 21;
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED524:
{
    r0 = 22;
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    r3 = MemoryInline::FlatRead32((r3 + 23008));
    ctx->lr = 0x800ED538u;
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
    InvokeDirectCpu<0x801D92B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800ED5A8;
}

loc_800ED53C:
{
    r4 = 0x802F0000u;
    r0 = MemoryInline::FlatRead32((r4 + 7352));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED548:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED5A8;
    }
}

loc_800ED54C:
{
    r3 = -20100;
    r0 = 23;
    MemoryInline::FlatWriteRam32((r4 + 7352), r3);
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    goto loc_800ED5A8;
}

loc_800ED560:
{
    r30 = 0x802F0000u;
    r0 = 24;
    r30 = (r30 + 7352);
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    r0 = MemoryInline::FlatRead32((r30 + 456));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ED578:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ED59C;
    }
}

loc_800ED57C:
{
    r4 = (r31 + 384);
    r3 = 16777216;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800ED58Cu;
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
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 456));
    ctx->lr = 0x800ED594u;
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
    InvokeDirectCpu<0x801D92F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r30 + 456), r0);
}

loc_800ED59C:
{
    r3 = 0x800F0000u;
    r3 = (r3 + -5268);
    ctx->lr = 0x800ED5A8u;
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
    InvokeDirectCpu<0x801D8DBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800ED5A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800ECF20 func_800ECF20 preserves=true fpr_mask=0x00000000
