#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80588E24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80588EA8_loc_0 = 0;
    uint32_t addr_lfsx_80588EB4_loc_0 = 0;
    uint32_t addr_lfsx_80588EBC_loc_0 = 0;
    uint32_t addr_lfsx_80588F18_loc_0 = 0;
    uint32_t addr_lfsx_80588F24_loc_0 = 0;
    uint32_t addr_lfsx_80588F2C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80588E24;

loc_80588E24:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r12 = 0x80890000u;
    r12 = (r12 + 6656);
    r5 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r5 = (r5 + 22768);
    r0 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r12 + 4));
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r8 = (r5 + 880);
    f0.d = MemoryInline::FlatReadFloat32((r12 + 12));
    r7 = (r5 + 904);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r6 = (r5 + 952);
    r31 = 0;
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r29 = 0;
    r28 = 0;
    r10 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    ctr = r0;
}

loc_80588E84:
{
    r0 = (r28 & 255);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r11 = (r11_rot_2 & 510);
    r0 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r0));
    r5 = MemoryInline::FlatRead16((r3 + 16));
    r9 = (r0 & 65535);
    r11 = (r3 + r11);
    r0 = (r5 & r9);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80588EF0;
    }
}

loc_80588EA4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    addr_lfsx_80588EA8_loc_0 = (r8 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80588EA8_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    addr_lfsx_80588EB4_loc_0 = (r7 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80588EB4_loc_0);
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    addr_lfsx_80588EBC_loc_0 = (r6 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80588EBC_loc_0);
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    r5 = MemoryInline::FlatRead16((r11 + 4));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r11 + 4), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80588EEC;
    }
}

loc_80588ED8:
{
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r30 = 1;
    r0 = (r0 & ~r9);
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r0));
    goto loc_80588EF0;
}

loc_80588EEC:
{
    r29 = 1;
}

loc_80588EF0:
{
    r28 = (r28 + 1);
    r5 = MemoryInline::FlatRead16((r3 + 16));
    r0 = (r28 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r10), static_cast<uint32_t>(r0));
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r11 = (r11_rot_3 & 510);
    r9 = (r0 & 65535);
    r0 = (r5 & r9);
    r11 = (r3 + r11);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80588F60;
    }
}

loc_80588F14:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    addr_lfsx_80588F18_loc_0 = (r8 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80588F18_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    addr_lfsx_80588F24_loc_0 = (r7 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80588F24_loc_0);
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    addr_lfsx_80588F2C_loc_0 = (r6 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80588F2C_loc_0);
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    r5 = MemoryInline::FlatRead16((r11 + 4));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r11 + 4), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80588F5C;
    }
}

loc_80588F48:
{
    r0 = MemoryInline::FlatRead16((r3 + 16));
    r30 = 1;
    r0 = (r0 & ~r9);
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r0));
    goto loc_80588F60;
}

loc_80588F5C:
{
    r29 = 1;
}

loc_80588F60:
{
    r28 = (r28 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80588E84;
    }
}

loc_80588F68:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r12 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80588F74:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80588F88;
    }
}

loc_80588F78:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = MemoryInline::FlatReadFloat32(r12);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80588F84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80588F8C;
    }
}

loc_80588F88:
{
    r31 = 1;
}

loc_80588F8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80588F90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80588FA4;
    }
}

loc_80588F94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80588F98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80588FA4;
    }
}

loc_80588F9C:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_80588FA4:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00015DB gpr_write=0xF0001FEB gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80588E24 func_80588E24 preserves=true fpr_mask=0x00000000
