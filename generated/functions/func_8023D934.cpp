#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023D934(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023D934;

loc_8023D934:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = (r3 + 72);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = (r3 + 76);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    r28 = r3;
    r5 = MemoryInline::FlatRead16((r3 + 52));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0 = (r5 & 32);
}

loc_8023D96C:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8023D988;
    }
}

loc_8023D974:
{
    r0 = (r5 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023D978:
{
    r0 = 2;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023D98C;
    }
}

loc_8023D980:
{
    r0 = MemoryInline::FlatRead32((r13 + -23792));
    goto loc_8023D98C;
}

loc_8023D988:
{
    r0 = 0;
}

loc_8023D98C:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
    r4 = 0x802A0000u;
    r0 = (r0 * 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8023D99C:
{
    r4 = (r4 + 16104);
    r29 = (r4 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023D9D0;
    }
}

loc_8023D9A8:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 64));
    r4 = (r13 + -23776);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -23776));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    goto loc_8023D9E8;
}

loc_8023D9D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 64));
    r3 = r5;
    f2.d = MemoryInline::FlatReadFloat32((r28 + 68));
    r4 = r31;
    r5 = r30;
    ctx->lr = 0x8023D9E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023E600u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_8023D9E8:
{
    f2.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24448));
    MemoryInline::FlatWrite32((r28 + 100), r0);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8023D9FC:
{
    MemoryInline::FlatWrite32((r28 + 96), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8023DA3C;
    }
}

loc_8023DA04:
{
    f0.d = PPC_Fctiwz(f2.d);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -24424));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (0 - r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r3 & 1);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r28 + 96), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
}

loc_8023DA3C:
{
    f2.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24448));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8023DA48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8023DA84;
    }
}

loc_8023DA4C:
{
    f0.d = PPC_Fctiwz(f2.d);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -24424));
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword1;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (0 - r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = (r3 & 1);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r28 + 100), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
}

loc_8023DA84:
{
    r0 = MemoryInline::FlatRead16((r28 + 52));
    r0 = (r0 & 2);
}

loc_8023DA8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023DAEC;
    }
}

loc_8023DA90:
{
    f4.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f2.d = PPC_Fctiwz(f4.d);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -24424));
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword2 = PPC_FprLowWordInline(f2.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword2;
    r0 = fctiwzword3;
    r3 = (r3 & 1);
    r0 = (r0 & 1);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32(r31, f2.d);
    MemoryInline::FlatWriteFloat32(r30, f0.d);
}

loc_8023DAEC:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    r0 = MemoryInline::FlatRead16((r28 + 52));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023DB04:
{
    MemoryInline::FlatWriteFloat32((r28 + 80), f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 84), f3.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DB6C;
    }
}

loc_8023DB18:
{
    f1.d = PPC_Fctiwz(f4.d);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -24424));
    f0.d = PPC_Fctiwz(f3.d);
    fctiwzword4 = PPC_FprLowWordInline(f1.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword4;
    r0 = fctiwzword5;
    r3 = (r3 & 3);
    r0 = (r0 & 3);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 80), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 84), f0.d);
}

loc_8023DB6C:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 84));
    f1.d = PPC_Fctiwz(f1.d);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -24424));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f1.d);
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword6;
    r0 = fctiwzword7;
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r28 + 80), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 84), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC027FF gpr_write=0xFFC0083B gpr_return=0x00000018 fpr_read=0xFF003FFF fpr_write=0xFF00007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023D934 func_8023D934 preserves=true fpr_mask=0x00000000
