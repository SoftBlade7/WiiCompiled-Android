#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808176E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    goto loc_808176E0;

loc_808176E0:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    r9 = 1127219200;
    r10 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r7 = 0x808B0000u;
    r10 = (r10 + 25680);
    r8 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 188), r31);
    r11 = r3;
    f3.d = MemoryInline::FlatReadFloat64((r7 + -19384));
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 184), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 180), r29);
    r29 = r4;
    r0 = MemoryInline::FlatRead32((r10 + 8));
    r8 = MemoryInline::FlatRead32((r8 + -10448));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 156), r0);
    r7 = MemoryInline::FlatRead32((r8 + 32));
    MemoryInline::FlatWriteRam32((r1 + 152), r9);
    r4 = MemoryInline::FlatRead32((r3 + 308));
    r0 = MemoryInline::FlatRead32((r3 + 312));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 152));
    r5 = MemoryInline::FlatRead16(r10);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r10 + 4));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r5));
}

loc_80817758:
{
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f4.d = PpcFmulsInline(f1.d, f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 316));
    MemoryInline::FlatWriteRam32((r1 + 160), r9);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80817778;
    }
}

loc_80817770:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 308));
    goto loc_808177E4;
}

loc_80817778:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r7));
}

loc_8081777C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_808177DC;
    }
}

loc_80817780:
{
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 156), r0);
    r0 = (r7 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 152));
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808177A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808177DC;
    }
}

loc_808177AC:
{
    r0 = (r7 - r5);
    r4 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + -19388));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 160));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 308));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_808177E4;
}

loc_808177DC:
{
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -19392));
}

loc_808177E4:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    r3 = (r1 + 104);
    r4 = (r1 + 44);
    r5 = (r11 + 48);
    ctx->lr = 0x808177F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 56);
    r4 = (r1 + 44);
    ctx->lr = 0x80817804u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r6 = MemoryInline::FlatRead32((r29 + 8));
    r3 = (r1 + 20);
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r4 = (r1 + 104);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    r0 = MemoryInline::FlatRead32((r29 + 16));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r5 = 0x802A0000u;
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    r3 = (r1 + 8);
    r4 = (r1 + 56);
    r5 = (r5 + 16688);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r31;
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    ctx->lr = 0x80817878u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 196));
    r31 = MemoryInline::FlatRead32((r1 + 188));
    r30 = MemoryInline::FlatRead32((r1 + 184));
    r29 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 192);
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

// RECOMP_GUEST_ABI gpr_read=0xE0000AFF gpr_write=0xE0000FFB gpr_return=0x00000018 fpr_read=0xFC00001F fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808176E0 func_808176E0 preserves=true fpr_mask=0x00000000
