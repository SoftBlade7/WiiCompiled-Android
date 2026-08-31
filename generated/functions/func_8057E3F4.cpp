#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057E3F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8057E3F4;

loc_8057E3F4:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = 0x80890000u;
    r30 = (r30 + 6656);
    // inline leaf 0x80590A10 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590A10
}

loc_8057E424:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_8057E55C;
    }
}

loc_8057E428:
{
    r3 = MemoryInline::FlatRead32(r31);
    f31.d = MemoryInline::FlatReadFloat32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057E43C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057E504;
    }
}

loc_8057E440:
{
    r3 = r31;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = 0x802A0000u;
    r5 = (r1 + 20);
    r4 = (r4 + 16712);
    r3 = (r3 + 240);
    ctx->lr = 0x8057E45Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f31 = ctx->fpr[31];
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    r5 = (r31 + 212);
    // inline leaf 0x805AEBD0 (21 guest instruction(s))
    f5.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f8.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    f7.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f8.d, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f2.d = PpcFmulsInline(f5.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f8.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x805AEBD0
    r3 = (r1 + 32);
    ctx->lr = 0x8057E474u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = f31.d;
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057E47C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057E504;
    }
}

loc_8057E480:
{
    f10.d = MemoryInline::FlatReadFloat32((r31 + 224));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f7.d = MemoryInline::FlatReadFloat32((r31 + 228));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f8.d = PpcFmulsInline(f10.d, f9.d);
    f6.d = MemoryInline::FlatReadFloat32((r31 + 232));
    f3.d = PpcFmulsInline(f7.d, f9.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = PpcFmulsInline(f7.d, f4.d);
    f1.d = PpcFmulsInline(f6.d, f4.d);
    f0.d = PpcFmulsInline(f10.d, f5.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f2.d));
    f2.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f8.d);
    f1.d = PpcFmulsInline(f6.d, f9.d);
    f4.d = PpcFmulsInline(f10.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f2.d = PpcFmulsInline(f8.d, f8.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f5.d = PpcFmulsInline(f6.d, f5.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8057E4F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = f31.d;
    ctx->lr = 0x8057E4FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F8E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 88));
    f31.d = PpcFmulsInline(f0.d, f1.d);
}

loc_8057E504:
{
    r3 = MemoryInline::FlatRead32((r31 + 204));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r0 = (0 - r3);
    f2.d = MemoryInline::FlatReadFloat64((r30 + 96));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 156));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 196));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 156), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_8057E540:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057E54C;
    }
}

loc_8057E544:
{
    MemoryInline::FlatWriteFloat32((r31 + 156), f3.d);
    goto loc_8057E55C;
}

loc_8057E54C:
{
    f0.d = (-(f3.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057E554:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057E55C;
    }
}

loc_8057E558:
{
    MemoryInline::FlatWriteFloat32((r31 + 156), f0.d);
}

loc_8057E55C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -524289);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -134217729);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r4 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057E594:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057E618;
    }
}

loc_8057E598:
{
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23324));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8057E5B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057E5BC;
    }
}

loc_8057E5B4:
{
    r0 = 0;
    goto loc_8057E5C0;
}

loc_8057E5BC:
{
    r0 = MemoryInline::FlatRead32((r31 + 204));
}

loc_8057E5C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057E5C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057E618;
    }
}

loc_8057E5C8:
{
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = 1;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r4 = (r4 | 8);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r4 = MemoryInline::FlatRead32(r31);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r4 = (r4 & -524289);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite16((r31 + 252), static_cast<uint16_t>(r0));
    f31.d = MemoryInline::FlatReadFloat32((r31 + 176));
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f1.d = MemoryInline::FlatReadFloat32((r3 + 88));
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 22868));
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 260), f0.d);
}

loc_8057E618:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 84));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003F gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0xC00007FF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8057E3F4 func_8057E3F4 preserves=false fpr_mask=0x80000000
