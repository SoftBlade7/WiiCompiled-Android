#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80786C60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80786CE4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r9_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80786C60;

loc_80786C60:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r6 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    r8 = MemoryInline::FlatRead32((r3 + 1056));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWrite32((r3 + 1080), r0);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWrite32((r3 + 1084), r0);
    r9 = (r8 + -1);
    MemoryInline::FlatWriteFloat32((r3 + 1088), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 1092), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 1096), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 1100), f1.d);
    MemoryInline::FlatWrite32((r3 + 1104), r5);
}

loc_80786CA8:
{
    r10 = (r0 + r9);
    r11 = (r6 + r9);
}

loc_80786CB4:
{
    if ((static_cast<int32_t>(r10) > static_cast<int32_t>(r8))) {
        goto loc_80786CD4;
    }
}

loc_80786CB8:
{
    r7 = MemoryInline::FlatRead32((r3 + 16));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & -8);
    r4 = (r7 + r4);
    f0.d = MemoryInline::FlatReadFloat32((r4 + -8));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_80786CCC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80786CD4;
    }
}

loc_80786CD0:
{
    r0 = r10;
}

loc_80786CD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(r8));
}

loc_80786CD8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80786CF8;
    }
}

loc_80786CDC:
{
    r7 = MemoryInline::FlatRead32((r3 + 20));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r4 = (r4_rot_4 & -8);
    addr_lfsx_80786CE4_loc_0 = (r7 + r4);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80786CE4_loc_0);
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80786CEC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80786CF8;
    }
}

loc_80786CF4:
{
    r6 = r11;
}

loc_80786CF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(1));
}

loc_80786CFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80786D0C;
    }
}

loc_80786D00:
{
    r4 = (r9 + 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r4) >> 1);
    goto loc_80786CA8;
}

loc_80786D0C:
{
    r8 = MemoryInline::FlatRead32((r3 + 16));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r7 = (r7_rot_0 & -8);
    r4 = (r6 + 1);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r9 = (r9_rot_0 & -8);
    r7 = (r8 + r7);
    r7 = MemoryInline::FlatRead8((r7 + 5));
    r4 = (r4 - r7);
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r7));
}

loc_80786D30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80786D34:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r7 = (r4 + r9);
    r4 = MemoryInline::FlatRead8((r7 + 4));
}

loc_80786D44:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80786DA4;
    }
}

loc_80786D48:
{
    r4 = MemoryInline::FlatRead8((r7 + 5));
    r7 = MemoryInline::FlatRead32((r3 + 24));
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r4 = (r4_rot_7 & -32);
    r10 = (r7 + r4);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 24));
    SetCRFloatResident(cr, 0, f0.d, f7.d);
}

loc_80786D60:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80786DAC;
    }
}

loc_80786D64:
{
    f0.d = MemoryInline::FlatReadFloat32((r10 + 28));
    SetCRFloatResident(cr, 0, f0.d, f6.d);
}

loc_80786D6C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80786DAC;
    }
}

loc_80786D70:
{
    r7 = MemoryInline::FlatRead32((r10 + 12));
    r4 = (r7 & r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80786DAC;
    }
}

loc_80786D7C:
{
    r4 = (r7 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80786D80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80786DAC;
    }
}

loc_80786D84:
{
    r7 = MemoryInline::FlatRead32((r3 + 1080));
    r8 = MemoryInline::FlatRead32((r3 + 28));
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_8 & -4);
    r7 = (r7 + 1);
    r8_addr_2 = (r8 + r4);
    MemoryInline::FlatWrite32(r8_addr_2, r10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(256));
}

loc_80786D9C:
{
    MemoryInline::FlatWrite32((r3 + 1080), r7);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80786DA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80786DA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80786DAC:
{
    r9 = (r9 + -8);
    r6 = (r6 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80786D34;
    }
}

loc_80786DB8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FD1 gpr_return=0x00000010 fpr_read=0x000000F3 fpr_write=0x000000FD fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80786C60 func_80786C60 preserves=true fpr_mask=0x00000000
