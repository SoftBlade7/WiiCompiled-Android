#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801926D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801926D4;

loc_801926D4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r8 = 0x80250000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r8 = (r8 + 11344);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r6 = MemoryInline::FlatRead8(r5);
}

loc_801926FC:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(128))) {
        goto loc_8019270C;
    }
}

loc_80192700:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_8019270C:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(247));
}

loc_80192714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80192734;
    }
}

loc_80192718:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80192728;
    }
}

loc_8019271C:
{
}

loc_80192720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(240))) {
        goto loc_80192734;
    }
}

loc_80192724:
{
    goto loc_801928E8;
}

loc_80192728:
{
}

loc_8019272C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_8019277C;
    }
}

loc_80192730:
{
    goto loc_801928E8;
}

loc_80192734:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r5 = MemoryInline::FlatRead8(r3);
    r6 = (r5 & 127);
    goto loc_80192760;
}

loc_80192744:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r3 = (r3_rot_4 & -128);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r5 = MemoryInline::FlatRead8(r5);
    r0 = (r5 & 127);
    r6 = (r3 + r0);
}

loc_80192760:
{
    r0 = (r5 & 128);
}

loc_80192764:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80192744;
    }
}

loc_80192768:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 + 1);
    r0 = (r0 + r6);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_80192968;
}

loc_8019277C:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(81));
}

loc_8019278C:
{
    MemoryInline::FlatWrite32((r4 + 12), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801927D4;
    }
}

loc_80192794:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801928A0;
    }
}

loc_80192798:
{
}

loc_8019279C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(47))) {
        goto loc_801927A4;
    }
}

loc_801927A0:
{
    goto loc_801928A0;
}

loc_801927A4:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3 = (r3 + -1);
    MemoryInline::FlatWrite32((r5 + 12), r3);
    MemoryInline::FlatWrite32((r4 + 36), r0);
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_801927C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80192968;
    }
}

loc_801927C8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_80192968;
}

loc_801927D4:
{
    r0 = MemoryInline::FlatRead8(r3);
    goto loc_801927EC;
}

loc_801927DC:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r3);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801927EC:
{
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801927F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801927DC;
    }
}

loc_801927F4:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r3 + 1);
    f6.d = MemoryInline::FlatReadFloat64((r8 + 16));
    MemoryInline::FlatWrite32((r4 + 12), r3);
    r5 = (r3 + 1);
    r6 = (r5 + 1);
    f4.d = MemoryInline::FlatReadFloat32(r8);
    r7 = MemoryInline::FlatRead8(r3);
    r3 = (r6 + 1);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_1 & -256);
    f2.d = MemoryInline::FlatReadFloat32((r8 + 12));
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r9 = MemoryInline::FlatRead32(r4);
    r5 = MemoryInline::FlatRead8(r5);
    f3.d = MemoryInline::FlatReadFloat64((r8 + 24));
    r0 = (r7 + r5);
    MemoryInline::FlatWrite32((r4 + 12), r6);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5 = (r5_rot_1 & -256);
    f1.d = MemoryInline::FlatReadFloat32((r8 + 8));
    r0 = MemoryInline::FlatRead8(r6);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f6.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f5.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f5.d));
    MemoryInline::FlatWriteFloat32((r4 + 20), f5.d);
    r0 = MemoryInline::FlatRead16((r9 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r31 + 28), r3);
    goto loc_80192968;
}

loc_801928A0:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r5 = MemoryInline::FlatRead8(r3);
    r6 = (r5 & 127);
    goto loc_801928CC;
}

loc_801928B0:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r3 = (r3_rot_2 & -128);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r5 = MemoryInline::FlatRead8(r5);
    r0 = (r5 & 127);
    r6 = (r3 + r0);
}

loc_801928CC:
{
    r0 = (r5 & 128);
}

loc_801928D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801928B0;
    }
}

loc_801928D4:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 + 1);
    r0 = (r0 + r6);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_80192968;
}

loc_801928E8:
{
    r5 = 0x80290000u;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r5 = (r5 + -5864);
    r5 = (r0 + r5);
    r0 = MemoryInline::FlatRead8((r5 + -128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80192900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80192918;
    }
}

loc_80192904:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019290C;
    }
}

loc_80192908:
{
    goto loc_80192960;
}

loc_8019290C:
{
}

loc_80192910:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80192960;
    }
}

loc_80192914:
{
    goto loc_80192934;
}

loc_80192918:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_80192960;
}

loc_80192934:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_80192960:
{
    r4 = (r1 + 8);
    // inline leaf 0x80191464 (20 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r4 = MemoryInline::FlatRead32((r3 + 1024));
    r5 = (r5 + 1);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    MemoryInline::FlatWrite32((r3 + 1024), r0);
    // end of inlined leaf 0x80191464
}

loc_80192968:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80192974:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801929A4;
    }
}

loc_80192978:
{
    r4 = MemoryInline::FlatRead32(r31);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r3 + -1);
    MemoryInline::FlatWrite32((r4 + 12), r3);
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80192998:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801929A4;
    }
}

loc_8019299C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r4 + 16), r0);
}

loc_801929A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800003FB gpr_write=0x800003FB gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801926D4 func_801926D4 preserves=true fpr_mask=0x00000000
