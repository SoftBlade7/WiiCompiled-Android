#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001FB18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001FB18;

loc_8001FB18:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(96));
}

loc_8001FB24:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r6;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001FB3C;
    }
}

loc_8001FB34:
{
    r3 = 1793;
    goto loc_8001FC68;
}

loc_8001FB3C:
{
    r12 = 0x80270000u;
}

loc_8001FB44:
{
    r12 = (r12 + 7080);
    r0 = 0;
    r8 = MemoryInline::FlatRead32((r12 + 12));
    r11 = MemoryInline::FlatRead32(r12);
    r10 = MemoryInline::FlatRead32((r12 + 4));
    r9 = MemoryInline::FlatRead32((r12 + 8));
    MemoryInline::FlatWriteRam8((r12 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 8), r11);
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    MemoryInline::FlatWriteRam32((r1 + 16), r9);
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    MemoryInline::FlatWrite32(r6, r0);
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r4))) {
        goto loc_8001FC24;
    }
}

loc_8001FB78:
{
    r4 = (r4 - r3);
    r8 = 0x802A0000u;
    r9 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8001FB88:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r8 = (r8 + 25912);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    MemoryInline::FlatWrite32(r6, r7);
    r3 = (r8 + r0);
    r4 = (r3 + 424);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FBB4;
    }
}

loc_8001FBA4:
{
    r3 = r5;
    r5 = r9;
    ctx->lr = 0x8001FBB0u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D618u>(ctx);
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
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8001FC24;
}

loc_8001FBB4:
{
    r0 = (r8 + 492);
}

loc_8001FBBC:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_8001FBE0;
    }
}

loc_8001FBC0:
{
    r3 = (r4 + r7);
    r0 = (r8 + 488);
    r3 = (r3 + -4);
}

loc_8001FBD0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8001FBE0;
    }
}

loc_8001FBD4:
{
    r3 = 0x802A0000u;
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 25544), static_cast<uint8_t>(r0));
}

loc_8001FBE0:
{
    r3 = 0x802A0000u;
    r3 = (r3 + 25912);
    r6 = (r3 + 632);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
}

loc_8001FBF0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8001FC18;
    }
}

loc_8001FBF4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r0 = (r3 + -4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_8001FC04:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8001FC18;
    }
}

loc_8001FC08:
{
    r3 = 0x802A0000u;
    r0 = 1;
    r3 = (r3 + 25544);
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
}

loc_8001FC18:
{
    r3 = r5;
    r5 = r9;
    ctx->lr = 0x8001FC24u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D880u>(ctx);
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
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001FC24:
{
    r4 = 0x80270000u;
    r4 = (r4 + 7080);
    r0 = MemoryInline::FlatRead8((r4 + 13));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001FC34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FC44;
    }
}

loc_8001FC38:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    r3 = 1794;
}

loc_8001FC44:
{
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r7 = 0x80270000u;
    MemoryInline::FlatWriteRam32((r7 + 7080), r6);
    r7 = (r7 + 7080);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r7 + 4), r5);
    MemoryInline::FlatWriteRam32((r7 + 8), r4);
    MemoryInline::FlatWriteRam32((r7 + 12), r0);
}

loc_8001FC68:
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE003FFB gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001FB18 func_8001FB18 preserves=true fpr_mask=0x00000000
