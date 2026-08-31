#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801160A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801160A4;

loc_801160A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80280000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r4 + -9752);
    r5 = (r1 + 20);
    r6 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r7 = (r1 + 12);
    r8 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 160));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801160DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013040u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_801160E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80116104;
    }
}

loc_801160E4:
{
    r6 = MemoryInline::FlatRead32((r1 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_801160EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80116104;
    }
}

loc_801160F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_801160F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80116104;
    }
}

loc_801160FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(600));
}

loc_80116100:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8011611C;
    }
}

loc_80116104:
{
    r3 = 1;
    r0 = 7;
    MemoryInline::FlatWrite32((r31 + 288), r3);
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 60), r0);
    goto loc_801161A8;
}

loc_8011611C:
{
    r3 = 0x80270000u;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 4424);
    r5 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_80116138;
}

loc_80116130:
{
    r4 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
}

loc_80116138:
{
    r3 = MemoryInline::FlatRead32((r31 + 160));
    r3_addr_2 = (r3 + r4);
    r7 = MemoryInline::FlatRead8(r3_addr_2);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80116188;
    }
}

loc_80116148:
{
    r0 = 0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80116158;
    }
}

loc_80116150:
{
}

loc_80116154:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(256))) {
        goto loc_8011615C;
    }
}

loc_80116158:
{
    r0 = 1;
}

loc_8011615C:
{
}

loc_80116160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011616C;
    }
}

loc_80116164:
{
    r0 = 0;
    goto loc_80116180;
}

loc_8011616C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_3);
    r0 = (r0 & 256);
}

loc_80116180:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80116184:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80116130;
    }
}

loc_80116188:
{
    MemoryInline::FlatWrite32((r31 + 268), r6);
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r31 + 272), r0);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r31 + 276), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r31 + 280), r0);
}

loc_801161A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE6FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801160A4 func_801160A4 preserves=true fpr_mask=0x00000000
