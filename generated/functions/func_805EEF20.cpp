#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EEF20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805EEF20;

loc_805EEF20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805EEF24:
{
    r9 = 0x80890000u;
    r9 = (r9 + 23712);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EF124;
    }
}

loc_805EEF30:
{
    r6 = 0;
    r7 = 9;
    r0 = r6;
    f4.d = MemoryInline::FlatReadFloat32((r9 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r9 + 20));
    r8 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r9 + 24));
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r9 + 28));
    r9 = -1;
    ctr = r7;
}

loc_805EEF5C:
{
    r7 = (r6 + -3);
}

loc_805EEF64:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(3))) {
        goto loc_805EEFE0;
    }
}

loc_805EEF68:
{
}

loc_805EEF6C:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(2))) {
        goto loc_805EEF78;
    }
}

loc_805EEF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(8));
}

loc_805EEF74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805EF114;
    }
}

loc_805EEF78:
{
    r12 = (r3 + r6);
    r10 = MemoryInline::FlatRead16((r4 + 92));
    r11 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r7 = MemoryInline::FlatRead8((r12 + 40));
    r11 = (r11 & r10);
    r10 = (0 - r11);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_805EEF94:
{
    r7 = (r10 | r11);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EEFB8;
    }
}

loc_805EEFA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_805EEFA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805EF114;
    }
}

loc_805EEFA8:
{
    MemoryInline::FlatWrite8((r12 + 40), static_cast<uint8_t>(r0));
    r7 = (r3 + r8);
    MemoryInline::FlatWrite32((r7 + 4), r9);
    goto loc_805EF114;
}

loc_805EEFB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_805EEFBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EEFD4;
    }
}

loc_805EEFC0:
{
    r10 = (r3 + r8);
    r7 = MemoryInline::FlatRead32((r10 + 4));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite32((r10 + 4), r7);
    goto loc_805EF114;
}

loc_805EEFD4:
{
    r7 = (r3 + r8);
    MemoryInline::FlatWrite32((r7 + 4), r9);
    goto loc_805EF114;
}

loc_805EEFE0:
{
    r10 = MemoryInline::FlatRead16((r4 + 92));
    r11 = 0;
    r7 = (r10 & 8);
}

loc_805EEFEC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_805EF008;
    }
}

loc_805EEFF0:
{
    r7 = (r10 & 16);
}

loc_805EEFF4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_805EF008;
    }
}

loc_805EEFF8:
{
    r7 = (r10 & 32);
}

loc_805EEFFC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_805EF008;
    }
}

loc_805EF000:
{
    r7 = (r10 & 64);
}

loc_805EF004:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_805EF020;
    }
}

loc_805EF008:
{
    r7 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r10 = (r7 & r10);
    r7 = (0 - r10);
    r7 = (r7 | r10);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r11 = (r11_rot_2 & 1);
    goto loc_805EF0F0;
}

loc_805EF020:
{
}

loc_805EF024:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_805EF044;
    }
}

loc_805EF028:
{
}

loc_805EF02C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_805EF070;
    }
}

loc_805EF030:
{
}

loc_805EF034:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_805EF09C;
    }
}

loc_805EF038:
{
}

loc_805EF03C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(6))) {
        goto loc_805EF0C8;
    }
}

loc_805EF040:
{
    goto loc_805EF0F0;
}

loc_805EF044:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 100));
    r11 = 0;
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_805EF050:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805EF068;
    }
}

loc_805EF054:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_805EF058:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805EF0F0;
    }
}

loc_805EF05C:
{
    r7 = MemoryInline::FlatRead32((r3 + 16));
}

loc_805EF064:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_805EF0F0;
    }
}

loc_805EF068:
{
    r11 = 1;
    goto loc_805EF0F0;
}

loc_805EF070:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 100));
    r11 = 0;
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_805EF07C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805EF094;
    }
}

loc_805EF080:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805EF084:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805EF0F0;
    }
}

loc_805EF088:
{
    r7 = MemoryInline::FlatRead32((r3 + 20));
}

loc_805EF090:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_805EF0F0;
    }
}

loc_805EF094:
{
    r11 = 1;
    goto loc_805EF0F0;
}

loc_805EF09C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 96));
    r11 = 0;
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_805EF0A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805EF0C0;
    }
}

loc_805EF0AC:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805EF0B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805EF0F0;
    }
}

loc_805EF0B4:
{
    r7 = MemoryInline::FlatRead32((r3 + 24));
}

loc_805EF0BC:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_805EF0F0;
    }
}

loc_805EF0C0:
{
    r11 = 1;
    goto loc_805EF0F0;
}

loc_805EF0C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 96));
    r11 = 0;
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_805EF0D4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805EF0EC;
    }
}

loc_805EF0D8:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_805EF0DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805EF0F0;
    }
}

loc_805EF0E0:
{
    r7 = MemoryInline::FlatRead32((r3 + 28));
}

loc_805EF0E8:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_805EF0F0;
    }
}

loc_805EF0EC:
{
    r11 = 1;
}

loc_805EF0F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_805EF0F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805EF10C;
    }
}

loc_805EF0F8:
{
    r10 = (r3 + r8);
    r7 = MemoryInline::FlatRead32((r10 + 4));
    r7 = (r7 + 1);
    MemoryInline::FlatWrite32((r10 + 4), r7);
    goto loc_805EF114;
}

loc_805EF10C:
{
    r7 = (r3 + r8);
    MemoryInline::FlatWrite32((r7 + 4), r9);
}

loc_805EF114:
{
    r6 = (r6 + 1);
    r8 = (r8 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805EEF5C;
    }
}

loc_805EF120:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805EF124:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0x00001FE1 gpr_return=0x00000000 fpr_read=0xFFFFFFFF fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x805EEF20 func_805EEF20 preserves=true fpr_mask=0x00000000
